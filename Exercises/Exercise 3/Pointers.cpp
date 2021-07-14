#include "Pointers.h"

void pointMM()
{
	int choice = 1;
	while (choice < 6)
	{
		clrscr();
		cout << "======= Menu =======" << endl << endl;
		cout << "1. Swap Two Numbers" << endl;
		cout << "2. Print Length of String" << endl;
		cout << "3. Print Reverse of String" << endl;
		cout << "4. Count Vowels and Consonants" << endl;
		cout << "5. Add Two Numbers by Reference" << endl;
		cout << "6. Exit" << endl;		

		cout << endl << "Selection: ";
		cin >> choice;

		switch(choice)
		{
			case 1:
				clrscr();
				pointMMC1();		
			break;

			case 2:
				clrscr();
				pointMMC2();		
			break;

			case 3:
				clrscr();
				char *cha;	
				cout << "Enter any text: ";
				cin >> cha;
				pointMMC3(cha);
				getch();
			break;

			case 4:
				clrscr();
				char str[10];
				cout << "Enter any text: ";
				cin >> str;	
				pointMMC4(str);
				getch();
			break;

			case 5:
				clrscr();
				int a, b, sum;
				cout << "Input 2 numbers: " << endl;
				cin >> a >> b;    
				pointMMC5(&a, &b, &sum);
				cout << "The sum is " << sum << endl;
				getch();
			break;	

			default:
				cout << "Exiting..." << endl;
		}
	}
}

int main()
{
	pointMM();
}