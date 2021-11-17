#include <Windows.h>
#include "Main Menu.h"
using namespace std;

void sequenceMainMenu()
{
	char choice = 'A';
	while (choice != 'K')
	{
		clrscr();
		borderSequence();
		gotoxy(5, 5);
		cout << "What Module do you want to access?" << endl; // test kung naguupdate? wow naguupdate
		cout << "\tA - Hello World" << endl;
		cout << "\tB - Sum, Difference, Product, Quotient" << endl; //exception divide by zero
		cout << "\tC - Quadratic Equation" << endl;
		cout << "\tD - Area & Perimeter" << endl;
		cout << "\tE - Number Swap" << endl;
		cout << "\tF - Average Grade" << endl;
		cout << "\tG - Area & Circumference" << endl;
		cout << "\tH - Celsius to Farenheit" << endl;
		cout << "\tI - Grosspay with Deduction" << endl;
		cout << "\tJ - Square and Cube of a Number" << endl; //exception negative number
		cout << "\tK - Exit" << endl;

		gotoxy(5, 24);
		cout << "Choice: ";
		gotoxy(5, 26);
		cin >> choice;
		choice = toupper(choice);

		switch (choice)
		{
		case 'A':
			sequenceMainMenuCase1();
			break;

		case 'B':
			sequenceMainMenuCase2();
			break;

		case 'C':
			sequenceMainMenuCase3();
			break;

		case 'D':
			sequenceMainMenuCase4();
			break;

		case 'E':
			sequenceMainMenuCase5();
			break;

		case 'F':
			sequenceMainMenuCase6();
			break;

		case 'G':
			sequenceMainMenuCase7();
			break;

		case 'H':
			sequenceMainMenuCase8();
			break;

		case 'I':
			sequenceMainMenuCase9();
			break;

		case 'J':
			sequenceMainMenuCase10();
			break;

		default:
			gotoxy(43, 24);
			cout << "Returning..." << endl;
			gotoxy(5, 26);
			Sleep(1200);
		}
	}
}

void ifStatementMainMenu()
{
	char choice = 'A';
	while (choice != 'H')
	{
		clrscr();
		borderIf();
		gotoxy(5, 5);
		cout << "What Module do you want to access?" << endl;
		cout << "\tA - Passed or Failed" << endl;
		cout << "\tB - Odd or Even" << endl;
		cout << "\tC - Positive or Negative" << endl;
		cout << "\tD - Commission" << endl;
		cout << "\tE - Biggest Number Among Two Numbers" << endl;
		cout << "\tF - Biggest Number Among Three Numbers" << endl;
		cout << "\tG - Positive, Negative or Zero" << endl;
		cout << "\tH - Exit" << endl;

		gotoxy(5, 24);
		cout << "Choice: ";
		gotoxy(5, 26);
		cin >> choice;
		choice = toupper(choice);

		switch (choice)
		{
		case 'A':
			ifStatementMainMenuCase1();
			break;

		case 'B':
			ifStatementMainMenuCase2();
			break;

		case 'C':
			ifStatementMainMenuCase3();
			break;

		case 'D':
			ifStatementMainMenuCase4();
			break;

		case 'E':
			ifStatementMainMenuCase5();
			break;

		case 'F':
			ifStatementMainMenuCase6();
			break;

		case 'G':
			ifStatementMainMenuCase7();
			break;

		default:
			gotoxy(43, 24);
			cout << "Returning..." << endl;
			gotoxy(5, 26);
			Sleep(1200);
		}
	}
}

void loopsMainMenu()
{
	char loopsMMChoice = 'A';
	while (loopsMMChoice != 'I')
	{
		clrscr();
		borderLoops();
		gotoxy(5, 5);
		cout << "What Module do you want to access?" << endl;
		cout << "\tA - Name 5 Times" << endl;
		cout << "\tB - All Numbers From 1-10" << endl;
		cout << "\tC - All Numbers Between Input & 0" << endl; //exception negative number
		cout << "\tD - Factorial of Inputted Number" << endl; //exception negative number
		cout << "\tE - All Even Numbers From 1-10" << endl;
		cout << "\tF - All Positive Numbers From Input" << endl;
		cout << "\tG - 1 Star to 5 Stars" << endl;
		cout << "\tH - Five 5s To One 1s" << endl;
		cout << "\tI - Exit" << endl;

		gotoxy(5, 24);
		cout << "Choice: ";
		gotoxy(5, 26);
		cin >> loopsMMChoice;
		loopsMMChoice = toupper(loopsMMChoice);

		switch (loopsMMChoice)
		{
		case 'A':
			loopsMainMenuCase1();
			break;

		case 'B':
			loopsMainMenuCase2();
			break;

		case 'C':
			loopsMainMenuCase3();
			break;

		case 'D':
			loopsMainMenuCase4();
			break;

		case 'E':
			loopsMainMenuCase5();
			break;

		case 'F':
			loopsMainMenuCase6();
			break;

		case 'G':
			loopsMainMenuCase7();
			break;

		case 'H':
			loopsMainMenuCase8();
			break;

		default:
			gotoxy(43, 24);
			cout << "Returning..." << endl;
			gotoxy(5, 26);
			Sleep(1200);
		}
	}
}

void Array1DMainMenu()
{
	char Array1DMMChoice = 'A';
	while (Array1DMMChoice != 'R')
	{
		clrscr();
		border1DArray();
		gotoxy(5, 5);
		cout << "What Module do you want to access?" << endl;
		cout << "\tA - Input Elements" << endl;
		cout << "\tB - Display Elements" << endl;
		cout << "\tC - Search Element" << endl;
		cout << "\tD - Sort Elements" << endl;
		cout << "\tE - Delete Element" << endl;
		cout << "\tF - Update Element" << endl;
		cout << "\tG - Largest Element in the Array" << endl;
		cout << "\tH - Smallest Element in the Array" << endl;
		cout << "\tI - Even Numbers in the array" << endl;
		cout << "\tJ - Odd numbers in the array" << endl;
		cout << "\tK - Sum of All Elements" << endl;
		cout << "\tL - Index of Smallest Element" << endl;
		cout << "\tM - Index of Largest Element" << endl;
		cout << "\tN - Sum of All Squares" << endl;
		cout << "\tO - Copy Array to Another Array" << endl;
		cout << "\tP - Search Element Using Binary Search" << endl;
		cout << "\tQ - Sort Array Using Insertion Sort" << endl;
		cout << "\tR - Exit" << endl << endl;

		gotoxy(5, 24);
		cout << "Choice: ";
		gotoxy(5, 26);
		cin >> Array1DMMChoice;
		Array1DMMChoice = toupper(Array1DMMChoice);

		switch (Array1DMMChoice)
		{
		case 'A':
			clrscr();
			border1DArray();
			Array1DMMC1();
			break;

		case 'B':
			clrscr();
			border1DArray();
			Array1DMMC2();
			break;

		case 'C':
			clrscr();
			border1DArray();
			int search;
			gotoxy(19, 9);
			cout << "What element to search?" << endl;
			gotoxy(5, 24);
			cout << "Element: ";
			gotoxy(5, 26);
			cin >> search;
			Array1DMMC3(search);
			_getch();
			break;

		case 'D':
			clrscr();
			char sortC;
			border1DArray();
			gotoxy(18, 9);
			cout << "Ascending or Descending?" << endl;
			gotoxy(5, 24);
			cout << "[A] / [D]:";
			gotoxy(5, 26);
			cin >> sortC;
			Array1DMMC4(sortC);
			break;

		case 'E':
			clrscr();
			int del;
			border1DArray();
			gotoxy(19, 9);
			cout << "What element to delete?" << endl;
			gotoxy(5, 24);
			cout << "Element: ";
			gotoxy(5, 26);
			cin >> del;
			Array1DMMC5(del);
			break;

		case 'F':
			clrscr();
			int indexU, replace;
			border1DArray();
			gotoxy(12, 9);
			cout << "At what index do you want to update?" << endl;
			gotoxy(5, 24);
			cout << "Index: ";
			gotoxy(5, 26);
			cin >> indexU;
			gotoxy(5, 24);
			cout << "Replace into:" << endl;
			clearinputbox();
			cin >> replace;
			Array1DMMC6(indexU, replace);
			break;

		case 'G':
			clrscr();
			border1DArray();
			gotoxy(18, 12);
			cout << "The largest element is " << Array1DMMC7() << endl;
			clearinputbox();
			_getch();
			break;

		case 'H':
			clrscr();
			border1DArray();
			gotoxy(18, 12);
			cout << "The smallest element is " << Array1DMMC8() << endl;
			clearinputbox();
			_getch();
			break;

		case 'I':
			clrscr();
			border1DArray();
			Array1DMMC9();
			break;

		case 'J':
			clrscr();
			border1DArray();
			Array1DMMC10();
			break;

		case 'K':
			clrscr();
			border1DArray();
			gotoxy(16, 12);
			cout << "The sum of all elements is " << Array1DMMC11() << endl;
			clearinputbox();
			_getch();
			break;

		case 'L':
			clrscr();
			border1DArray();
			gotoxy(11, 12);
			cout << "The index of the smallest element is " << Array1DMMC12() << endl;
			clearinputbox();
			_getch();
			break;

		case 'M':
			clrscr();
			border1DArray();
			gotoxy(12, 12);
			cout << "The index of the largest element is " << Array1DMMC13() << endl;
			clearinputbox();
			_getch();
			break;

		case 'N':
			clrscr();
			border1DArray();
			gotoxy(8, 12);
			cout << "The sum of all squares in the array is " << Array1DMMC14() << endl;
			clearinputbox();
			_getch();
			break;

		case 'O':
			clrscr();
			border1DArray();
			Array1DMMC15();
			break;

		case 'P':
		{
			clrscr();
			border1DArray();
			int search;
			gotoxy(19, 9);
			cout << "What element to search?" << endl;
			gotoxy(5, 24);
			cout << "Element: ";
			gotoxy(5, 26);
			cin >> search;
			Array1DMMC16(search);
			_getch();
			break;
		}

		case 'Q':
			clrscr();
			border1DArray();
			int middle;
			middle = sizeof(array1DGlobal) / sizeof(array1DGlobal[0]);
			Array1DMMC17(middle);
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

void Array2DMainMenu()
{
	char Array2DMMChoice = 'A';
	while (Array2DMMChoice != 'R')
	{
		clrscr();
		border2DArray();
		gotoxy(5, 5);
		cout << "What Module do you want to access?" << endl;
		cout << "\tA - Input Elements" << endl;
		cout << "\tB - Display Elements" << endl;
		cout << "\tC - Search Element" << endl;
		cout << "\tD - Sort Elements" << endl;
		cout << "\tE - Delete Element" << endl;
		cout << "\tF - Update Element" << endl;
		cout << "\tG - Largest Element in the Array" << endl;
		cout << "\tH - Smallest Element in the Array" << endl;
		cout << "\tI - Even Numbers in the array" << endl;
		cout << "\tJ - Odd numbers in the array" << endl;
		cout << "\tK - Sum of All Elements" << endl;
		cout << "\tL - Index of Smallest Element" << endl;
		cout << "\tM - Index of Largest Element" << endl;
		cout << "\tN - Sum of All Squares" << endl;
		cout << "\tO - Copy Array to Another Array" << endl;
		cout << "\tP - Search Element Using Binary Search" << endl;
		cout << "\tQ - Sort Array Using Insertion Sort" << endl; //wala pa
		cout << "\tR - Exit" << endl << endl;

		gotoxy(5, 24);
		cout << "Choice: ";
		gotoxy(5, 26);
		cin >> Array2DMMChoice;
		Array2DMMChoice = toupper(Array2DMMChoice);

		switch (Array2DMMChoice)
		{
		case 'A':
		{
			clrscr();
			border2DArray();
			Array2DMMC1();
			break;
		}

		case 'B':
		{
			clrscr();
			border2DArray();
			Array2DMMC2();
			break;
		}

		case 'C':
		{
			clrscr();
			border2DArray();
			int search;
			gotoxy(19, 9);
			cout << "What element to search?" << endl;
			gotoxy(5, 24);
			cout << "Element: ";
			gotoxy(5, 26);
			cin >> search;
			Array2DMMC3(search);
			_getch();
			break;
		}

		case 'D':
		{
			clrscr();
			char sortC;
			border2DArray();
			gotoxy(18, 9);
			cout << "Ascending or Descending?" << endl;
			gotoxy(5, 24);
			cout << "[A] / [D]:";
			gotoxy(5, 26);
			cin >> sortC;
			Array2DMMC4(sortC);
			break;
		}

		case 'E':
		{
			clrscr();
			int del;
			border2DArray();
			gotoxy(19, 9);
			cout << "What element to delete?" << endl;
			gotoxy(5, 24);
			cout << "Element: ";
			gotoxy(5, 26);
			cin >> del;
			Array2DMMC5(del);
			break;
		}

		case 'F':
		{
			clrscr();
			int indexC, indexR, replace;
			border2DArray();
			gotoxy(12, 9);
			cout << "At what index do you want to update?" << endl;
			gotoxy(5, 24);
			cout << "Row: ";
			gotoxy(5, 26);
			cin >> indexR;
			gotoxy(5, 24);
			cout << "Column: ";
			clearinputbox();
			cin >> indexC;
			gotoxy(5, 24);
			cout << "Replace into:" << endl;
			clearinputbox();
			cin >> replace;
			Array2DMMC6(indexC, indexR, replace);
			break;
		}

		case 'G':
		{
			clrscr();
			border2DArray();
			gotoxy(18, 12);
			cout << "The largest element is " << Array2DMMC7() << endl;
			clearinputbox();
			_getch();
			break;
		}

		case 'H':
		{
			clrscr();
			border2DArray();
			gotoxy(18, 12);
			cout << "The smallest element is " << Array2DMMC8() << endl;
			clearinputbox();
			_getch();
			break;
		}

		case 'I':
		{
			clrscr();
			border2DArray();
			Array2DMMC9();
			break;
		}

		case 'J':
		{
			clrscr();
			border2DArray();
			Array2DMMC10();
			break;
		}

		case 'K':
		{
			clrscr();
			border2DArray();
			gotoxy(16, 12);
			cout << "The sum of all elements is " << Array2DMMC11() << endl;
			clearinputbox();
			_getch();
			break;
		}

		case 'L':
			clrscr();
			border2DArray();
			gotoxy(11, 12);
			Array2DMMC12();
			clearinputbox();
			_getch();
			break;

		case 'M':
		{
			clrscr();
			border2DArray();
			Array2DMMC13();
			_getch();
			break;
		}

		case 'N':
		{
			clrscr();
			border2DArray();
			gotoxy(8, 12);
			cout << "The sum of all squares in the array is " << Array2DMMC14() << endl;
			clearinputbox();
			_getch();
			break;
		}

		case 'O':
		{
			clrscr();
			border2DArray();
			Array2DMMC15();
			break;
		}

		case 'P':
		{
			clrscr();
			border2DArray();
			int search;
			gotoxy(19, 9);
			cout << "What element to search?" << endl;
			gotoxy(5, 24);
			cout << "Element: ";
			gotoxy(5, 26);
			cin >> search;
			Array2DMMC16(search);
			_getch();
			break;
		}

		case 'Q':
		{
			clrscr();
			border2DArray();
			Array2DMMC17();
			_getch();
			break;
		}

		default:
			gotoxy(43, 24);
			cout << "Returning..." << endl;
			gotoxy(5, 26);
			Sleep(1200);
		}
	}
}

void recursionMM()
{
	char choice = 'A';
	while (choice != 'I')
	{
		clrscr();
		borderRecursion();
		gotoxy(5, 5);
		cout << "What Module do you want to access?" << endl;
		cout << "\tA - Factorial of Number" << endl; //exception negative number
		cout << "\tB - Sum from X to Y" << endl; //exception 2nd num must be higher than 1st
		cout << "\tC - Sum of Even Numbers from 0-10" << endl;
		cout << "\tD - Copy String" << endl;
		cout << "\tE - Sum of Natural Numbers" << endl;
		cout << "\tF - Count Consonant" << endl;
		cout << "\tG - Count Letter of String " << endl;
		cout << "\tH - Product of Two Numbers" << endl;
		cout << "\tI - Exit" << endl;

		gotoxy(5, 24);
		cout << "Choice: ";
		gotoxy(5, 26);
		cin >> choice;
		choice = toupper(choice);

		switch (choice)
		{
		case 'A':
			clrscr();
			borderRecursion();
			int posInt;
			gotoxy(18, 9);
			cout << "Enter a positive number: " << endl;
			gotoxy(5, 24);
			cout << "Number: ";
			gotoxy(5, 26);
			cin >> posInt;
			clearaboveinput();
			try
			{
				if (posInt < 0)
					throw 102;
				else
				{
					gotoxy(21, 12);
					cout << "Factorial of " << posInt << " = " << recursionMMC1(posInt);
					clearinputbox();
				}
			}
			catch (...)
			{
				gotoxy(14, 28);
				cout << "Exception occured: Negative Number";
				clearinputbox();
			}
			_getch();
			break;

		case 'B':
			clrscr();
			borderRecursion();
			int num1, num2;
			gotoxy(22, 9);
			cout << "Enter two numbers:" << endl;
			gotoxy(5, 24);
			cout << "Separate with space:" << endl;
			gotoxy(5, 26);
			cin >> num1 >> num2;
			try
			{
				if (num1 > num2)
					throw 102;
				else
				{
					gotoxy(13, 12);
					cout << "Sum of numbers between " << num1 << " and " << num2 << " is: " << recursionMMC2(num1, num2) << endl;
				}
			}
			catch (...)
			{
				gotoxy(6, 28);
				cout << "Exception occured : First Number Should Be Lower";
				clearinputbox();
			}

			clearaboveinput();
			clearinputbox();
			_getch();
			break;

		case 'C':
		{
			clrscr();
			borderRecursion();
			int n1A = 2;
			int n2B = 10;
			gotoxy(13, 12);
			cout << "Sum of Even numbers between 1-10 is: " << recursionMMC3(n1A, n2B) << endl;
			clearinputbox();
			_getch();
		}
		break;

		case 'D':
		{
			clrscr();
			borderRecursion();
			char s1[100];
			char s2[100] = "";
			gotoxy(25, 9);
			cout << "Enter text: " << endl;
			gotoxy(5, 24);
			cout << "Text:" << endl;
			gotoxy(5, 26);
			cin >> s1;
			recursionMMC4(s1, s2);
			clearaboveinput();
			gotoxy(17, 12);
			cout << "Text copied to [s2]: " << s2 << endl;
			clearinputbox();
			_getch();
		}
		break;

		case 'E':
		{
			clrscr();
			borderRecursion();
			int n;
			gotoxy(23, 9);
			cout << "Input a number:" << endl;
			gotoxy(5, 24);
			cout << "Number: ";
			gotoxy(5, 26);
			cin >> n;
			clearaboveinput();
			gotoxy(21, 12);
			cout << "Sum of 0 to " << n << " is " << recursionMMC5(n) << endl;
			clearinputbox();
			_getch();
		}
		break;

		case 'F':
		{
			clrscr();
			borderRecursion();
			string str;
			gotoxy(25, 9);
			cout << "Enter text: ";
			gotoxy(5, 24);
			cout << "Text:" << endl;
			gotoxy(5, 26);
			cin >> str;
			clearaboveinput();
			gotoxy(21, 12);
			cout << "Consonant count: " << recursionMMC6(str, str.length()) << endl;
			clearinputbox();
			_getch();
		}
		break;

		case 'G':
		{
			clrscr();
			borderRecursion();
			char str[20];
			gotoxy(25, 9);
			cout << "Enter text: ";
			gotoxy(5, 24);
			cout << "Text:" << endl;
			gotoxy(5, 26);
			cin >> str;
			clearaboveinput();
			gotoxy(22, 12);
			cout << "It has " << recursionMMC7(str) << " letters" << endl;
			clearinputbox();
			_getch();
		}
		break;

		case 'H':
		{
			clrscr();
			borderRecursion();
			int x, y;
			gotoxy(22, 9);
			cout << "Enter two numbers:" << endl;
			gotoxy(5, 24);
			cout << "Separate with space:" << endl;
			gotoxy(5, 26);
			cin >> x >> y;
			clearaboveinput();
			gotoxy(22, 12);
			cout << "The product is: " << recursionMMC8(x, y) << endl;
			clearinputbox();
			_getch();
		}
		break;

		default:
			gotoxy(43, 24);
			cout << "Returning..." << endl;
			gotoxy(5, 26);
			Sleep(1200);
		}
	}
}

void structMM()
{
	char structMMChoice = 'A';
	while (structMMChoice != 'F')
	{
		clrscr();
		borderStruct();
		gotoxy(5, 5);
		cout << "What Module do you want to access?" << endl;
		cout << "\tA - Input Student Info" << endl;
		cout << "\tB - Display Student Info" << endl;
		cout << "\tC - Input Scores" << endl;
		cout << "\tD - Search Students" << endl;
		cout << "\tE - Sort Records Ascending" << endl;
		cout << "\tF - Exit" << endl;

		gotoxy(5, 24);
		cout << "Choice: ";
		gotoxy(5, 26);
		cin >> structMMChoice;
		structMMChoice = toupper(structMMChoice);

		switch (structMMChoice)
		{
		case 'A':
		{
			clrscr();
			borderStruct();
			structMMC1();
			_getch();
		}
		break;

		case 'B':
		{
			clrscr();
			borderStruct();
			if (passed == false)
				structMMC2();
			else
				structMMC2modified();
			_getch();
		}
		break;

		case 'C':
		{
			clrscr();
			borderStruct();
			structMMC3();
			_getch();
		}
		break;

		case 'D':
		{
			clrscr();
			borderStruct();
			string search;
			gotoxy(17, 9);
			cout << "What Last Name to search? " << endl;
			gotoxy(5, 24);
			cout << "Last Name:" << endl;
			gotoxy(5, 26);
			cin >> search;
			structMMC4(search);
			_getch();
		}
		break;

		case 'E':
		{
			clrscr();
			borderStruct();
			structMMC5();
			_getch();
		}
		break;

		default:
			gotoxy(43, 24);
			cout << "Returning..." << endl;
			gotoxy(5, 26);
			Sleep(1200);
		}
	}
}

void FileMM()
{
	char choice = 'A';
	while (choice != 'D')
	{
		clrscr();
		clrscr();
		borderFile();
		gotoxy(5, 5);
		cout << "What Module do you want to access?" << endl;
		cout << "\tA - Writing To Files" << endl;
		cout << "\tB - Reading From Files" << endl;
		cout << "\tC - Lines, Words, Letter Counter" << endl;
		cout << "\tD - Exit" << endl;

		gotoxy(5, 24);
		cout << "Choice: ";
		gotoxy(5, 26);
		cin >> choice;
		choice = toupper(choice);

		switch (choice)
		{
		case 'A':
		{
			clrscr();
			borderFile();
			FileMMC1();
			clearinputbox();
			_getch();
		}
		break;

		case 'B':
		{
			clrscr();
			borderFile();
			FileMMC2();
			clearinputbox();
			_getch();
		}
		break;

		case 'C':
		{
			clrscr();
			borderFile();
			FileMMC3();
			clearinputbox();
			_getch();
		}
		break;

		default:
			gotoxy(43, 24);
			cout << "Returning..." << endl;
			gotoxy(5, 26);
			Sleep(1200);
		}
	}
}

//Main Menu
void mainMenu()
{
	char mainMenuChoice = 'A';
	while (mainMenuChoice != 'I')
	{
		clrscr();
		borderMainMenu();
		gotoxy(41, 24);
		cout << "Welcome Admin!" << endl << endl;
		gotoxy(5, 5);
		cout << "What Main Menu would you like to access?" << endl;
		cout << "\tA - Sequence Main Menu" << endl; //done
		cout << "\tB - If-Statements Main Menu" << endl; //done
		cout << "\tC - Loops Main Menu" << endl; //done
		cout << "\tD - 1D Array Main Menu" << endl; //done
		cout << "\tE - 2D Array Main Menu" << endl; //done
		cout << "\tF - Recursion Main Menu" << endl; //done
		cout << "\tG - Struct Main Menu" << endl; //sort broken
		cout << "\tH - File Handling Menu" << endl; //done
		cout << "\tI - Exit" << endl;
		gotoxy(5, 24);
		cout << "Choice: ";
		gotoxy(5, 26);
		cin >> mainMenuChoice;
		mainMenuChoice = toupper(mainMenuChoice);

		switch (mainMenuChoice)
		{
		case 'A':
			sequenceMainMenu();
			break;

		case 'B':
			ifStatementMainMenu();
			break;

		case 'C':
			loopsMainMenu();
			break;

		case 'D':
			Array1DMainMenu();
			break;

		case 'E':
			Array2DMainMenu();
			break;

		case 'F':
			recursionMM();
			break;

		case 'G':
			structMM();
			break;

		case 'H':
			FileMM();
			break;

		default:
			gotoxy(46, 24);
			cout << "Exting..." << endl;
			gotoxy(5, 26);
			Sleep(1200);
		}
	}
}

int main()
{
	login();
	mainMenu();
}