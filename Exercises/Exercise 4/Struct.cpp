#include "Struct.h"

void structMM()
{
	char structMMChoice;
	while (structMMChoice != 'F')
	{
		clrscr();		
		cout << "======= Struct Menu =======" << endl << endl;
		cout << "A. Input Student Info" << endl;
		cout << "B. Display Student Info" << endl;
		cout << "C. Input Scores" << endl;
		cout << "D. Search Students" << endl;
		cout << "E. Sort Records Ascending" << endl;
		cout << "F. Exit" << endl;

		cout << endl << "Selection: ";
		cin >> structMMChoice;

		switch(structMMChoice)
		{
			case 'A':
			{
				clrscr();
				structMMC1();
				getch();
			}
			break;

			case 'B':
			{
				clrscr();
				if(passed == false)
					structMMC2();
				else
					structMMC2modified();
				getch();
			}
			break;

			case 'C':
			{
				clrscr();
				structMMC3();
				getch();
			}				
			break;

			case 'D':
			{
				clrscr();
				string search;	
				cout << "What Last Name to search? " << endl;
				cin >> search;
				structMMC4(search);
				getch();
			}
			break;

			case 'E':
			{
				clrscr();
				structMMC5();
				getch();
			}				
			break;			

			default:
				cout << "Returning..." << endl;
		}
	}	
}

int main()
{
	structMM();
}