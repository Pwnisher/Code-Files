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