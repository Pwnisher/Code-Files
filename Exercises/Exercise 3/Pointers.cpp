#include <iostream>
#include <string.h>

using namespace std;

void clrscr()
{
	cout << "\033[2J\033[1;1H";
}

void getch()
{
	system("read");
}

void pointMMC1()
{
	int x, y, temp;
    int *a, *b;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    a = &x;
    b = &y;

    temp = *a;
    *a = *b;
    *b = temp;

    cout << "Value of X is: " << x << endl;
    cout << "Value of Y is: " << y << endl;
	getch();
}

void pointMMC2()
{   
	char str[20], *pt;
	int i = 0;  

	cout << "Enter any text: ";
	cin >> str;
	
	pt = str;
	while (*pt != '\0')
	{
		i++;
		pt++;
	}
	
	cout << "Length of String: " << i << endl;
	getch();
}

void pointMMC3(char *cha)
{		
	cout << "The reverse is: ";
	for(int i=(strlen(cha)-1);i>=0;i--)
	{ 
		cout<<cha[i];
	}
	cout << endl;

}

void pointMMC4(char *sptr)
{		
    int countV = 0, countC = 0;	
	
    while ((*sptr) != '\0')
	{          
        if (*sptr == 'a' || *sptr == 'e' || *sptr == 'i' || *sptr == 'o' || *sptr == 'u')         
            countV++;
		else         
            countC++;									
        sptr++;
    }
	cout << "The number of vowels are " << countV << endl;
	cout << "The number of consonants are " << countC << endl;	
}

void pointMMC5(int* n1, int* n2, int* sum)
{
   *sum = *n1 + *n2;
}

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