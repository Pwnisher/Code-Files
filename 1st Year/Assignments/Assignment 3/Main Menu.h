#pragma warning( disable : 4244 )
#pragma warning( disable : 6031 )
#include <iostream>
#include <fstream>
#include <math.h>
#include <string>
#include <algorithm>
#include <conio.h>
#include <iomanip>
#include <list>
#include "Clrscr.h"
#include "Borders.h"
using namespace std;

const int array1DSize = 5;
int array1DGlobal[5];
const int array2DRow = 3, array2DCol = 2;
int array2DGlobal[3][2], array2DGlobalCopy[3][2];

struct studentGrade
{
	string lastName{};
	string firstName{};
	string middleName{};
	float quiz1Score{};
	float quiz1Grade{};
	float quiz2Score{};
	float quiz2Grade{};
	float quizTotal{};
	float exercisesGrade{};
	float projectGrade{};
	float semestralGrade{};
	float equiGrade{};
	string remarks{};
};

int numArrayStruct = 2;
struct studentGrade student[2];
bool passed;

void login()
{
	string loginUser, loginPass;
	bool loginBool = true;
	while (loginBool == true)
	{
		clrscr();
		borderLogin();
		gotoxy(25, 12);
		cout << "Welcome to";
		gotoxy(21, 13);
		cout << "Final Main Menu by:";
		gotoxy(21, 15);
		cout << "Mark Angelo Decena";
		gotoxy(5, 24);
		cout << "Username: ";
		gotoxy(5, 26);
		cin >> loginUser;
		gotoxy(5, 24);
		cout << "Password: ";
		clearinputbox();
		cin >> loginPass;

		if (loginUser == "admin" && loginPass == "pass")
		{
			gotoxy(38, 24);
			cout << "Login Successful!" << endl;
			gotoxy(9, 26);
			loginBool = false;
			Sleep(1200);
		}
		else
		{
			gotoxy(46, 24);
			cout << "Try again" << endl;
			gotoxy(5, 26);
			Sleep(1200);
			gotoxy(46, 24);
			cout << "         " << endl;
		}
	}
}

//Sequence Case 1-10 + Main Menu Choice

void sequenceMainMenuCase1()
{
	clrscr();
	borderSequence();
	gotoxy(25, 13);
	cout << "Hello World" << endl;
	gotoxy(5, 26);
	_getch();
}

void sequenceMainMenuCase2()
{
	clrscr();
	borderSequence();

	float sequenceCase1Quo = 0, sequenceCase1Num1, sequenceCase1Num2, sequenceCase1Sum, sequenceCase1Diff, sequenceCase1Prod;

	gotoxy(21, 9);
	cout << "Enter two numbers:" << endl;
	gotoxy(5, 24);
	cout << "Separate with space:" << endl;
	gotoxy(5, 26);
	cin >> sequenceCase1Num1 >> sequenceCase1Num2;

	sequenceCase1Sum = sequenceCase1Num1 + sequenceCase1Num2;
	sequenceCase1Diff = sequenceCase1Num1 - sequenceCase1Num2;
	sequenceCase1Prod = sequenceCase1Num1 * sequenceCase1Num2;
	try {
		if (sequenceCase1Num2 == 0)
			throw 100;
		else
			sequenceCase1Quo = sequenceCase1Num1 / sequenceCase1Num2;
	}
	catch (...)
	{
		gotoxy(14, 28);
		cout << "Exception occured: Divide by Zero";
	}

	clearaboveinput();
	gotoxy(15, 12);
	cout << "The sum of " << sequenceCase1Num1 << " and " << sequenceCase1Num2 << " is " << sequenceCase1Sum << endl;
	gotoxy(15, 13);
	cout << "The difference of " << sequenceCase1Num1 << " and " << sequenceCase1Num2 << " is " << sequenceCase1Diff << endl;
	gotoxy(15, 14);
	cout << "The product of " << sequenceCase1Num1 << " and " << sequenceCase1Num2 << " is " << sequenceCase1Prod << endl;
	gotoxy(15, 15);
	cout << "The quotient of " << sequenceCase1Num1 << " and " << sequenceCase1Num2 << " is " << sequenceCase1Quo << endl;
	clearinputbox();
	_getch();
}

void sequenceMainMenuCase3()
{
	clrscr();
	borderSequence();
	float sequenceCase3A, sequenceCase3B, sequenceCase3C, sequenceCase3X1, sequenceCase3X2, sequenceCase3Discriminant;
	gotoxy(22, 9);
	cout << "Enter A, B and C: " << endl;
	gotoxy(5, 24);
	cout << "Separate with space:" << endl;
	gotoxy(5, 26);
	cin >> sequenceCase3A >> sequenceCase3B >> sequenceCase3C;

	sequenceCase3Discriminant = sequenceCase3B * sequenceCase3B - 4 * sequenceCase3A * sequenceCase3C;

	sequenceCase3X1 = (-sequenceCase3B + sqrt(sequenceCase3Discriminant)) / (2 * sequenceCase3A);
	sequenceCase3X2 = (-sequenceCase3B - sqrt(sequenceCase3Discriminant)) / (2 * sequenceCase3A);

	clearaboveinput();
	gotoxy(20, 12);
	cout << "x1 = " << sequenceCase3X1 << endl;
	gotoxy(20, 13);
	cout << "x2 = " << sequenceCase3X2 << endl;
	clearinputbox();
	_getch();
}

void sequenceMainMenuCase4()
{
	clrscr();
	borderSequence();
	int sequenceCase4Length, sequenceCase4Width, sequenceCase4Area, sequenceCase4Perimeter;

	gotoxy(19, 9);
	cout << "Input Length and Width:" << endl;
	gotoxy(5, 24);
	cout << "Length: ";
	gotoxy(5, 26);
	cin >> sequenceCase4Length;
	clearinputbox();
	gotoxy(5, 24);
	cout << "Width: ";
	gotoxy(5, 26);
	cin >> sequenceCase4Width;

	sequenceCase4Area = sequenceCase4Length * sequenceCase4Width;
	sequenceCase4Perimeter = 2 * sequenceCase4Length + 2 * sequenceCase4Width;

	clearaboveinput();
	gotoxy(10, 12);
	cout << "The area is " << sequenceCase4Area << " and the Perimeter is " << sequenceCase4Perimeter << endl;
	clearinputbox();
	_getch();
}

void sequenceMainMenuCase5()
{
	clrscr();
	borderSequence();
	int sequenceCase5Num1, sequenceCase5Num2, sequenceCase5Num3;
	gotoxy(22, 9);
	cout << "Input two numbers:" << endl;
	gotoxy(5, 24);
	cout << "Separate with space:" << endl;
	gotoxy(5, 26);
	cin >> sequenceCase5Num1 >> sequenceCase5Num2;

	clearaboveinput();
	gotoxy(17, 12);
	cout << "The value of num1 before: " << sequenceCase5Num1 << endl;
	gotoxy(17, 13);
	cout << "The value of num2 before: " << sequenceCase5Num2 << endl;

	sequenceCase5Num3 = sequenceCase5Num1;
	sequenceCase5Num1 = sequenceCase5Num2;
	sequenceCase5Num2 = sequenceCase5Num3;

	gotoxy(17, 15);
	cout << "The value of num1 now: " << sequenceCase5Num1 << endl;
	gotoxy(17, 16);
	cout << "The value of num2 now: " << sequenceCase5Num2 << endl;
	clearinputbox();
	_getch();
}

void sequenceMainMenuCase6()
{
	clrscr();
	borderSequence();
	int sequenceCase6Prelim, sequenceCase6Midterm, sequenceCase6Finals;
	double sequenceCase6Ave;

	gotoxy(10, 9);
	cout << "Input Prelim, Midterm and Final grades:" << endl;
	gotoxy(5, 24);
	cout << "Prelim:";
	gotoxy(5, 26);
	cin >> sequenceCase6Prelim;
	gotoxy(5, 24);
	cout << "Midterm:";
	clearinputbox();
	cin >> sequenceCase6Midterm;
	gotoxy(5, 24);
	cout << "Finals: ";
	clearinputbox();
	cin >> sequenceCase6Finals;

	sequenceCase6Ave = (sequenceCase6Prelim + sequenceCase6Midterm + sequenceCase6Finals) / 3;

	clearaboveinput();
	gotoxy(13, 12);
	cout << "The average of your grades is: " << sequenceCase6Ave << endl;
	clearinputbox();
	_getch();
}

void sequenceMainMenuCase7()
{
	clrscr();
	borderSequence();
	double sequenceCase7Radius, sequenceCase7Area, sequenceCase7Circumference, sequenceCase7Pi = 3.14, sequenceCase7Dia;

	gotoxy(22, 9);
	cout << "Enter a diameter:" << endl;
	gotoxy(5, 24);
	cout << "Diameter:";
	gotoxy(5, 26);
	cin >> sequenceCase7Dia;

	sequenceCase7Radius = sequenceCase7Dia / 2;
	sequenceCase7Area = sequenceCase7Pi * pow(sequenceCase7Radius, 2);
	sequenceCase7Circumference = 2 * sequenceCase7Pi * sequenceCase7Radius;

	clearaboveinput();
	gotoxy(20, 12);
	cout << "The area is " << sequenceCase7Area << endl;
	gotoxy(20, 13);
	cout << "The circumference is " << sequenceCase7Circumference << endl;
	clearinputbox();
	_getch();
}

void sequenceMainMenuCase8()
{
	clrscr();
	borderSequence();
	float sequenceCase8Farenheit, sequenceCase8Celsius;

	gotoxy(16, 9);
	cout << "Enter temperature in Celsius:" << endl;
	gotoxy(5, 24);
	cout << "Celsius:";
	gotoxy(5, 26);
	cin >> sequenceCase8Celsius;

	sequenceCase8Farenheit = sequenceCase8Celsius * 9 / 5 + 32;

	clearaboveinput();
	gotoxy(12, 12);
	cout << "The temperature in Farenheit is " << sequenceCase8Farenheit << endl;
	clearinputbox();
	_getch();
}

void sequenceMainMenuCase9()
{
	clrscr();
	borderSequence();
	string sequenceCase9FirstName, sequenceCase9LastName;
	float sequenceCase9GrossPay, sequenceCase9NetPay, sequenceCase9NumHrs, sequenceCase9RatePerHour, sequenceCase9Deduction;

	gotoxy(21, 9);
	cout << "Enter the following:" << endl;
	gotoxy(5, 24);
	cout << "First Name: ";
	gotoxy(5, 26);
	cin >> sequenceCase9FirstName;
	gotoxy(5, 24);
	cout << "Last Name:  ";
	clearinputbox();
	cin >> sequenceCase9LastName;
	gotoxy(5, 24);
	cout << "Number of hours work: ";
	clearinputbox();
	cin >> sequenceCase9NumHrs;
	gotoxy(5, 24);
	cout << "Rate per hour:        ";
	clearinputbox();
	cin >> sequenceCase9RatePerHour;
	gotoxy(5, 24);
	cout << "Deduction:            ";
	clearinputbox();
	cin >> sequenceCase9Deduction;

	sequenceCase9GrossPay = sequenceCase9NumHrs * sequenceCase9RatePerHour;
	sequenceCase9NetPay = sequenceCase9GrossPay - sequenceCase9Deduction;

	clearaboveinput();
	gotoxy(15, 12);
	cout << sequenceCase9FirstName << " " << sequenceCase9LastName << "'s Gross Pay is " << sequenceCase9GrossPay << endl;
	gotoxy(16, 13);
	cout << sequenceCase9FirstName << " " << sequenceCase9LastName << "'s Net Pay is " << sequenceCase9NetPay << endl;
	clearinputbox();
	_getch();
}

void sequenceMainMenuCase10()
{
	clrscr();
	borderSequence();
	double sequenceCase10Num1 = 1, sequenceCase10Square = 0, sequenceCase10Cube = 0;

	gotoxy(23, 9);
	cout << "Enter a number: ";
	gotoxy(5, 24);
	cout << "Number: ";
	gotoxy(5, 26);
	cin >> sequenceCase10Num1;

	try
	{
		if (sequenceCase10Num1 < 0)
			throw 100;
		else
		{
			sequenceCase10Square = sequenceCase10Num1 * sequenceCase10Num1;
			sequenceCase10Cube = sequenceCase10Num1 * sequenceCase10Num1 * sequenceCase10Num1;
		}
	}
	catch (...)
	{
		gotoxy(14, 28);
		cout << "Exception occured: Negative Number";
	}

	clearaboveinput();
	gotoxy(22, 12);
	cout << "The Square is " << sequenceCase10Square << endl;
	gotoxy(22, 13);
	cout << "The Cube is " << sequenceCase10Cube << endl;
	clearinputbox();
	_getch();
}

//If Statements 1-7 + Main Menu
void ifStatementMainMenuCase1()
{
	clrscr();
	borderIf();
	int ifStatementCase1Prelim, ifStatementCase1Midterm, ifStatementCase1Finals;
	double ifStatementCase1Ave;

	gotoxy(10, 9);
	cout << "Input Prelim, Midterm and Final grades:" << endl;
	gotoxy(5, 24);
	cout << "Prelim:";
	gotoxy(5, 26);
	cin >> ifStatementCase1Prelim;
	gotoxy(5, 24);
	cout << "Midterm: ";
	clearinputbox();
	cin >> ifStatementCase1Midterm;
	gotoxy(5, 24);
	cout << "Final:   ";
	clearinputbox();
	cin >> ifStatementCase1Finals;

	ifStatementCase1Ave = (ifStatementCase1Prelim + ifStatementCase1Midterm + ifStatementCase1Finals) / 3;

	clearaboveinput();
	gotoxy(10, 12);
	if (ifStatementCase1Ave >= 97 && ifStatementCase1Ave <= 100)
		cout << "Your equivalent grade is 1.00 and PASSED" << endl;
	else if (ifStatementCase1Ave >= 94 && ifStatementCase1Ave <= 96)
		cout << "Your equivalent grade is 1.25 and PASSED" << endl;
	else if (ifStatementCase1Ave >= 91 && ifStatementCase1Ave <= 93)
		cout << "Your equivalent grade is 1.50 and PASSED" << endl;
	else if (ifStatementCase1Ave >= 88 && ifStatementCase1Ave <= 90)
		cout << "Your equivalent grade is 1.75 and PASSED" << endl;
	else if (ifStatementCase1Ave >= 85 && ifStatementCase1Ave <= 87)
		cout << "Your equivalent grade is 2.00 and PASSED" << endl;
	else if (ifStatementCase1Ave >= 82 && ifStatementCase1Ave <= 84)
		cout << "Your equivalent grade is 2.25 and PASSED" << endl;
	else if (ifStatementCase1Ave >= 79 && ifStatementCase1Ave <= 81)
		cout << "Your equivalent grade is 2.50 and PASSED" << endl;
	else if (ifStatementCase1Ave >= 76 && ifStatementCase1Ave <= 78)
		cout << "Your equivalent grade is 2.75 and PASSED" << endl;
	else if (ifStatementCase1Ave == 75)
		cout << "Your equivalent grade is 3.00 and PASSED" << endl;
	else
		cout << "Your equivalent grade is 5.00 and FAILED" << endl;
	clearinputbox();
	_getch();
}

void ifStatementMainMenuCase2()
{
	clrscr();
	borderIf();
	int ifStatementCase2Num1, ifStatementCase2Mod;

	gotoxy(23, 9);
	cout << "Input a number:" << endl;
	gotoxy(5, 24);
	cout << "Number: ";
	gotoxy(5, 26);
	cin >> ifStatementCase2Num1;

	ifStatementCase2Mod = ifStatementCase2Num1 % 2;

	clearaboveinput();
	gotoxy(23, 12);
	if (ifStatementCase2Mod == 0)
		cout << "Number is Even" << endl;
	else
		cout << "Number is Odd " << endl;
	clearinputbox();
	_getch();
}

void ifStatementMainMenuCase3()
{
	clrscr();
	borderIf();
	int ifStatementCase3Num1;

	gotoxy(23, 9);
	cout << "Input a number:" << endl;
	gotoxy(5, 24);
	cout << "Number: ";
	gotoxy(5, 26);
	cin >> ifStatementCase3Num1;

	clearaboveinput();
	gotoxy(21, 12);
	if (ifStatementCase3Num1 > 0)
		cout << "Number is positive" << endl;
	else
		cout << "Number is negative" << endl;
	clearinputbox();
	_getch();
}

void ifStatementMainMenuCase4()
{
	clrscr();
	borderIf();
	double ifStatementCase4SManNo, ifStatementCase4UnitPrice, ifStatementCase4Commission, ifStatementCase4TotalSale, ifStatementCase4UnitSold;
	char ifStatementCase4SManName[30];

	gotoxy(21, 9);
	cout << "Enter the following:" << endl;
	gotoxy(5, 24);
	cout << "Salesman Number: ";
	gotoxy(5, 26);
	cin >> ifStatementCase4SManNo;
	gotoxy(5, 24);
	cout << "Salesman Name:   ";
	clearinputbox();
	cin >> ifStatementCase4SManName;
	gotoxy(5, 24);
	cout << "Number of unit/s Sold: ";
	clearinputbox();
	cin >> ifStatementCase4UnitSold;
	gotoxy(5, 24);
	cout << "Unit Price:            ";
	clearinputbox();
	cin >> ifStatementCase4UnitPrice;

	ifStatementCase4TotalSale = ifStatementCase4UnitSold * ifStatementCase4UnitPrice;

	if (ifStatementCase4TotalSale <= 10000)
		ifStatementCase4Commission = ifStatementCase4TotalSale * 0.1;
	else if (ifStatementCase4TotalSale >= 10001 && ifStatementCase4TotalSale <= 15000)
		ifStatementCase4Commission = ifStatementCase4TotalSale * 0.15;
	else if (ifStatementCase4TotalSale >= 15001 && ifStatementCase4TotalSale <= 20000)
		ifStatementCase4Commission = ifStatementCase4TotalSale * 0.2;
	else
		ifStatementCase4Commission = ifStatementCase4TotalSale * 0.3;

	clearaboveinput();
	gotoxy(19, 12);
	cout << "The Commission is: " << ifStatementCase4Commission << endl;
	clearinputbox();
	_getch();
}

void ifStatementMainMenuCase5()
{
	clrscr();
	borderIf();
	int ifStatementCase5Num1, ifStatementCase5Num2;

	gotoxy(22, 9);
	cout << "Input two numbers:" << endl;
	gotoxy(5, 24);
	cout << "Separate with space:" << endl;
	gotoxy(5, 26);
	cin >> ifStatementCase5Num1 >> ifStatementCase5Num2;

	clearaboveinput();
	gotoxy(24, 12);
	if (ifStatementCase5Num1 > ifStatementCase5Num2)
		cout << ifStatementCase5Num1 << " is bigger" << endl;
	else
		cout << ifStatementCase5Num2 << " is bigger" << endl;
	clearinputbox();
	_getch();
}

void ifStatementMainMenuCase6()
{
	clrscr();
	borderIf();
	int ifStatementCase6Num1, ifStatementCase6Num2, ifStatementCase6Num3;

	gotoxy(21, 9);
	cout << "Enter three numbers:" << endl;
	gotoxy(5, 24);
	cout << "Separate with spaces:" << endl;
	gotoxy(5, 26);
	cin >> ifStatementCase6Num1 >> ifStatementCase6Num2 >> ifStatementCase6Num3;

	clearaboveinput();
	gotoxy(19, 12);
	if (ifStatementCase6Num1 > ifStatementCase6Num2 && ifStatementCase6Num1 > ifStatementCase6Num3)
		cout << ifStatementCase6Num1 << " is the biggest number" << endl;
	else if (ifStatementCase6Num2 > ifStatementCase6Num1 && ifStatementCase6Num2 > ifStatementCase6Num3)
		cout << ifStatementCase6Num2 << " is the biggest number" << endl;
	else
		cout << ifStatementCase6Num3 << " is the biggest number" << endl;
	clearinputbox();
	_getch();
}

void ifStatementMainMenuCase7()
{
	clrscr();
	borderIf();
	int ifStatementCase7Num1;

	gotoxy(23, 9);
	cout << "Input a number:" << endl;
	gotoxy(5, 24);
	cout << "Number: ";
	gotoxy(5, 26);
	cin >> ifStatementCase7Num1;

	clearaboveinput();
	gotoxy(21, 12);
	if (ifStatementCase7Num1 > 0)
		cout << "Number is positive" << endl;
	else if (ifStatementCase7Num1 < 0)
		cout << "Number is negative" << endl;
	else
	{
		gotoxy(24, 12);
		cout << "Number is 0" << endl;
	}
	clearinputbox();
	_getch();
}

////Loops + Sub Menus
void loopsMainMenuCase1For(string name1)
{
	for (int case1 = 1; case1 <= 5; case1++)
	{
		gotoxy(27, case1 + 9);
		cout << name1 << endl;
	}
}

void loopsMainMenuCase1While(string name1)
{
	int case1 = 1;
	while (case1 <= 5)
	{
		gotoxy(27, case1 + 9);
		cout << name1 << endl;
		case1++;
	}
}

void loopsMainMenuCase1DoWhile(string name1)
{
	int case1 = 1;
	do
	{
		gotoxy(27, case1 + 9);
		cout << name1 << endl;
		case1++;
	} while (case1 <= 5);
}

void loopsMainMenuCase2For()
{
	for (int case2 = 1; case2 <= 10; case2++)
	{
		gotoxy(29, case2 + 9);
		cout << case2 << endl;
	}
}

void loopsMainMenuCase2While()
{
	int case2 = 1;
	while (case2 <= 10)
	{
		gotoxy(29, case2 + 9);
		cout << case2 << endl;
		case2++;
	}
}

void loopsMainMenuCase2DoWhile()
{
	int case2 = 1;
	do
	{
		gotoxy(29, case2 + 9);
		cout << case2 << endl;
		case2++;
	} while (case2 <= 10);
}

void loopsMainMenuCase3For(int case3)
{
	try
	{
		if (case3 < 0)
			throw 102;
		else
			for (; case3 >= 1; case3--)
			{
				gotoxy(29, case3 + 9);
				cout << case3 << endl;
			}
	}
	catch (...)
	{
		gotoxy(14, 28);
		cout << "Exception occured: Negative Number";
	}
}

void loopsMainMenuCase3While(int case3)
{
	try
	{
		if (case3 < 0)
			throw 102;
		else
			while (case3 >= 1)
			{
				gotoxy(29, case3 + 9);
				cout << case3 << endl;
				case3--;
			}
	}
	catch (...)
	{
		gotoxy(14, 28);
		cout << "Exception occured: Negative Number";
	}
}

void loopsMainMenuCase3DoWhile(int case3)
{
	try
	{
		if (case3 < 0)
			throw 102;
		else
			do
			{
				gotoxy(29, case3 + 9);
				cout << case3 << endl;
				case3--;
			} while (case3 >= 1);
	}
	catch (...)
	{
		gotoxy(14, 28);
		cout << "Exception occured: Negative Number";
	}
}

void loopsMainMenuCase4For(int case4A)
{
	int case4B = 1;
	try
	{
		if (case4A < 0)
			throw 102;
		else
		{
			for (int case4C = 1; case4C <= case4A; case4C++)
			{
				case4B *= case4C;
			}
			gotoxy(21, 12);
			cout << "Factorial of " << case4A << " = " << case4B << endl;
		}
	}
	catch (...)
	{
		gotoxy(14, 28);
		cout << "Exception occured: Negative Number";
	}
}

void loopsMainMenuCase4While(int case4A)
{
	int case4B = 1, case4C = 1;
	try
	{
		if (case4A < 0)
			throw 102;
		else
		{
			while (case4C <= case4A)
			{
				case4B *= case4C;
				case4C++;
			}
			gotoxy(21, 12);
			cout << "Factorial of " << case4A << " = " << case4B << endl;
		}
	}
	catch (...)
	{
		gotoxy(14, 28);
		cout << "Exception occured: Negative Number";
	}
}

void loopsMainMenuCase4DoWhile(int case4A)
{
	int case4B = 1, case4C = 1;
	try
	{
		if (case4A < 0)
			throw 102;
		else
		{
			do
			{
				case4B *= case4C;
				case4C++;
			} while (case4C <= case4A);

			gotoxy(21, 12);
			cout << "Factorial of " << case4A << " = " << case4B << endl;
		}
	}
	catch (...)
	{
		gotoxy(14, 28);
		cout << "Exception occured: Negative Number";
	}
}

void loopsMainMenuCase5For()
{
	int gotoxycount = 10;
	for (int case5 = 1; case5 <= 10; case5++)
	{
		if (case5 % 2 == 0)
		{
			gotoxy(29, gotoxycount);
			cout << case5;
			gotoxycount++;
		}
	}
}

void loopsMainMenuCase5While()
{
	int gotoxycount = 10;
	int case5 = 1;
	while (case5 <= 10)
	{
		if (case5 % 2 == 0)
		{
			gotoxy(29, gotoxycount);
			cout << case5;
			gotoxycount++;
		}
		case5++;
	}
}

void loopsMainMenuCase5DoWhile()
{
	int gotoxycount = 10;
	int case5 = 1;
	do
	{
		if (case5 % 2 == 0)
		{
			gotoxy(29, gotoxycount);
			cout << case5;
			gotoxycount++;
		}
		case5++;
	} while (case5 <= 10);
}

void loopsMainMenuCase6For(int case6A[5])
{
	int count = 12;
	for (int x = 0; x < 5; x++)
	{
		if (case6A[x] > 0)
		{
			gotoxy(23, count);
			cout << case6A[x] << " is positive" << endl;
			count++;
		}
	}
}

void loopsMainMenuCase6While(int case6A[5])
{
	int x = 0, count = 12;
	while (x < 5)
	{
		if (case6A[x] > 0)
		{
			gotoxy(23, count);
			cout << case6A[x] << " is a positive number" << endl;
			count++;
		}
		x++;
	}
}

void loopsMainMenuCase6DoWhile(int case6A[5])
{
	int x = 0, count = 12;
	do
	{
		if (case6A[x] > 0)
		{
			gotoxy(23, count);
			cout << case6A[x] << " is a positive number" << endl;
			count++;
		}
		x++;
	} while (x < 5);
}

void loopsMainMenuCase7For()
{
	int count = 12;
	for (int case7A = 1; case7A <= 5; case7A++)
	{
		gotoxy(26, count);
		for (int case7B = 1; case7B <= case7A; case7B++)
		{
			cout << "*";
		}
		cout << endl;
		count++;
	}
}

void loopsMainMenuCase7While()
{
	int case7A = 1, case7B = 1, count = 12;

	while (case7A <= 5)
	{
		gotoxy(26, count);
		while (case7B <= case7A)
		{
			cout << "*";
			case7B++;
		}
		case7B = 1;
		cout << endl;
		case7A++;
		count++;
	}
}

void loopsMainMenuCase7DoWhile()
{
	int case7A = 1, case7B = 1, count = 12;
	do
	{
		gotoxy(26, count);
		while (case7B <= case7A)
		{
			cout << "*";
			case7B++;
		}
		case7B = 1;
		cout << endl;
		case7A++;
		count++;
	} while (case7A <= 5);
}

void loopsMainMenuCase8For()
{
	int count = 12;
	for (int case8A = 5; case8A >= 1; case8A--)
	{
		gotoxy(26, count);
		for (int case8B = case8A; case8B > 0; case8B--)
			cout << case8A;
		count++;
	}
}

void loopsMainMenuCase8While()
{
	int case8A = 5, case8B, count = 12;
	while (case8A >= 1)
	{
		gotoxy(26, count);
		case8B = case8A;
		while (case8B > 0)
		{
			cout << case8A;
			case8B--;
		}
		count++;
		case8A--;
	}
}

void loopsMainMenuCase8DoWhile()
{
	int case8A = 5, case8B, count = 12;
	do
	{
		gotoxy(26, count);
		case8B = case8A;
		while (case8B > 0)
		{
			cout << case8A;
			case8B--;
		}
		count++;
		case8A--;
	} while (case8A >= 1);
}

void loopsMainMenuCase1()
{
	clrscr();
	char loop1 = 'A';
	while (loop1 != 'D')
	{
		clrscr();
		borderLoopsSub();
		string name1;
		gotoxy(21, 9);
		cout << "Choose Loop Method:" << endl;
		gotoxy(20, 10);
		cout << "\tA. For Loop" << endl;
		gotoxy(20, 11);
		cout << "\tB. While Loop" << endl;
		gotoxy(20, 12);
		cout << "\tC. Do-While Loop" << endl;
		gotoxy(20, 13);
		cout << "\tD. Exit" << endl;
		gotoxy(5, 24);
		cout << "Loop: ";
		gotoxy(5, 26);
		cin >> loop1;
		loop1 = toupper(loop1);

		if (loop1 != 'D')
		{
			clearaboveinput();
			clearinputbox();
			gotoxy(5, 24);
			cout << "Enter Name:" << endl;
			gotoxy(5, 26);
			cin >> name1;
			cout << endl;
		}

		switch (loop1)
		{
		case 'A':
			clrscr();
			borderLoopsSub();
			loopsMainMenuCase1For(name1);
			clearinputbox();
			_getch();
			break;

		case 'B':
			clrscr();
			borderLoopsSub();
			loopsMainMenuCase1While(name1);
			clearinputbox();
			_getch();
			break;

		case 'C':
			clrscr();
			borderLoopsSub();
			loopsMainMenuCase1DoWhile(name1);
			clearinputbox();
			_getch();
			break;

		default:
			gotoxy(43, 24);
			cout << "Returning..." << endl;
			gotoxy(5, 26);
			Sleep(1200);
		}
	}
}

void loopsMainMenuCase2()
{
	clrscr();
	char loop2 = 'A';
	while (loop2 != 'D')
	{
		clrscr();
		borderLoopsSub();
		gotoxy(21, 9);
		cout << "Choose Loop Method:" << endl;
		gotoxy(20, 10);
		cout << "\tA. For Loop" << endl;
		gotoxy(20, 11);
		cout << "\tB. While Loop" << endl;
		gotoxy(20, 12);
		cout << "\tC. Do-While Loop" << endl;
		gotoxy(20, 13);
		cout << "\tD. Exit" << endl;
		gotoxy(5, 24);
		cout << "Loop: ";
		gotoxy(5, 26);
		cin >> loop2;
		loop2 = toupper(loop2);

		switch (loop2)
		{
		case 'A':
			clrscr();
			borderLoopsSub();
			loopsMainMenuCase2For();
			clearinputbox();
			_getch();
			break;

		case 'B':
			clrscr();
			borderLoopsSub();
			loopsMainMenuCase2While();
			clearinputbox();
			_getch();
			break;

		case 'C':
			clrscr();
			borderLoopsSub();
			loopsMainMenuCase2DoWhile();
			clearinputbox();
			_getch();
			break;

		default:
			gotoxy(43, 24);
			cout << "Returning..." << endl;
			gotoxy(5, 26);
			Sleep(1200);
		}
	}
}

void loopsMainMenuCase3()
{
	clrscr();
	char loop3 = 'A';
	while (loop3 != 'D')
	{
		clrscr();
		borderLoopsSub();
		int case3 = 1;
		gotoxy(21, 9);
		cout << "Choose Loop Method:" << endl;
		gotoxy(20, 10);
		cout << "\tA. For Loop" << endl;
		gotoxy(20, 11);
		cout << "\tB. While Loop" << endl;
		gotoxy(20, 12);
		cout << "\tC. Do-While Loop" << endl;
		gotoxy(20, 13);
		cout << "\tD. Exit" << endl;
		gotoxy(5, 24);
		cout << "Loop: ";
		gotoxy(5, 26);
		cin >> loop3;
		loop3 = toupper(loop3);

		if (loop3 != 'D')
		{
			clearaboveinput();
			clearinputbox();
			gotoxy(5, 24);
			cout << "Enter a number: ";
			gotoxy(5, 26);
			cin >> case3;

			switch (loop3)
			{
			case 'A':
				clrscr();
				borderLoopsSub();
				loopsMainMenuCase3For(case3);
				clearinputbox();
				_getch();
				break;

			case 'B':
				clrscr();
				borderLoopsSub();
				loopsMainMenuCase3While(case3);
				clearinputbox();
				_getch();
				break;

			case 'C':
				clrscr();
				borderLoopsSub();
				loopsMainMenuCase3DoWhile(case3);
				clearinputbox();
				_getch();
				break;

			default:
				gotoxy(43, 24);
				cout << "Returning..." << endl;
				gotoxy(5, 26);
				Sleep(1200);
			}
		}
	}
}

void loopsMainMenuCase4()
{
	clrscr();
	char loop4 = 'A';
	while (loop4 != 'D')
	{
		clrscr();
		borderLoopsSub();
		int case4A;
		gotoxy(21, 9);
		cout << "Choose Loop Method:" << endl;
		gotoxy(20, 10);
		cout << "\tA. For Loop" << endl;
		gotoxy(20, 11);
		cout << "\tB. While Loop" << endl;
		gotoxy(20, 12);
		cout << "\tC. Do-While Loop" << endl;
		gotoxy(20, 13);
		cout << "\tD. Exit" << endl;
		gotoxy(5, 24);
		cout << "Loop: ";
		gotoxy(5, 26);
		cin >> loop4;
		loop4 = toupper(loop4);

		if (loop4 != 'D')
		{
			clearaboveinput();
			clearinputbox();
			gotoxy(5, 24);
			cout << "Enter a number: ";
			gotoxy(5, 26);
			cin >> case4A;
		}

		switch (loop4)
		{
		case 'A':
			clrscr();
			borderLoopsSub();
			loopsMainMenuCase4For(case4A);
			clearinputbox();
			_getch();
			break;

		case 'B':
			clrscr();
			borderLoopsSub();
			loopsMainMenuCase4While(case4A);
			clearinputbox();
			_getch();
			break;

		case 'C':
			clrscr();
			borderLoopsSub();
			loopsMainMenuCase4DoWhile(case4A);
			clearinputbox();
			_getch();
			break;

		default:
			gotoxy(43, 24);
			cout << "Returning..." << endl;
			gotoxy(5, 26);
			Sleep(1200);
		}
	}
}

void loopsMainMenuCase5()
{
	clrscr();
	char loop5 = 'A';
	while (loop5 != 'D')
	{
		clrscr();
		borderLoopsSub();
		gotoxy(21, 9);
		cout << "Choose Loop Method:" << endl;
		gotoxy(20, 10);
		cout << "\tA. For Loop" << endl;
		gotoxy(20, 11);
		cout << "\tB. While Loop" << endl;
		gotoxy(20, 12);
		cout << "\tC. Do-While Loop" << endl;
		gotoxy(20, 13);
		cout << "\tD. Exit" << endl;
		gotoxy(5, 24);
		cout << "Loop: ";
		gotoxy(5, 26);
		cin >> loop5;
		loop5 = toupper(loop5);

		switch (loop5)
		{
		case 'A':
			clrscr();
			borderLoopsSub();
			loopsMainMenuCase5For();
			clearinputbox();
			_getch();
			break;

		case 'B':
			clrscr();
			borderLoopsSub();
			loopsMainMenuCase5While();
			clearinputbox();
			_getch();
			break;

		case 'C':
			clrscr();
			borderLoopsSub();
			loopsMainMenuCase5DoWhile();
			clearinputbox();
			_getch();
			break;

		default:
			gotoxy(43, 24);
			cout << "Returning..." << endl;
			gotoxy(5, 26);
			Sleep(1200);
		}
	}
}

void loopsMainMenuCase6()
{
	clrscr();
	char loop6 = 'A';
	while (loop6 != 'D')
	{
		clrscr();
		borderLoopsSub();
		int case6A[5];
		gotoxy(21, 9);
		cout << "Choose Loop Method:" << endl;
		gotoxy(20, 10);
		cout << "\tA. For Loop" << endl;
		gotoxy(20, 11);
		cout << "\tB. While Loop" << endl;
		gotoxy(20, 12);
		cout << "\tC. Do-While Loop" << endl;
		gotoxy(20, 13);
		cout << "\tD. Exit" << endl;
		gotoxy(5, 24);
		cout << "Loop: ";
		gotoxy(5, 26);
		cin >> loop6;
		loop6 = toupper(loop6);

		if (loop6 != 'D')
		{
			clearaboveinput();
			clearinputbox();
			gotoxy(5, 24);
			cout << "Enter 5 numbers: ";
			for (int x = 0; x < 5; x++)
			{
				clearinputbox();
				cin >> case6A[x];
			}
		}

		switch (loop6)
		{
		case 'A':
			clrscr();
			borderLoopsSub();
			loopsMainMenuCase6For(case6A);
			clearinputbox();
			_getch();
			break;

		case 'B':
			clrscr();
			borderLoopsSub();
			loopsMainMenuCase6While(case6A);
			clearinputbox();
			_getch();
			break;

		case 'C':
			clrscr();
			borderLoopsSub();
			loopsMainMenuCase6DoWhile(case6A);
			clearinputbox();
			_getch();
			break;

		default:
			gotoxy(43, 24);
			cout << "Returning..." << endl;
			gotoxy(5, 26);
			Sleep(1200);
		}
	}
}

void loopsMainMenuCase7()
{
	clrscr();
	char loop7 = 'A';
	while (loop7 != 'D')
	{
		clrscr();
		borderLoopsSub();
		gotoxy(21, 9);
		cout << "Choose Loop Method:" << endl;
		gotoxy(20, 10);
		cout << "\tA. For Loop" << endl;
		gotoxy(20, 11);
		cout << "\tB. While Loop" << endl;
		gotoxy(20, 12);
		cout << "\tC. Do-While Loop" << endl;
		gotoxy(20, 13);
		cout << "\tD. Exit" << endl;
		gotoxy(5, 24);
		cout << "Loop: ";
		gotoxy(5, 26);
		cin >> loop7;
		loop7 = toupper(loop7);

		switch (loop7)
		{
		case 'A':
			clrscr();
			borderLoopsSub();
			loopsMainMenuCase7For();
			clearinputbox();
			_getch();
			break;

		case 'B':
			clrscr();
			borderLoopsSub();
			loopsMainMenuCase7While();
			clearinputbox();
			_getch();
			break;

		case 'C':
			clrscr();
			borderLoopsSub();
			loopsMainMenuCase7DoWhile();
			clearinputbox();
			_getch();
			break;

		default:
			gotoxy(43, 24);
			cout << "Returning..." << endl;
			gotoxy(5, 26);
			Sleep(1200);
		}
	}
}

void loopsMainMenuCase8()
{
	clrscr();
	char loop8 = 'A';
	while (loop8 != 'D')
	{
		clrscr();
		borderLoopsSub();
		gotoxy(21, 9);
		cout << "Choose Loop Method:" << endl;
		gotoxy(20, 10);
		cout << "\tA. For Loop" << endl;
		gotoxy(20, 11);
		cout << "\tB. While Loop" << endl;
		gotoxy(20, 12);
		cout << "\tC. Do-While Loop" << endl;
		gotoxy(20, 13);
		cout << "\tD. Exit" << endl;
		gotoxy(5, 24);
		cout << "Loop: ";
		gotoxy(5, 26);
		cin >> loop8;
		loop8 = toupper(loop8);

		switch (loop8)
		{
		case 'A':
			clrscr();
			borderLoopsSub();
			loopsMainMenuCase8For();
			clearinputbox();
			_getch();
			break;

		case 'B':
			clrscr();
			borderLoopsSub();
			loopsMainMenuCase8While();
			clearinputbox();
			_getch();
			break;

		case 'C':
			clrscr();
			borderLoopsSub();
			loopsMainMenuCase8DoWhile();
			clearinputbox();
			_getch();
			break;

		default:
			gotoxy(43, 24);
			cout << "Returning..." << endl;
			gotoxy(5, 26);
			Sleep(1200);
		}
	}
}

//1D Array
void Array1DMMC1()
{
	gotoxy(23, 9);
	cout << "Enter 5 numbers:" << endl;
	gotoxy(5, 24);
	cout << "Numbers: ";
	for (int a = 0; a < array1DSize; a++)
	{
		clearinputbox();
		cin >> array1DGlobal[a];
	}

	gotoxy(34, 24);
	cout << "Inputted successfully" << endl;
	clearinputbox();
	_getch();
}

void Array1DMMC2()
{
	gotoxy(22, 9);
	cout << "The elements are:" << endl;
	gotoxy(20, 12);
	for (int b = 0; b < array1DSize; b++)
	{
		if (b == 0)
			cout << "{";
		cout << array1DGlobal[b];
		if (b == array1DSize - 1)
			cout << "}";
		else
			cout << ", ";
	}
	clearinputbox();
	_getch();
}

void Array1DMMC3(int search)
{
	int position = -1;
	string ordinal;
	bool trigger = false;

	for (int c = 0; c < array1DSize; c++)
	{
		if (array1DGlobal[c] == search)
		{
			trigger = true;
			position = c;
			break;
		}
	}

	clearaboveinput();
	gotoxy(20, 12);
	if (trigger == true)
		cout << "Element is at index " << position << endl;
	else
		cout << "Element not found" << endl;
	clearinputbox();
}

void Array1DMMC4(char sortC)
{
	if (sortC == 'A')
		sort(array1DGlobal, array1DGlobal + 5);
	else
		sort(array1DGlobal, array1DGlobal + 5, greater<int>());

	clearaboveinput();
	gotoxy(16, 12);
	cout << "The elements have been sorted" << endl;
	gotoxy(20, 13);
	for (int b = 0; b < array1DSize; b++)
	{
		if (b == 0)
			cout << "{";
		cout << array1DGlobal[b];
		if (b == array1DSize - 1)
			cout << "}";
		else
			cout << ", ";
	}
	clearinputbox();
	_getch();
}

void Array1DMMC5(int del)
{
	int total = 5;

	for (int e = 0; e < total; e++)
	{
		if (array1DGlobal[e] == del)
		{
			array1DGlobal[e] = 0;
		}
	}

	clearaboveinput();
	gotoxy(23, 12);
	cout << "Element deleted" << endl;
	clearinputbox();
	_getch();
}

void Array1DMMC6(int indexU, int replace)
{
	array1DGlobal[indexU] = replace;

	clearaboveinput();
	gotoxy(23, 12);
	cout << "Array updated" << endl;
	clearinputbox();
	_getch();
}

int Array1DMMC7()
{
	int largeE = array1DGlobal[0];
	for (int g = 1; g < array1DSize; g++)
	{
		if (largeE < array1DGlobal[g])
			largeE = array1DGlobal[g];
	}
	return largeE;
}

int Array1DMMC8()
{
	int smallE = array1DGlobal[0];
	for (int h = 0; h < array1DSize; h++)
	{
		if (smallE > array1DGlobal[h])
			smallE = array1DGlobal[h];
	}
	return smallE;
}

void Array1DMMC9()
{
	gotoxy(15, 12);
	cout << "The even numbers in the array: " << endl;
	gotoxy(25, 13);
	for (int i = 0; i < array1DSize; i++)
	{
		if (array1DGlobal[i] % 2 == 0)
			cout << array1DGlobal[i] << " ";
	}
	clearinputbox();
	_getch();
}

void Array1DMMC10()
{
	gotoxy(16, 12);
	cout << "The odd numbers in the array: ";
	gotoxy(25, 13);
	for (int j = 0; j < array1DSize; j++)
	{
		if (array1DGlobal[j] % 2 == 1)
			cout << array1DGlobal[j] << " ";
	}
	clearinputbox();
	_getch();
}

int Array1DMMC11()
{
	int sumA = 0;
	for (int k = 0; k < array1DSize; k++)
	{
		sumA = sumA + array1DGlobal[k];
	}
	return sumA;
}

int Array1DMMC12()
{
	int smallE = array1DGlobal[0], smallI = 0;
	for (int l = 0; l < array1DSize; l++)
	{
		if (smallE > array1DGlobal[l])
		{
			smallE = array1DGlobal[l];
			smallI = l;
		}
	}
	return smallI;
}

int Array1DMMC13()
{
	int largeE = array1DGlobal[0], largeI = 0;
	for (int m = 1; m < array1DSize; m++)
	{
		if (largeE < array1DGlobal[m])
		{
			largeE = array1DGlobal[m];
			largeI = m;
		}
	}
	return largeI;
}

int Array1DMMC14()
{
	float array1DGlobalCopy[5], sumS = 0;
	copy(array1DGlobal, array1DGlobal + 5, array1DGlobalCopy);
	for (int n = 0; n < array1DSize; n++)
	{
		array1DGlobalCopy[n] = pow(array1DGlobalCopy[n], 2);
		sumS = sumS + array1DGlobalCopy[n];
	}
	return sumS;
}

void Array1DMMC15()
{
	int array1DGlobalCopy[5];
	for (int o = 0; o < array1DSize; o++)
	{
		array1DGlobalCopy[o] = array1DGlobal[o];
	}

	gotoxy(24, 9);
	cout << "Array copied" << endl;
	gotoxy(11, 12);
	cout << "ArrayGlobalCopy[5] = ";
	for (int b = 0; b < array1DSize; b++)
	{
		if (b == 0)
			cout << "{";
		cout << array1DGlobalCopy[b];
		if (b == array1DSize - 1)
			cout << "}";
		else
			cout << ", ";
	}
	clearinputbox();
	_getch();
}

void Array1DMMC16(int search)
{
	int position = 1;
	string ordinal;
	bool trigger = false;
	sort(array1DGlobal, array1DGlobal + 5);
	for (int c = 0; c < array1DSize; c++)
	{
		if (array1DGlobal[c] == search)
		{
			trigger = true;
			position = c;
			break;
		}
	}
	clearaboveinput();
	gotoxy(20, 12);
	if (trigger == true)
		cout << "Element is at index " << position << endl;
	else
		cout << "Element not found" << endl;
	clearinputbox();
}

void Array1DMMC17(int middle)
{
	int i, key, j;
	for (i = 1; i < middle; i++)
	{
		key = array1DGlobal[i];
		j = i - 1;

		while (j >= 0 && array1DGlobal[j] > key)
		{
			array1DGlobal[j + 1] = array1DGlobal[j];
			j = j - 1;
		}
		array1DGlobal[j + 1] = key;
	}

	gotoxy(18, 9);
	cout << "Elements have been sorted" << endl;

	gotoxy(20, 12);
	for (int b = 0; b < array1DSize; b++)
	{
		if (b == 0)
			cout << "{";
		cout << array1DGlobal[b];
		if (b == array1DSize - 1)
			cout << "}";
		else
			cout << ", ";
	}
	clearinputbox();
	_getch();
}

//2D Array
void Array2DMMC1()
{
	gotoxy(23, 9);
	cout << "Enter 6 numbers:" << endl;
	gotoxy(5, 24);
	cout << "Numbers: ";
	for (int a = 0; a < array2DRow; a++)
	{
		for (int z = 0; z < array2DCol; z++)
		{
			clearinputbox();
			cin >> array2DGlobal[a][z];
		}
	}

	gotoxy(34, 24);
	cout << "Inputted successfully" << endl;
	clearinputbox();
	_getch();
}

void Array2DMMC2()
{
	gotoxy(22, 9);
	cout << "The 2D array is:" << endl;
	for (int b = 0; b < array2DRow; b++)
	{
		gotoxy(26, b + 12);
		cout << "[";
		for (int y = 0; y < array2DCol; y++)
		{
			cout << array2DGlobal[b][y];
			if (y != array2DCol - 1)
				cout << ", ";
		}
		cout << "]" << endl;
	}
	clearinputbox();
	_getch();
}

void Array2DMMC3(int search)
{
	int rowPos = 0, colPos = 0;
	string ordinal;
	bool trigger = false;

	for (int c = 0; c < array2DRow; c++)
	{
		for (int x = 0; x < array2DCol; x++)
		{
			if (array2DGlobal[c][x] == search)
			{
				trigger = true;
				rowPos = c;
				colPos = x;
				break;
			}
		}
	}
	clearaboveinput();
	gotoxy(20, 12);
	if (trigger == true)
		cout << "Element is at [" << rowPos << ", " << colPos << "]" << endl;
	else
		cout << "Element not found" << endl;
	clearinputbox();
}

void Array2DMMC4(char sortC)
{
	if (sortC == 'A')
		sort(&array2DGlobal[0][0], &array2DGlobal[0][0] + 3 * 2);
	else
		sort(&array2DGlobal[0][0], &array2DGlobal[0][0] + 3 * 2, greater<int>());

	clearaboveinput();
	gotoxy(16, 12);
	cout << "The elements have been sorted" << endl;
	for (int b = 0; b < array2DRow; b++)
	{
		gotoxy(26, b + 13);
		cout << "[";
		for (int y = 0; y < array2DCol; y++)
		{
			cout << array2DGlobal[b][y];
			if (y != array2DCol - 1)
				cout << ", ";
		}
		cout << "]" << endl;
	}
	clearinputbox();
	_getch();
}

void Array2DMMC5(int del)
{
	for (int e = 0; e < array2DCol; e++)
	{
		for (int w = 0; w <= array2DRow; w++)
		{
			if (array2DGlobal[e][w] == del)
			{
				array2DGlobal[e][w] = 0;
			}
		}
	}
	clearaboveinput();
	gotoxy(23, 12);
	cout << "Element deleted" << endl;
	clearinputbox();
	_getch();
}

void Array2DMMC6(int indexC, int indexR, int replace)
{
	array2DGlobal[indexC][indexR] = replace;

	clearaboveinput();
	gotoxy(23, 12);
	cout << "Array updated" << endl;
	clearinputbox();
	_getch();
}

int Array2DMMC7()
{
	int largeE = array2DGlobal[0][0];
	for (int g = 1; g < array2DCol; g++)
	{
		for (int u = 0; u < array2DRow; u++)
		{
			if (largeE < array2DGlobal[g][u])
				largeE = array2DGlobal[g][u];
		}
	}
	return largeE;
}

int Array2DMMC8()
{
	int smallE = array2DGlobal[0][0];
	for (int h = 0; h < array2DRow; h++)
	{
		for (int t = 0; t < array2DCol; t++)
		{
			if (smallE > array2DGlobal[h][t])
				smallE = array2DGlobal[h][t];
		}
	}
	return smallE;
}

void Array2DMMC9()
{
	gotoxy(15, 12);
	cout << "The even numbers in the array: " << endl;
	gotoxy(25, 13);
	for (int i = 0; i < array2DRow; i++)
	{
		for (int s = 0; s < array2DCol; s++)
		{
			if (array2DGlobal[i][s] % 2 == 0)
			{
				cout << array2DGlobal[i][s] << " ";
			}
		}
	}
	clearinputbox();
	_getch();
}

void Array2DMMC10()
{
	gotoxy(16, 12);
	cout << "The odd numbers in the array: ";
	gotoxy(25, 13);
	for (int j = 0; j < array2DRow; j++)
	{
		for (int r = 0; r < array2DCol; r++)
		{
			if (array2DGlobal[j][r] % 2 == 1)
			{
				cout << array2DGlobal[j][r] << " ";
			}
		}
	}
	clearinputbox();
	_getch();
}

int Array2DMMC11()
{
	int sumA = 0;
	for (int k = 0; k < array2DRow; k++)
	{
		for (int q = 0; q < array2DCol; q++)
		{
			sumA += array2DGlobal[k][q];
		}
	}
	return sumA;
}

void Array2DMMC12()
{
	int smallE = array2DGlobal[0][0], smallIR = 0, smallIC = 0;
	for (int l = 0; l < array2DRow; l++)
	{
		for (int q = 0; q < array2DCol; q++)
		{
			if (smallE > array2DGlobal[l][q])
			{
				//smallE = array2DGlobal[l][q];
				smallIR = l;
				smallIC = q;
			}
		}
	}
	gotoxy(11, 12);
	cout << "The index of the smallest element is at";
	gotoxy(26, 13);
	cout << "[" << smallIR << ", " << smallIC << "] " << endl;
}

void Array2DMMC13()
{
	int largeE = array2DGlobal[0][0], largeIR = 0, largeIC = 0;
	for (int m = 1; m < array2DRow; m++)
	{
		for (int p = 0; p < array2DCol; p++)
		{
			if (largeE < array2DGlobal[m][p])
			{
				//largeE = array2DGlobal[m];
				largeIC = m;
				largeIR = p;
			}
		}
	}
	gotoxy(11, 12);
	cout << "The index of the smallest element is at";
	gotoxy(26, 13);
	cout << "[" << largeIC << ", " << largeIR << "] " << endl;
	clearinputbox();
}

int Array2DMMC14()
{
	float array2DGlobalCopy[3][2], sumS = 0;
	copy(&array2DGlobal[0][0], &array2DGlobal[0][0] + 3 * 2, &array2DGlobalCopy[0][0]);
	for (int n = 0; n < array2DRow; n++)
	{
		for (int a2 = 0; a2 < array2DCol; a2++)
		{
			array2DGlobalCopy[n][a2] = pow(array2DGlobalCopy[n][a2], 2);
			sumS += array2DGlobalCopy[n][a2];
		}
	}
	return sumS;
}

void Array2DMMC15()
{
	copy(&array2DGlobal[0][0], &array2DGlobal[0][0] + 3 * 2, &array2DGlobalCopy[0][0]);
	gotoxy(24, 9);
	cout << "Array copied" << endl;
	gotoxy(20, 12);
	cout << "ArrayGlobalCopy[3][2]= ";
	for (int b = 0; b < array2DRow; b++)
	{
		gotoxy(26, b + 13);
		cout << "[";
		for (int y = 0; y < array2DCol; y++)
		{
			cout << array2DGlobal[b][y];
			if (y != array2DCol - 1)
				cout << ", ";
		}
		cout << "]" << endl;
	}
	clearinputbox();
	_getch();
}

void Array2DMMC16(int search)
{
	int rowPos, colPos;
	string ordinal;
	bool trigger;

	sort(&array2DGlobal[0][0], &array2DGlobal[0][0] + 3 * 2);

	for (int c = 0; c < array2DRow; c++)
	{
		for (int x = 0; x < array2DCol; x++)
		{
			if (array2DGlobal[c][x] == search)
			{
				trigger = true;
				rowPos = c;
				colPos = x;
				break;
			}
		}
	}

	clearaboveinput();
	gotoxy(20, 12);
	if (trigger == true)
		cout << "Element is at [" << rowPos << ", " << colPos << "]" << endl;
	else
		cout << "Element not found" << endl;
	clearinputbox();
}

void Array2DMMC17()
{
	int* arr2 = &array2DGlobal[0][0];
	sort(arr2, arr2 + array2DCol * array2DRow, less<int>());

	gotoxy(16, 12);
	cout << "The elements have been sorted" << endl;
	for (int b = 0; b < array2DRow; b++)
	{
		gotoxy(26, b + 13);
		cout << "[";
		for (int y = 0; y < array2DCol; y++)
		{
			cout << array2DGlobal[b][y];
			if (y != array2DCol - 1)
				cout << ", ";
		}
		cout << "]" << endl;
	}
	clearinputbox();
}

//Recursion
bool isConsonant(char ch)
{
	ch = toupper(ch);

	return !(ch == 'A' || ch == 'E' ||
		ch == 'I' || ch == 'O' ||
		ch == 'U') && ch >= 65 && ch <= 90;
}

int recursionMMC1(int n)
{
	if (n > 1)
		return n * recursionMMC1(n - 1);
	else
		return 1;
}

int recursionMMC2(int num1, int num2)
{
	int sum = 0;
	for (; num1 <= num2; num1++)
	{
		sum = sum + num1;
	}
	return sum;
}

int recursionMMC3(int num1, int num2)
{
	if (num1 > num2)
		return 0;
	return num1 + recursionMMC3(num1 + 2, num2);
}

void recursionMMC4(char s1[], char s2[], int index = 0)
{
	s2[index] = s1[index];

	if (s1[index] == '\0')
		return;

	recursionMMC4(s1, s2, index + 1);
}

int recursionMMC5(int n)
{
	if (n <= 1)
		return n;
	return n + recursionMMC5(n - 1);
}

int recursionMMC6(string str, int n)
{
	if (n == 1)
		return isConsonant(str[0]);

	return recursionMMC6(str, n - 1) +
		isConsonant(str[n - 1]);
}

int recursionMMC7(char* str)
{
	if (*str == '\0')
		return 0;
	else
		return 1 + recursionMMC7(str + 1);
}

int recursionMMC8(int x, int y)
{
	if (x < y)
		return recursionMMC8(y, x);

	else if (y != 0)
		return (x + recursionMMC8(x, y - 1));

	else
		return 0;
}

//Struct
void structMMC1()
{
	for (int n = 0; n < numArrayStruct; n++)
	{
		gotoxy(19, 9);
		cout << "Student" << n + 1 << "'s Last Name:       " << endl;
		gotoxy(5, 24);
		cout << "Last Name:    " << endl;
		clearinputbox();
		cin >> student[n].lastName;
		gotoxy(19, 9);
		cout << "Student" << n + 1 << "'s First Name:      " << endl;
		gotoxy(5, 24);
		cout << "First Name:" << endl;
		clearinputbox();;
		cin >> student[n].firstName;
		gotoxy(19, 9);
		cout << "Student" << n + 1 << "'s Middle Name:     " << endl;
		gotoxy(5, 24);
		cout << "Middle Name:" << endl;
		clearinputbox();
		cin >> student[n].middleName;
	}
	clearaboveinput();
	gotoxy(50, 24);
	cout << "Done!" << endl;
	clearinputbox();
}

void structMMC2()
{
	gotoxy(5, 5);
	cout << "Last Name:" << "\tFirst Name:" << " Middle Name:";
	for (int m = 0; m < numArrayStruct; m++)
	{
		gotoxy(5, m + 7);
		cout << student[m].lastName;
		gotoxy(16, m + 7);
		cout << student[m].firstName;
		gotoxy(28, m + 7);
		cout << student[m].middleName << endl;
	}
	clearinputbox();
	passed = true;
}

void structMMC2modified()
{
	gotoxy(5, 5);
	cout << "No. Last Name: First Name: Sem. Grade: Equi. Grade: ";
	for (int m = 0; m < numArrayStruct; m++)
	{
		gotoxy(5, m + 7);
		cout << m + 1;
		gotoxy(9, m + 7);
		cout << student[m].lastName;
		gotoxy(20, m + 7);
		cout << student[m].firstName;
		gotoxy(32, m + 7);
		cout << student[m].semestralGrade;
		gotoxy(44, m + 7);
		cout << student[m].equiGrade;
	}

	gotoxy(5, 14);
	cout << "No. Remarks: ";
	for (int m = 0; m < numArrayStruct; m++)
	{
		gotoxy(5, m + 16);
		cout << m + 1;
		gotoxy(9, m + 16);
		cout << student[m].remarks;
	}
	clearinputbox();
}

void structMMC3()
{
	int quiz1Over = 10, quiz2Over = 10;

	for (int z = 0; z < numArrayStruct; z++)
	{
		gotoxy(19, 9);
		cout << student[z].firstName << "'s Quiz 1 Score: " << endl;
		gotoxy(5, 24);
		cout << "Quiz 1 Score:   " << endl;
		clearinputbox();
		cin >> student[z].quiz1Score;
		gotoxy(19, 9);
		cout << student[z].firstName << "'s Quiz 2 Score: " << endl;
		gotoxy(5, 24);
		cout << "Quiz 2 Score:   " << endl;
		clearinputbox();
		cin >> student[z].quiz2Score;
		gotoxy(19, 9);
		cout << student[z].firstName << "'s Exercise Grade: " << endl;
		gotoxy(5, 24);
		cout << "Exercise Grade: " << endl;
		clearinputbox();
		cin >> student[z].exercisesGrade;
		gotoxy(19, 9);
		cout << student[z].firstName << "'s Project Grade: " << endl;
		gotoxy(5, 24);
		cout << "Project Grade:  " << endl;
		clearinputbox();
		cin >> student[z].projectGrade;
	}

	for (int q = 0; q < numArrayStruct; q++)
	{
		student[q].quiz1Grade = (student[q].quiz1Score / quiz1Over) * 100;
		student[q].quiz2Grade = (student[q].quiz2Score / quiz2Over) * 100;

		student[q].quizTotal = (student[q].quiz1Grade + student[q].quiz2Grade) / 2;

		student[q].semestralGrade = (student[q].quizTotal + student[q].exercisesGrade + student[q].projectGrade) / 3;
	}

	for (int w = 0; w < numArrayStruct; w++)
	{
		if (student[w].semestralGrade >= 97 && student[w].semestralGrade <= 100)
			student[w].equiGrade = 1.0;
		else if (student[w].semestralGrade >= 94 && student[w].semestralGrade <= 96)
			student[w].equiGrade = 1.25;
		else if (student[w].semestralGrade >= 91 && student[w].semestralGrade <= 93)
			student[w].equiGrade = 1.50;
		else if (student[w].semestralGrade >= 88 && student[w].semestralGrade <= 90)
			student[w].equiGrade = 1.75;
		else if (student[w].semestralGrade >= 85 && student[w].semestralGrade <= 87)
			student[w].equiGrade = 2.0;
		else if (student[w].semestralGrade >= 82 && student[w].semestralGrade <= 84)
			student[w].equiGrade = 2.25;
		else if (student[w].semestralGrade >= 79 && student[w].semestralGrade <= 81)
			student[w].equiGrade = 2.5;
		else if (student[w].semestralGrade >= 76 && student[w].semestralGrade <= 78)
			student[w].equiGrade = 2.75;
		else if (student[w].semestralGrade == 75)
			student[w].equiGrade = 3.0;
		else if (student[w].semestralGrade < 75)
			student[w].equiGrade = 5.0;
	}

	for (int r = 0; r < numArrayStruct; r++)
	{
		if (student[r].equiGrade != 5.0)
			student[r].remarks = "PASSED";
		else
			student[r].remarks = "FAILED";
	}
	clearaboveinput();
	gotoxy(28, 24);
	cout << "Grades have been calculated" << endl;
	clearinputbox();
}

void structMMC4(string search)
{
	clrscr();
	borderStruct();
	bool yes = false;
	for (int m = 0; m < numArrayStruct; m++)
	{
		if (student[m].lastName == search)
		{
			gotoxy(5, 5);
			cout << "Last Name: First Name: Sem. Grade: Equi. Grade: ";
			gotoxy(5, m + 7);
			cout << student[m].lastName;
			gotoxy(16, m + 7);
			cout << student[m].firstName;
			gotoxy(28, m + 7);
			cout << student[m].semestralGrade;
			gotoxy(40, m + 7);
			cout << student[m].equiGrade;

			gotoxy(5, 14);
			cout << "Remarks: ";
			gotoxy(5, m + 16);
			cout << student[m].remarks;
			yes = true;
			break;
		}
	}
	clearaboveinput();
	clearinputbox();
	if (yes == false)
	{
		clearaboveinput();
		gotoxy(30, 24);
		cout << "No Records / Invalid Name" << endl;
		clearinputbox();
	}
}

bool compare(const studentGrade& s1, const studentGrade& s2)
{
	return s1.lastName < s2.lastName;
}

void structMMC5()
{
	sort(student, student + 5, compare);
	gotoxy(22, 12);
	cout << "Last Name has been sorted" << endl;
	clearinputbox();
}

//File Handling
void FileMMC1()
{
	string input;
	/*fstream MyFile("filename.txt");*/
	std::fstream MyFile("file1.txt", std::fstream::out | std::fstream::trunc);
	gotoxy(34, 24);
	cout << "\"file1.txt\" opened";

	gotoxy(18, 9);
	cout << "What text to put in file: " << endl;
	gotoxy(5, 24);
	cout << "Text (no space): ";
	gotoxy(5, 26);
	cin >> input;
	MyFile << input;
	gotoxy(20, 12);
	cout << "Text input successful" << endl;
	MyFile.close();
	clearinputbox();
}

void FileMMC2()
{
	string myText;
	ifstream MyReadFile("file1.txt");
	gotoxy(33, 24);
	cout << "\"file1.txt\" opened";

	gotoxy(26, 13);
	while (getline(MyReadFile, myText))
	{
		cout << myText;
	}
	MyReadFile.close();
	clearinputbox();
}

void FileMMC3()
{
	ifstream reader("file2.txt");
	gotoxy(37, 24);
	cout << "\"file2.txt\" opened";

	int line = 1, word = 1, size;
	char ch;

	reader.seekg(0, ios::end);
	size = reader.tellg();
	reader.seekg(0, ios::beg);

	while (reader)
	{
		reader.get(ch);
		if (ch == ' ' || ch == '\n')
			word++;

		if (ch == '\n')
			line++;
	}

	gotoxy(20, 12);
	cout << "No. of Lines = " << line << endl;
	gotoxy(20, 13);
	cout << "No. of Words = " << word << endl;
	gotoxy(18, 14);
	cout << "No. of Letters = " << size << endl;
	reader.close();
	clearinputbox();
}