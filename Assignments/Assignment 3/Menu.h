#include <iostream>
#include <math.h>
#include <string.h>
#include <iostream>
#include <math.h>
//#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int choice;
int loop1, case1 = 1;
char name1[20];
int loop2, case2 = 1;
int loop3, case3;
int loop4, case4A, case4B = 1, case4C = 1;
int loop5, case5 = 1;
int loop6, case6A, case6B = 1;
int loop7, case7A = 1, case7B = 1;
int loop8, case8A, case8B;

const int arraySize = 5;
int arrayGlobal[arraySize], arrGloCopy[5];
bool trigger2;
int middle = sizeof(arrayGlobal) / sizeof(arrayGlobal[0]);

void clrscr()
{
	cout << "\033[2J\033[1;1H";
}

void login()
{
	char loginUser[4], blank[5], loginPass[4];
	int loginBool = 1;
	//while(loginBool)
	while (loginBool == 1)
	{
		clrscr();
		//gotoxy(32,9);
		cout << "Please log in: test if this changes" << endl;
		//gotoxy(32,11);
		cout << "Username: ";
		cin >> loginUser;
		//gotoxy(32,12);
		cout << "Password: ";
		cin >> loginPass;

		if (strcmp("user", loginUser) == 0 && strcmp("pass", loginPass) == 0)
		{
			cout << "Login Successful!" << endl;
			//loginBool = false;
			loginBool = 0;
		}
		else
		{
			//gotoxy(12,13);
			cout << "Username and Password is incorrect. Type retry to try again." << endl;
			//gotoxy(36,14);
			cin >> blank;
		}
	}
}

//Sequence Case 1-10 + Main Menu Choice

void sequenceMainMenuCase1()
{
	clrscr();
	//gotoxy(35,12);
	cout << "Hello World" << endl;
	//getch();
}

int sequenceMainMenuCase2()
{
	clrscr();
	int sequenceCase1Sum, sequenceCase1Diff, sequenceCase1Prod;
	float sequenceCase1Quo, sequenceCase1Num1, sequenceCase1Num2;

	//gotoxy(32,1);
	cout << "Enter two numbers:" << endl;
	//gotoxy(38,2);
	cin >> sequenceCase1Num1;
	cin >> sequenceCase1Num2;

	sequenceCase1Sum = sequenceCase1Num1 + sequenceCase1Num2;
	sequenceCase1Diff = sequenceCase1Num1 - sequenceCase1Num2;
	sequenceCase1Prod = sequenceCase1Num1 * sequenceCase1Num2;
	sequenceCase1Quo = sequenceCase1Num1 / sequenceCase1Num2;

	cout << endl << "The sum of " << sequenceCase1Num1 << " and " << sequenceCase1Num2 << " is " << sequenceCase1Sum << endl;
	cout << "The difference of " << sequenceCase1Num1 << " and " << sequenceCase1Num2 << " is " << sequenceCase1Diff << endl;
	cout << "The product of " << sequenceCase1Num1 << " and " << sequenceCase1Num2 << " is " << sequenceCase1Prod << endl;
	//cout << setprecision(2);
	cout << "The quotient of " << sequenceCase1Num1 << " and " << sequenceCase1Num2 << " is " << sequenceCase1Quo << endl;
	//getch();
	return 0;
}
int sequenceMainMenuCase3()
{
	clrscr();
	float sequenceCase3A, sequenceCase3B, sequenceCase3C, sequenceCase3X1, sequenceCase3X2, sequenceCase3Discriminant;
	//gotoxy(31,1);
	cout << "Enter A, B and C: " << endl;
	//gotoxy(35,2);
	cin >> sequenceCase3A >> sequenceCase3B >> sequenceCase3C;

	sequenceCase3Discriminant = sequenceCase3B * sequenceCase3B - 4 * sequenceCase3A * sequenceCase3C;

	sequenceCase3X1 = (-sequenceCase3B + sqrt(sequenceCase3Discriminant)) / (2 * sequenceCase3A);
	sequenceCase3X2 = (-sequenceCase3B - sqrt(sequenceCase3Discriminant)) / (2 * sequenceCase3A);

	cout << endl << "x1 = " << sequenceCase3X1 << endl;
	cout << "x2 = " << sequenceCase3X2 << endl;
	//getch();
	return 0;
}

int sequenceMainMenuCase4()
{
	clrscr();
	int sequenceCase4Length, sequenceCase4Width, sequenceCase4Area, sequenceCase4Perimeter;
	//gotoxy(29,1);
	cout << "Input Length and Width:" << endl;
	//gotoxy(33,2);
	cout << "Length: ";
	cin >> sequenceCase4Length;
	//gotoxy(33,3);
	cout << "Width: ";
	cin >> sequenceCase4Width;

	sequenceCase4Area = sequenceCase4Length * sequenceCase4Width;
	sequenceCase4Perimeter = 2 * sequenceCase4Length + 2 * sequenceCase4Width;

	//gotoxy(22,5);
	cout << "The area is " << sequenceCase4Area << " and the Perimeter is " << sequenceCase4Perimeter << endl;
	//getch();
	return 0;
}

int sequenceMainMenuCase5()
{
	clrscr();
	int sequenceCase5Num1, sequenceCase5Num2, sequenceCase5Num3;
	//gotoxy(31,1);
	cout << "Input two numbers:" << endl;
	//gotoxy(37,2);
	cin >> sequenceCase5Num1;
	cin >> sequenceCase5Num2;

	cout << endl << "The value of num1 before: " << sequenceCase5Num1 << endl;
	cout << "The value of num2 before: " << sequenceCase5Num2 << endl;

	sequenceCase5Num3 = sequenceCase5Num1;
	sequenceCase5Num1 = sequenceCase5Num2;
	sequenceCase5Num2 = sequenceCase5Num3;

	cout << "The value of num1 now: " << sequenceCase5Num1 << endl;
	cout << "The value of num2 now: " << sequenceCase5Num2 << endl;
	//getch();
	return 0;
}

int sequenceMainMenuCase6()
{
	clrscr();
	int sequenceCase6Prelim, sequenceCase6Midterm, sequenceCase6Finals;
	double sequenceCase6Ave;

	//gotoxy(21,1);
	cout << "Input Prelim, Midterm and Final grades:" << endl;
	//gotoxy(33,2);
	cout << "Prelim: ";
	cin >> sequenceCase6Prelim;
	//gotoxy(33,3);
	cout << "Midterm: ";
	cin >> sequenceCase6Midterm;
	//gotoxy(33,4);
	cout << "Final: ";
	cin >> sequenceCase6Finals;

	sequenceCase6Ave = (sequenceCase6Prelim + sequenceCase6Midterm + sequenceCase6Finals) / 3;

	//gotoxy(24,6);
	cout << "The average of your grades is: " << sequenceCase6Ave << endl;
	//getch();
}

int sequenceMainMenuCase7()
{
	clrscr();
	int sequenceCase7Dia;
	float sequenceCase7Radius, sequenceCase7Area, sequenceCase7Circumference, sequenceCase7Pi = 3.14;

	//gotoxy(33,1);
	cout << "Enter a diameter:" << endl;
	//gotoxy(39,2);
	cin >> sequenceCase7Dia;

	sequenceCase7Radius = sequenceCase7Dia / 2;
	sequenceCase7Area = sequenceCase7Pi * pow(sequenceCase7Radius, 2);
	sequenceCase7Circumference = 2 * sequenceCase7Pi * sequenceCase7Radius;

	//gotoxy(29,4);
	cout << "The area is " << sequenceCase7Area << endl;
	//gotoxy(25,5);
	cout << "The circumference is " << sequenceCase7Circumference << endl;
	//getch();
}

int sequenceMainMenuCase8()
{
	clrscr();
	float sequenceCase8Farenheit, sequenceCase8Celsius;

	//gotoxy(27,1);
	cout << "Enter temperature in Celsius:" << endl;
	//gotoxy(40,2);
	cin >> sequenceCase8Celsius;

	sequenceCase8Farenheit = sequenceCase8Celsius * 9 / 5 + 32;

	//gotoxy(20,4);
	cout << "The temperature in Farenheit is " << sequenceCase8Farenheit << endl;
	//getch();
}

int sequenceMainMenuCase9()
{
	clrscr();
	int sequenceCase9NumHrs, sequenceCase9RatePerHour, sequenceCase9Deduction;
	char sequenceCase9FirstName[30], sequenceCase9MiddleName[30], sequenceCase9LastName[30], sequenceCase9JobPosition[30];
	float sequenceCase9GrossPay, sequenceCase9NetPay;

	//gotoxy(31,1);
	cout << "Enter the following:" << endl;
	cout << "First Name: ";
	cin >> sequenceCase9FirstName;
	cout << "Middle Name: ";
	cin >> sequenceCase9MiddleName;
	cout << "Last Name: ";
	cin >> sequenceCase9LastName;
	cout << "Job Position: ";
	cin >> sequenceCase9JobPosition;
	cout << "Number of hours work: ";
	cin >> sequenceCase9NumHrs;
	cout << "Rate per hour: ";
	cin >> sequenceCase9RatePerHour;
	cout << "Deduction: ";
	cin >> sequenceCase9Deduction;

	sequenceCase9GrossPay = sequenceCase9NumHrs * sequenceCase9RatePerHour;
	sequenceCase9NetPay = sequenceCase9GrossPay - sequenceCase9Deduction;

	cout << endl << sequenceCase9FirstName << " " << sequenceCase9LastName << "'s Gross Pay is " << sequenceCase9GrossPay << endl;
	cout << sequenceCase9FirstName << " " << sequenceCase9LastName << "'s Net Pay is " << sequenceCase9NetPay << endl;
	//getch();
}

int sequenceMainMenuCase10()
{
	clrscr();
	double sequenceCase10Num1, sequenceCase10Square, sequenceCase10Cube;

	//gotoxy(32,1);
	cout << "Enter a number: ";
	cin >> sequenceCase10Num1;

	sequenceCase10Square = sequenceCase10Num1 * sequenceCase10Num1;
	sequenceCase10Cube = sequenceCase10Num1 * sequenceCase10Num1 * sequenceCase10Num1;

	//gotoxy(12,3);
	cout << "The Square of your number is: " << sequenceCase10Square << " and the Cube is: " << sequenceCase10Cube << endl;
	//getch();
}
//If Statements 1-7 + Main Menu

int ifStatementMainMenuCase1()
{
	clrscr();
	int ifStatementCase1Prelim, ifStatementCase1Midterm, ifStatementCase1Finals;
	double ifStatementCase1Ave;

	//gotoxy(21,1);
	cout << "Input Prelim, Midterm and Final grades:" << endl;
	//gotoxy(33,2);
	cout << "Prelim: ";
	cin >> ifStatementCase1Prelim;
	//gotoxy(33,3);
	cout << "Midterm: ";
	cin >> ifStatementCase1Midterm;
	//gotoxy(33,4);
	cout << "Final: ";
	cin >> ifStatementCase1Finals;

	ifStatementCase1Ave = (ifStatementCase1Prelim + ifStatementCase1Midterm + ifStatementCase1Finals) / 3;

	//gotoxy(21,6);
	if (ifStatementCase1Ave >= 97 && ifStatementCase1Ave <= 100)
		cout << "Your equivalent grade is 1.0 and PASSED" << endl;
	else if (ifStatementCase1Ave >= 94 && ifStatementCase1Ave <= 96)
		cout << "Your equivalent grade is 1.25 and PASSED" << endl;
	else if (ifStatementCase1Ave >= 91 && ifStatementCase1Ave <= 93)
		cout << "Your equivalent grade is 1.50 and PASSED" << endl;
	else if (ifStatementCase1Ave >= 88 && ifStatementCase1Ave <= 90)
		cout << "Your equivalent grade is 1.75 and PASSED" << endl;
	else if (ifStatementCase1Ave >= 85 && ifStatementCase1Ave <= 87)
		cout << "Your equivalent grade is 2.0 and PASSED" << endl;
	else if (ifStatementCase1Ave >= 82 && ifStatementCase1Ave <= 84)
		cout << "Your equivalent grade is 2.25 and PASSED" << endl;
	else if (ifStatementCase1Ave >= 79 && ifStatementCase1Ave <= 81)
		cout << "Your equivalent grade is 2.5 and PASSED" << endl;
	else if (ifStatementCase1Ave >= 76 && ifStatementCase1Ave <= 78)
		cout << "Your equivalent grade is 2.75 and PASSED" << endl;
	else if (ifStatementCase1Ave == 75)
		cout << "Your equivalent grade is 3.0 and PASSED" << endl;
	else
		cout << "Your equivalent grade is 5.0 and FAILED" << endl;
	//getch();
}

int ifStatementMainMenuCase2()
{
	clrscr();
	int ifStatementCase2Num1, ifStatementCase2Mod;

	//gotoxy(32,1);
	cout << "Input a number:" << endl;
	//gotoxy(39,2);
	cin >> ifStatementCase2Num1;

	ifStatementCase2Mod = ifStatementCase2Num1 % 2;

	//gotoxy(33,3);
	if (ifStatementCase2Mod == 0)
		cout << "Number is Even" << endl;
	else
		cout << "Number is Odd" << endl;
	//getch();
}

int ifStatementMainMenuCase3()
{
	clrscr();
	int ifStatementCase3Num1;

	//gotoxy(32,1);
	cout << "Input a number:" << endl;
	//gotoxy(39,2);
	cin >> ifStatementCase3Num1;

	//gotoxy(30,3);
	if (ifStatementCase3Num1 > 0)
		cout << "Number is positive" << endl;
	else
		cout << "Number is negative" << endl;
	//getch();
}

int ifStatementMainMenuCase4()
{
	clrscr();
	int ifStatementCase4SManNo, ifStatementCase4UnitPrice, ifStatementCase4Commission, ifStatementCase4TotalSale, ifStatementCase4UnitSold;
	char ifStatementCase4SManName[30];

	//gotoxy(31,1);
	cout << "Enter the following:" << endl;
	cout << "Salesman Number: ";
	cin >> ifStatementCase4SManNo;
	cout << "Salesman Name: ";
	cin >> ifStatementCase4SManName;
	cout << "Number of unit/s Sold: ";
	cin >> ifStatementCase4UnitSold;
	cout << "Unit Price: ";
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

	//gotoxy(29,7);
	cout << "The Commission is: " << ifStatementCase4Commission << endl;
	//getch();
}

int ifStatementMainMenuCase5()
{
	clrscr();
	int ifStatementCase5Num1, ifStatementCase5Num2;

	//gotoxy(30,1);
	cout << "Input two numbers:" << endl;
	//gotoxy(36,2);
	cin >> ifStatementCase5Num1 >> ifStatementCase5Num2;

	//gotoxy(33,4);
	if (ifStatementCase5Num1 > ifStatementCase5Num2)
		cout << ifStatementCase5Num1 << " is bigger" << endl;
	else
		cout << ifStatementCase5Num2 << " is bigger" << endl;
	//getch();
}

int ifStatementMainMenuCase6()
{
	clrscr();
	int ifStatementCase6Num1, ifStatementCase6Num2, ifStatementCase6Num3;
	//gotoxy
	cout << "Enter three numbers:" << endl;
	cin >> ifStatementCase6Num1 >> ifStatementCase6Num2 >> ifStatementCase6Num3;

	if (ifStatementCase6Num1 > ifStatementCase6Num2 && ifStatementCase6Num1 > ifStatementCase6Num3)
		cout << ifStatementCase6Num1 << " is the biggest number" << endl;
	else if (ifStatementCase6Num2 > ifStatementCase6Num1 && ifStatementCase6Num2 > ifStatementCase6Num3)
		cout << ifStatementCase6Num2 << " is the biggest number" << endl;
	else
		cout << ifStatementCase6Num3 << " is the biggest number" << endl;
	//getch();
}

int ifStatementMainMenuCase7()
{
	clrscr();
	int ifStatementCase7Num1;

	cout << "Input a number:" << endl;
	cin >> ifStatementCase7Num1;

	if (ifStatementCase7Num1 > 0)
		cout << "Number is positive" << endl;
	else if (ifStatementCase7Num1 < 0)
		cout << "Number is negative" << endl;
	else
		cout << "Number is 0" << endl;
	//getch();
}

//loops test
int loopsMainMenuCase1For()
{
	for (; case1 <= 5; case1++)
	{
		cout << name1 << endl;
	}
	case1 = 1;
	//getch();
}

int loopsMainMenuCase1While()
{
	while (case1 <= 5)
	{
		cout << name1 << endl;
		case1++;
	}
	case1 = 1;
	//getch();
}

int loopsMainMenuCase1DoWhile()
{
	do
	{
		cout << name1 << endl;
		case1++;
	} while (case1 <= 5);
	case1 = 1;
	//getch();
}

int loopsMainMenuCase2For()
{
	for (; case2 <= 10; case2++)
	{
		cout << case2 << endl;
	}
	case2 = 1;
	//getch();
}

int loopsMainMenuCase2While()
{
	while (case2 <= 10)
	{
		cout << case2 << endl;
		case2++;
	}
	case2 = 1;
	//getch();
}

int loopsMainMenuCase2DoWhile()
{
	do
	{
		cout << case2 << endl;
		case2++;
	} while (case2 <= 10);
	case2 = 1;
	//getch();
}

int loopsMainMenuCase3For()
{
	for (; case3 >= 1; case3--)
	{
		cout << case3 << endl;
	}
	case3 = 1;
	//getch();
}

int loopsMainMenuCase3While()
{
	while (case3 >= 1)
	{
		cout << case3 << endl;
		case3--;
	}
	case3 = 1;
	//getch();
}

int loopsMainMenuCase3DoWhile()
{
	do
	{
		cout << case3 << endl;
		case3--;
	} while (case3 >= 1);
	case3 = 1;
	//getch();
}

int loopsMainMenuCase4For()
{
	for (; case4C <= case4A; case4C++)
	{
		case4B *= case4C;
	}
	cout << "Factorial of " << case4A << " = " << case4B << endl;
	case4C = 1;
	//getch();
}

int loopsMainMenuCase4While()
{
	while (case4C <= case4A)
	{
		case4B *= case4C;
		case4C++;
	}
	cout << "Factorial of " << case4A << " = " << case4B << endl;
	case4C = 1;
	//getch();
}

int loopsMainMenuCase4DoWhile()
{
	do
	{
		case4B *= case4C;
		case4C++;
	} while (case4C <= case4A);

	cout << "Factorial of " << case4A << " = " << case4B << endl;
	case4C = 1;
	//getch();
}

int loopsMainMenuCase5For()
{
	for (; case5 <= 10; case5++)
	{
		if (case5 % 2 == 0)
		{
			cout << case5 << "\n";
		}
	}
	case5 = 1;
	//getch();
}

int loopsMainMenuCase5While()
{
	while (case5 <= 10)
	{
		if (case5 % 2 == 0)
		{
			cout << case5 << endl;
		}
		case5++;
	}
	case5 = 1;
	//getch();
}

int loopsMainMenuCase5DoWhile()
{
	do
	{
		if (case5 % 2 == 0)
		{
			cout << case5 << endl;
		}
		case5++;
	} while (case5 <= 10);
	case5 = 1;
	//getch();
}

int loopsMainMenuCase6For()
{
	for (; case6B <= 5; case6B++)
	{
		cout << "Input a number:" << endl;
		cin >> case6A;
		cout << endl;
		if (case6A > 0)
			cout << case6A << " is a positive number" << endl;
	}
	case6B = 1;
	//getch();
}

int loopsMainMenuCase6While()
{
	while (case6B <= 5)
	{
		cout << "Input a number:" << endl;
		cin >> case6A;
		cout << endl;
		if (case6A > 0)
			cout << case6A << " is a positive number" << endl;
		case6B++;
	}
	case6B = 1;
	//getch();
}

int loopsMainMenuCase6DoWhile()
{
	do
	{
		cout << "Input a number:" << endl;
		cin >> case6A;
		cout << endl;
		if (case6A > 0)
			cout << case6A << " is a positive number" << endl;
		case6B++;
	} while (case6B <= 5);
	case6B = 1;
	//getch();
}

int loopsMainMenuCase7For()
{
	for (case7A = 1; case7A <= 5; case7A++)
	{
		for (case7B = 1; case7B <= case7A; case7B++)
		{
			cout << "*";
		}
		cout << endl;
	}
	//getch();
}

int loopsMainMenuCase7While()
{
	case7A = 1;
	case7B = 1;
	while (case7A <= 5)
	{
		while (case7B <= case7A)
		{
			cout << "*";
			case7B++;
		}
		case7B = 1;
		cout << endl;
		case7A++;
	}
	//getch();
}

int loopsMainMenuCase7DoWhile()
{
	case7A = 1;
	case7B = 1;
	do
	{
		while (case7B <= case7A)
		{
			cout << "*";
			case7B++;
		}
		case7B = 1;
		cout << endl;
		case7A++;
	} while (case7A <= 5);
	//getch();
}

int loopsMainMenuCase8For()
{
	for (int case8A = 5; case8A >= 1; case8A--)
	{
		for (int case8B = case8A; case8B > 0; case8B--)
			cout << case8A;
		cout << endl;
	}
	//getch();
}

int loopsMainMenuCase8While()
{
	case8A = 5;
	while (case8A >= 1)
	{
		case8B = case8A;
		while (case8B > 0)
		{
			cout << case8A;
			case8B--;
		}
		cout << endl;
		case8A--;
	}
	//getch();
}

int loopsMainMenuCase8DoWhile()
{
	case8A = 5;
	do
	{
		case8B = case8A;
		while (case8B > 0)
		{
			cout << case8A;
			case8B--;
		}
		cout << endl;
		case8A--;
	} while (case8A >= 1);
	//getch();
}

int loopsMainMenuCase1()
{
	loop1 = 1;
	clrscr();
	while (loop1 < 3)
	{
		clrscr();
		cout << "Choose Loop Method:" << endl;
		cout << "1. For Loop" << endl;
		cout << "2. While Loop" << endl;
		cout << "3. Do-While Loop" << endl;
		cout << "4. Exit" << endl;
		cin >> loop1;

		if (loop1 != 4)
		{
			clrscr();
			cout << "Enter Name:" << endl;
			cin >> name1;
			cout << endl;
		}

		switch (loop1)
		{
		case 1:
			clrscr();
			loopsMainMenuCase1For();
			//getch();
			break;

		case 2:
			clrscr();
			loopsMainMenuCase1While();
			//getch();

			break;

		case 3:
			clrscr();
			loopsMainMenuCase1DoWhile();
			//getch();
			break;
		}
	}
}

int loopsMainMenuCase2()
{
	loop2 = 1;
	clrscr();
	while (loop2 < 3)
	{
		clrscr();
		cout << "Choose Loop Method:" << endl;
		cout << "1. For Loop" << endl;
		cout << "2. While Loop" << endl;
		cout << "3. Do-While Loop" << endl;
		cout << "4. Exit" << endl;
		cin >> loop2;

		switch (loop2)
		{
		case 1:
			clrscr();
			loopsMainMenuCase2For();
			//getch();
			break;

		case 2:
			clrscr();
			loopsMainMenuCase2While();
			break;

		case 3:
			clrscr();
			loopsMainMenuCase2DoWhile();
			//getch();
			break;
		}
	}
}

int loopsMainMenuCase3()
{
	loop3 = 1;
	clrscr();
	while (loop3 < 3)
	{
		clrscr();
		cout << "Choose Loop Method:" << endl;
		cout << "1. For Loop" << endl;
		cout << "2. While Loop" << endl;
		cout << "3. Do-While Loop" << endl;
		cout << "4. Exit" << endl;
		cin >> loop3;

		if (loop3 != 4)
		{
			clrscr();
			cout << "Input a number:" << endl;
			cin >> case3;
		}

		switch (loop3)
		{
		case 1:
			clrscr();
			loopsMainMenuCase3For();
			//getch();
			break;

		case 2:
			clrscr();
			loopsMainMenuCase3While();
			//getch();
			break;

		case 3:
			clrscr();
			loopsMainMenuCase3DoWhile();
			//getch();
			break;
		}
	}
	//getch();
}

int loopsMainMenuCase4()
{
	loop4 = 1;
	clrscr();
	while (loop4 < 3)
	{
		clrscr();
		cout << "Choose Loop Method:" << endl;
		cout << "1. For Loop" << endl;
		cout << "2. While Loop" << endl;
		cout << "3. Do-While Loop" << endl;
		cout << "4. Exit" << endl;
		cin >> loop4;

		if (loop4 != 4)
		{
			clrscr();
			cout << "Input a number:" << endl;
			cin >> case4A;
		}

		switch (loop4)
		{
		case 1:
			clrscr();
			loopsMainMenuCase4For();
			//getch();
			break;

		case 2:
			clrscr();
			loopsMainMenuCase4While();
			//getch();
			break;

		case 3:
			clrscr();
			loopsMainMenuCase4DoWhile();
			//getch();
			break;
		}
	}
}

int loopsMainMenuCase5()
{
	loop5 = 1;
	while (loop5 < 3)
	{
		clrscr();
		cout << "Choose Loop Method:" << endl;
		cout << "1. For Loop" << endl;
		cout << "2. While Loop" << endl;
		cout << "3. Do-While Loop" << endl;
		cout << "4. Exit" << endl;
		cin >> loop5;

		switch (loop5)
		{
		case 1:
			clrscr();
			loopsMainMenuCase5For();
			//getch();
			break;

		case 2:
			clrscr();
			loopsMainMenuCase5While();
			//getch();
			break;

		case 3:
			clrscr();
			loopsMainMenuCase5DoWhile();
			//getch();
			break;
		}
	}
}

int loopsMainMenuCase6()
{
	loop6 = 1;
	while (loop6 < 3)
	{
		clrscr();
		cout << "Choose Loop Method:" << endl;
		cout << "1. For Loop" << endl;
		cout << "2. While Loop" << endl;
		cout << "3. Do-While Loop" << endl;
		cout << "4. Exit" << endl;
		cin >> loop6;

		switch (loop6)
		{
		case 1:
			clrscr();
			loopsMainMenuCase6For();
			//getch();
			break;

		case 2:
			clrscr();
			loopsMainMenuCase6While();
			//getch();
			break;

		case 3:
			clrscr();
			loopsMainMenuCase6DoWhile();
			//getch();
			break;
		}
	}
}

int loopsMainMenuCase7()
{
	loop7 = 1;
	while (loop7 < 3)
	{
		clrscr();
		cout << "Choose Loop Method:" << endl;
		cout << "1. For Loop" << endl;
		cout << "2. While Loop" << endl;
		cout << "3. Do-While Loop" << endl;
		cout << "4. Exit" << endl;
		cin >> loop7;

		switch (loop7)
		{
		case 1:
			clrscr();
			loopsMainMenuCase7For();
			//getch();
			break;

		case 2:
			clrscr();
			loopsMainMenuCase7While();
			//getch();
			break;

		case 3:
			clrscr();
			loopsMainMenuCase7DoWhile();
			//getch();
			break;
		}
	}
}

int loopsMainMenuCase8()
{
	loop8 = 1;
	while (loop8 < 3)
	{
		clrscr();
		cout << "Choose Loop Method:" << endl;
		cout << "1. For Loop" << endl;
		cout << "2. While Loop" << endl;
		cout << "3. Do-While Loop" << endl;
		cout << "4. Exit" << endl;
		cin >> loop8;

		switch (loop8)
		{
		case 1:
			clrscr();
			loopsMainMenuCase8For();
			//getch();
			break;

		case 2:
			clrscr();
			loopsMainMenuCase8While();
			//getch();
			break;

		case 3:
			clrscr();
			loopsMainMenuCase8DoWhile();
			//getch();
			break;
		}
	}
}

//Array + Main Menu

int arrayMainMenuCase1()
{
	clrscr();
	int arrayCase1Numbers[10], arrayCase1NegCount = 0;

	cout << "Enter 10 numbers: " << endl;
	for (int arrayCase1I = 0; arrayCase1I < 10; arrayCase1I++)
	{
		cin >> arrayCase1Numbers[arrayCase1I];
		if (arrayCase1Numbers[arrayCase1I] < 0)
			arrayCase1NegCount += arrayCase1Numbers[arrayCase1I];
	}
	cout << endl;
	cout << "Sum of negative numbers: " << arrayCase1NegCount << endl;
	//getch();
	return 0;
}

int arrayMainMenuCase2()
{
	clrscr();
	int arrayCase2Ar[10], arrayCase2I, arrayCase2J, arrayCase2Trigger, arrayCase2TempM;
	cout << "Enter 5 numbers: " << endl;
	for (arrayCase2I = 0; arrayCase2I < 5; arrayCase2I++)
	{
		cin >> arrayCase2Ar[arrayCase2I];
	}

	cout << endl << "The prime numbers are " << endl;
	for (arrayCase2I = 0; arrayCase2I < 5; arrayCase2I++)
	{
		arrayCase2Trigger = 0;
		for (arrayCase2J = 2; arrayCase2J < arrayCase2Ar[arrayCase2I]; arrayCase2J++)
		{
			arrayCase2TempM = arrayCase2Ar[arrayCase2I] % arrayCase2J;
			if (arrayCase2TempM == 0)
			{
				arrayCase2Trigger = 1;
				break;
			}
		}
		if (arrayCase2Trigger == 0)
			cout << arrayCase2Ar[arrayCase2I] << endl;
	}
	//getch();
	return 0;
}

int arrayMainMenuCase3()
{
	clrscr();
	char arrayCase3Line[150];
	int arrayCase3Vowels = 0;

	cout << "Enter a sentence: ";
	cin >> arrayCase3Line;

	cout << "Vowels in the array: ";
	for (int i = 0; arrayCase3Line[i] != '\0'; ++i)
	{
		if (arrayCase3Line[i] == 'a' || arrayCase3Line[i] == 'e' || arrayCase3Line[i] == 'i' || arrayCase3Line[i] == 'o' || arrayCase3Line[i] == 'u')
		{
			arrayCase3Vowels++;
			cout << arrayCase3Line[i] << " ";
		}
	}

	cout << endl << "Vowels: " << arrayCase3Vowels << endl;
	//getch();
	return 0;
}

int arrayMainMenuCase4()
{
	clrscr();
	int arrayCase4ArI[10], arrayCase4Even = 0, arrayCase4Odd = 0, arrayCase4L;

	cout << "Enter 5 numbers: " << endl;
	for (arrayCase4L = 0; arrayCase4L < 5; arrayCase4L++)
	{
		cin >> arrayCase4ArI[arrayCase4L];
	}

	cout << "The Even numbers in the array: ";
	for (arrayCase4L = 0; arrayCase4L < 5; arrayCase4L++)
	{
		if (arrayCase4ArI[arrayCase4L] % 2 == 0)
		{
			arrayCase4Even++;
			cout << arrayCase4ArI[arrayCase4L] << " ";
		}
	}
	cout << endl << "There are " << arrayCase4Even << " Even numbers." << endl << endl;

	cout << "The Odd numbers in the array: ";
	for (arrayCase4L = 0; arrayCase4L < 5; arrayCase4L++)
	{
		if (arrayCase4ArI[arrayCase4L] % 2 == 1)
		{
			arrayCase4Odd++;
			cout << arrayCase4ArI[arrayCase4L] << " ";
		}
	}

	cout << endl << "There are " << arrayCase4Odd << " Odd numbers." << endl;

	//getch();
	return 0;
}

int array1()
{
	clrscr();
	cout << "Enter 5 numbers:" << endl;
	for (int a = 0; a < arraySize; a++)
	{
		cin >> arrayGlobal[a];
	}
	cout << "Numbers inputted successfully" << endl;
	system("read");
	return 0;
}

int array2()
{
	clrscr();
	cout << "The elements are:" << endl;
	for (int b = 0; b < arraySize; b++)
	{
		cout << arrayGlobal[b] << " ";
	}
	cout << endl;

	cout << "Press any key to continue" << endl;
	system("read");
	return 0;
}

int array3(int search)
{
	int position;
	string ordinal;
	bool trigger;

	for (int c = 0; c < arraySize; c++)
	{
		if (arrayGlobal[c] == search)
		{
			trigger = true;
			position = c;
			break;
		}
	}
	if (trigger == true)
		cout << "Element is at index " << position << endl;
	else
		cout << "Element not found" << endl;
	return 0;
}

int array4(char sortC)
{
	if (sortC == 'A')
		sort(arrayGlobal, arrayGlobal + 5);
	else
		sort(arrayGlobal, arrayGlobal + 5, greater<int>());

	cout << "The elements have been sorted" << endl;
	system("read");
	return 0;
}

int array5(int del)
{
	int total = 5;

	for (int e = 0; e < total; e++)
	{
		if (arrayGlobal[e] == del)
		{
			arrayGlobal[e] = 0;
		}
	}
	cout << "Element deleted" << endl;
	system("read");
	return 0;
}

int array6(int indexU, int replace)
{
	arrayGlobal[indexU] = replace;

	cout << "Array updated" << endl;
	system("read");
	return 0;
}

int array7()
{
	int largeE = arrayGlobal[0];
	for (int g = 1; g < arraySize; g++)
	{
		if (largeE < arrayGlobal[g])
			largeE = arrayGlobal[g];
	}
	return largeE;
}

int array8()
{
	int smallE = arrayGlobal[0];
	for (int h = 0; h < arraySize; h++)
	{
		if (smallE > arrayGlobal[h])
			smallE = arrayGlobal[h];
	}
	return smallE;
}

int array9()
{
	cout << "The even numbers in the array: ";
	for (int i = 0; i < arraySize; i++)
	{
		if (arrayGlobal[i] % 2 == 0)
		{
			cout << arrayGlobal[i] << " ";
		}
	}
	cout << endl;
	system("read");
	return 0;
}

int array10()
{
	clrscr();
	cout << "The odd numbers in the array: ";
	for (int j = 0; j < arraySize; j++)
	{
		if (arrayGlobal[j] % 2 == 1)
		{
			cout << arrayGlobal[j] << " ";
		}
	}
	cout << endl;
	system("read");
	return 0;
}

int array11()
{
	int sumA = 0;
	for (int k = 0; k < arraySize; k++)
	{
		sumA = sumA + arrayGlobal[k];
	}
	return sumA;
}

int array12()
{
	int smallE = arrayGlobal[0], smallI = 0;
	for (int l = 0; l < arraySize; l++)
	{
		if (smallE > arrayGlobal[l])
		{
			smallE = arrayGlobal[l];
			smallI = l;
		}
	}
	return smallI;
}

int array13()
{
	int largeE = arrayGlobal[0], largeI = 0;
	for (int m = 1; m < arraySize; m++)
	{
		if (largeE < arrayGlobal[m])
		{
			largeE = arrayGlobal[m];
			largeI = m;
		}
	}
	return largeI;
}

int array14()
{
	int arrayGlobalCopy[5], sumS = 0;
	copy(arrayGlobal, arrayGlobal + 5, arrayGlobalCopy);
	for (int n = 0; n < arraySize; n++)
	{
		arrayGlobalCopy[n] = pow(arrayGlobalCopy[n], 2);
		sumS = sumS + arrayGlobalCopy[n];
	}
	return sumS;
}

int array15()
{
	clrscr();
	int arrGloCopy[5];
	for (int o = 0; o < arraySize; o++)
	{
		arrGloCopy[o] = arrayGlobal[o];
	}
	cout << "Array copied" << endl;

	for (int b = 0; b < arraySize; b++)
	{
		cout << arrGloCopy[b] << " ";
	}
	cout << endl;
	system("read");
	return 0;
}

int array16(int search)
{
	int position = 1;
	string ordinal;
	bool trigger = false;
	int test = 2;
	sort(arrayGlobal, arrayGlobal + 5); //array sort first
	for (int c = 0; c < arraySize; c++)
	{
		if (arrayGlobal[c] == search)
		{
			trigger = true;
			position = c;
			break;
		}
	}
	if (trigger == true)
		cout << "Element is at index " << position << endl;
	else
		cout << "Element not found" << endl;
}

int array17(int middle)
{
	int i, key, j;
	for (i = 1; i < middle; i++)
	{
		key = arrayGlobal[i];
		j = i - 1;

		while (j >= 0 && arrayGlobal[j] > key)
		{
			arrayGlobal[j + 1] = arrayGlobal[j];
			j = j - 1;
		}
		arrayGlobal[j + 1] = key;
	}

	cout << "Elements have been sorted" << endl;

	for (int b = 0; b < arraySize; b++)
	{
		cout << arrayGlobal[b] << " ";
	}
	cout << endl;
	return 0;
}
