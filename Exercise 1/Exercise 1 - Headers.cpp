#include <iostream>
#include "finalsv2header.h"
using namespace std;

int sequenceMainMenu()
{
	char sequenceMainMenuChoice;//=1;
	while (sequenceMainMenuChoice != 'K')
	{
		//clrscr();
		//gotoxy(27,1);
		cout << "======= Sequence Menu =======" << endl;
		//gotoxy(1,3);
		cout << "A. Hello World" << endl;
		//gotoxy(1,4);
		cout << "B. Sum, Difference, Product" << endl;
		//gotoxy(1,5);
		cout << "C. Quadratic Equation" << endl;
		//gotoxy(1,6);
		cout << "D. Area & Perimeter" << endl;
		//gotoxy(1,7);
		cout << "E. Number Swap" << endl;
		//gotoxy(1,8);
		cout << "F. Average Grade of Prelims, Midterm and Finals" << endl;
		//gotoxy(1,9);
		cout << "G. Area & Circumference" << endl;
		//gotoxy(1,10);
		cout << "H. Celsius to Farenheit" << endl;
		//gotoxy(1,11);
		cout << "I. Grosspay with Deduction" << endl;
		//gotoxy(1,12);
		cout << "J. Square and Cube of a Number" << endl;
		//gotoxy(1,13);
		cout << "K. Exit" << endl;

		cout << endl << "Selection: ";
		cin >> sequenceMainMenuChoice;

		switch(sequenceMainMenuChoice)
		{
		case 'A':
		{
			sequenceMainMenuCase1();
		}
		break;

		case 'B':
		{
			sequenceMainMenuCase2();
		}
		break;

		case 'C':
		{
			sequenceMainMenuCase3();
		}
		break;

		case 'D':
		{
			sequenceMainMenuCase4();
		}
		break;

		case 'E':
		{
			sequenceMainMenuCase5();
		}
		break;

		case 'F':
		{
			sequenceMainMenuCase6();
		}
		break;

		case 'G':
		{
			sequenceMainMenuCase7();
		}
		break;

		case 'H':
		{
			sequenceMainMenuCase8();
		}
		break;

		case 'I':
		{
			sequenceMainMenuCase9();
		}
		break;

		case 'J':
		{
			sequenceMainMenuCase10();
		}
		break;

		default:
			cout << "Returning..." << endl;
		}
	}
	return 0;
}

int ifStatementMainMenu()
{
	char ifStatementMainMenuChoice;//=1;
	while (ifStatementMainMenuChoice != 'H')
	{
		//clrscr();
		cout << endl << "======= Menu =======" << endl;
		cout << "A. Average is Passed or Failed" << endl;
		cout << "B. Odd or Even" << endl;
		cout << "C. Positive or Negative" << endl;
		cout << "D. Commission" << endl;
		cout << "E. Biggest Number Between Two Numbers" << endl;
		cout << "F. Biggest Number Among Three Numbers" << endl;
		cout << "G. Positive, Negative or Zero" << endl;
		cout << "H. Exit" << endl;

		cout << endl << "Selection: ";
		cin >> ifStatementMainMenuChoice;

		switch(ifStatementMainMenuChoice)
		{
		case 'A':
		{
			ifStatementMainMenuCase1();
		}
		break;

		case 'B':
		{
			ifStatementMainMenuCase2();
		}
		break;

		case 'C':
		{
			ifStatementMainMenuCase3();
		}
		break;

		case 'D':
		{
			ifStatementMainMenuCase4();
		}
		break;

		case 'E':
		{
			ifStatementMainMenuCase5();
		}
		break;

		case 'F':
		{
			ifStatementMainMenuCase6();
		}
		break;

		case 'G':
		{
			ifStatementMainMenuCase7();
		}
		break;

		default:
			cout << "Returning..." << endl;
		}
	}
	return 0;
}

int loopsMainMenu()
{
	choice = 1;
	while (choice < 9)
	{
		//clrscr();
		cout << endl << "======= Menu =======" << endl;
		cout << "1. Print Name 5 Times" << endl;
		cout << "2. Print All Whole Number From 1-10" << endl;
		cout << "3. Print All Whole Numbers Between Input & 0" << endl;
		cout << "4. Factorial of Inputted Number" << endl;
		cout << "5. Print All Even Numbers From 1-10" << endl;
		cout << "6. Print All Positive Numbers Given 5 Inputs" << endl;
		cout << "7. 1 Star to 5 Stars" << endl;
		cout << "8. Five 5s To One 1s" << endl;
		cout << "9. Exit" << endl;

		cout << endl << "Selection: ";
		cin >> choice;

		switch(choice)
		{
		case 1:
		{
			loopsMainMenuCase1();
		}
		break;

		case 2:
		{
			loopsMainMenuCase2();
		}
		break;

		case 3:
		{
			loopsMainMenuCase3();
		}
		break;

		case 4:
		{
			loopsMainMenuCase4();
		}
		break;

		case 5:
		{
			loopsMainMenuCase5();
		}
		break;

		case 6:
		{
			loopsMainMenuCase6();
		}
		break;

		case 7:
		{
			loopsMainMenuCase7();
		}
		break;

		case 8:
		{
			loopsMainMenuCase8();
		}
		break;

		default:
			cout << "Returning..." << endl;
		}
	}
}

int arrayMainMenu()
{
	//clrscr();
	char arrayMainMenuChoice;
	while (arrayMainMenuChoice != 'E')//(arrayMainMenuChoice == 'A' || 'B' || 'C' || 'D')
	{
		//clrscr();
		//gotoxy(29,1);
		cout << "======= Array Menu =======" << endl;
		//gotoxy(1,3);
		cout << "A. Sum of all negative numbers in the array" << endl;
		//gotoxy(1,4);
		cout << "B. Display all prime numbers in the array" << endl;
		//gotoxy(1,5);
		cout << "C. Count and display the number of vowels in the array" << endl;
		//gotoxy(1,6);
		cout << "D. Count and display the number of odd and even numbers in the array." << endl;
		//gotoxy(1,7);
		cout << "E. Exit" << endl;

		cout << "Enter your choice: ";
		cin >> arrayMainMenuChoice;

		switch(arrayMainMenuChoice)
		{
		case 'A':
		{
			arrayMainMenuCase1();
		}
		break;

		case 'B':
		{
			arrayMainMenuCase2();
		}
		break;

		case 'C':
		{
			arrayMainMenuCase3();
		}
		break;

		case 'D':
		{
			arrayMainMenuCase4();
		}
		break;

		default:
		{
			cout << "Returning..." << endl;
			//exit(0);
		}
		}

	}
	return 0;
}


//Main Menu

int mainMenu()
{
	char mainMenuChoice;
	while(mainMenuChoice != 'E')  //== 'A' || 'B' || 'C' || 'D' || 'E')
	{
		//clrscr();
		//gotoxy(33,1);
		cout << "Welcome user!" << endl << endl;
		//gotoxy(20,3);
		cout << "What Main Menu would you like to access?" << endl;

		//gotoxy(1,5);
		cout << "A. Sequence Main Menu" << endl;
		//gotoxy(1,6);
		cout << "B. If-Statements Main Menu" << endl;
		//gotoxy(1,7);
		cout << "C. Loops Main Menu" << endl;
		//gotoxy(1,8);
		cout << "D. Array Main Menu" << endl;
		//gotoxy(1,9);
		cout << "E. Exit" << endl;
		//gotoxy(1,11);
		cout << "Choice: ";
		cin >> mainMenuChoice;

		switch(mainMenuChoice)
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
			arrayMainMenu();
			break;
		default:
			cout << "Returning..." << endl;
		}
	}
}


int main()
{
	login();
	//clrscr();
	mainMenu();
	return 0;
}
