#include "1D Array.h"

int mainmenu()
{		
	int choice=1;
	while(choice<15)
	{
		clrscr();
		cout << "========= Array Menu =========" << endl << endl;
		cout << "1 - Input elements of the array" << endl;
		cout << "2 - Display the elements of the array" << endl;
		cout << "3 - Search elements of the array" << endl;
		cout << "4 - Sort the elements of the array" << endl;
		cout << "5 - Delete element from the array" << endl;
		cout << "6 - Update/Edit element of the array" << endl;
		cout << "7 - Largest element in the array" << endl;
		cout << "8 - Smallest element in the array" << endl;
		cout << "9 - Display all even numbers in the array" << endl;
		cout << "10 - Display all odd numbers in the array" << endl;
		cout << "11 - Display the sum of all the elements of the array" << endl;
		cout << "12 - Display the index of the smallest element of the array" << endl;
		cout << "13 - Display the index of the largest element of the array" << endl;
		cout << "14 - Display the sum of all squares of the array" << endl;
		cout << "15 - Exit" << endl << endl;
		
		cout << "Selection: ";
		cin >> choice;
		
		switch(choice)
		{
			case 1:
				array1();
				break;
			case 2:
				array2();
				break;
			case 3:
				array3();
				break;
			case 4:
				array4();
				break;
			case 5:
				array5();
				break;
			case 6:
				array6();
				break;
			case 7:
				array7();
				break;
			case 8:
				array8();
				break;
			case 9:
				array9();
				break;
			case 10:
				array10();
				break;
			case 11:
				array11();
				break;
			case 12:
				array12();
				break;
			case 13:
				array13();
				break;
			case 14:
				array14();
				break;
			default:
				cout << "Wrong input" << endl;
		}
	}
	return 0;
}

int main()
{
	mainmenu();	
}