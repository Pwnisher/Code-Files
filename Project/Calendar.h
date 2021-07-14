#include <iostream>
#define getch(); system("pause");

using namespace std;

const int MIN_YEAR = 1800;
const int MAX_YEAR = 9999;

const int month_days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
bool check = true;

int gotoxy(const WORD x, const WORD y) {
	COORD xy;
	xy.X = x;
	xy.Y = y;
	return SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), xy);
}

bool isLeapYear(int year)
{
	if (year % 400 == 0)
		return true;
	if (year % 100 == 0)
		return false;
	if (year % 4 == 0)
		return true;
	return false;
}

class Calendar
{
	int day, month, year;
public:
	Calendar()
	{
		day = 1;
		month = 1;
		year = 2000;
	}
	Calendar(int m, int d, int y)
	{
		if (y < MIN_YEAR || y > MAX_YEAR)
		{
			gotoxy(12, 27);
			cout << " Error: INVALID DATE ";
			//gotoxy(46, 27); getch();
			check = false;
		}

		if (m < 1 || m > 12)
		{
			gotoxy(12, 27);
			cout << " Error: INVALID DATE ";
			gotoxy(46, 27); getch();
			check = false;
		}

		bool ly = isLeapYear(y);

		if (ly && m == 2 && day > 29)
		{
			gotoxy(12, 27);
			cout << " Error: INVALID DATE ";
			gotoxy(46, 27); getch();
			check = false;
		}
		else if (d < 1 || d > month_days[m - 1])
		{
			gotoxy(12, 27);
			cout << " Error: INVALID DATE ";
			gotoxy(46, 27); getch();
			check = false;
		}
		day = d;
		month = m;
		year = y;
	}

	void addDays(int d)
	{
		bool ly = isLeapYear(year);
		day += d;
		while (day > month_days[month - 1])
		{
			if (ly && month == 2)
				day -= 29;
			else
				day -= month_days[month - 1];
			month++;
			if (month > 12)
			{
				month %= 12;
				year++;
				ly = isLeapYear(year);
			}
		}
	}

	void display() //idea: turn month into name ex. January
	{
		if (check == true)
		{
			cout << "[NEXT WATERING DATE]: ";
			if (month < 10)
				cout << "0" << month << "/";
			else
				cout << "/" << month;
			if (day < 10)
				cout << "0" << day;
			else
				cout << day;
			cout << "/" << year << endl;
			gotoxy(45, 27); getch();
		}
	}
};

int convertToNum(string month)
{
	if (month == "January")
		return 1;
	if (month == "February")
		return 2;
	if (month == "March")
		return 3;
	if (month == "April")
		return 4;
	if (month == "May")
		return 5;
	if (month == "June")
		return 6;
	if (month == "July")
		return 7;
	if (month == "August")
		return 8;
	if (month == "September")
		return 9;
	if (month == "October")
		return 10;
	if (month == "November")
		return 11;
	if (month == "December")
		return 12;
	else
		return 13;
}
