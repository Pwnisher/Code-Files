#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

void clrscr()
{
    cout << "\033[2J\033[1;1H";
}

int arrayGlobal[8];

int array1()
{
	clrscr();
	
	cout << "Enter 8 numbers:" << endl;
	for(int a=0; a<8; a++)
	{
		cin >> arrayGlobal[a];
	}
	//gotoxy(5, 6);
	cout << "Numbers inputted successfully" << endl;
	system("read");
	return 0;
}

int array2()
{
	clrscr();
	cout << "The elements are:" << endl;
	for(int b=0; b<8; b++)
	{
		cout << arrayGlobal[b] << " ";		
	}
	cout << endl;
	
	cout << "Press any key to continue" << endl;
	system("read");
	return 0;
}

int array3()
{
	clrscr();
	bool trigger;
	int search, position;
	string ordinal;
	
	cout << "What element to search?" << endl;
	cin >> search;
	
	for(int c=0; c<8; c++)
	{
		if(arrayGlobal[c] == search)
		{
			trigger = true;
			position = c+1;
			break;
		}
	}
	
	if(position == 1)
		ordinal = "st";
	else if(position == 2)
		ordinal = "nd";
	else if(position == 3)
		ordinal = "rd";
	else
		ordinal = "th";
	
	if(trigger == true)
		cout << "Element is at " << position << ordinal << " position" << endl;
	else
		cout << "Element not found" << endl;
	
	system("read");
	return 0;
}

int array4()
{
	clrscr();
	char sortC;
	cout << "(A)scending or (D)escending?" << endl;
	cin >> sortC;
	
	if(sortC=='A')
		sort(arrayGlobal, arrayGlobal+8);
	else
		sort(arrayGlobal, arrayGlobal+8, greater<int>());
	
	cout << "The elements have been sorted" << endl;
	system("read");
	return 0;
}

int array5()
{
	clrscr();
	int total=8, del;
	
	for(int b=0; b<8; b++)
	{
		cout << arrayGlobal[b] << " ";		
	}
	cout << endl;
	
	cout << "What element to delete?" << endl;
	cin >> del;
	for(int e=0; e<total; e++)
    {
        if(arrayGlobal[e]==del)
        {
            for(int e2=e; e2<(8-1); e2++)
                arrayGlobal[e2] = arrayGlobal[e2+1];            
            e--;
            total--;
        }
    }
	cout << "Element deleted" << endl;
	system("read");
	return 0;
}

int array6()
{
	clrscr();
	int indexU, replace;
	cout << "At what index do you want to update?" <<endl;
	cin >> indexU;
	cout << "Replace into: " << endl;
	cin >> replace;
	arrayGlobal[indexU] = replace;
	
	cout << "Array updated" << endl;
	system("read");
	return 0;
}

int array7()
{
	clrscr();
	int largeE = arrayGlobal[0];
	for(int g = 1; g < 8; g++)
    {      
       if(largeE < arrayGlobal[g])
           largeE = arrayGlobal[g];
    }
	cout << "The largest element is " << largeE << endl;
	system("read");
	return 0;
}

int array8()
{
	clrscr();
	int smallE = arrayGlobal[0];
	for(int h=0; h<8; h++)
	{
		if(smallE > arrayGlobal[h])
			smallE = arrayGlobal[h];
	}
	cout << "The smallest element is " << smallE << endl;
	system("read");
	return 0;
}

int array9()
{
	clrscr();
	cout << "The even numbers in the array: ";
	for(int i=0; i<8; i++)
	{
		if(arrayGlobal[i] % 2 == 0)
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
	for(int j=0; j<8; j++)
	{
		if(arrayGlobal[j] % 2 == 1)
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
	clrscr();
	int sumA=0;
	for (int k=0; k<8; k++)
	{
		sumA = sumA + arrayGlobal[k];
	}
	cout << "The sum of all elements is " << sumA << endl;
	system("read");
	return 0;
}

int array12()
{
	clrscr();
	int smallE = arrayGlobal[0], smallI=0;
	for(int l=1; l<8; l++)
	{
		if(smallE < arrayGlobal[l])
		{
			smallE = arrayGlobal[l];
			smallI = l;
		}
	}
	cout << "The index of the largest element is " << smallI << endl;
	system("read");
	return 0;
}


int array13()
{
	clrscr();
	int largeE = arrayGlobal[0], largeI=0;
	for(int m=1; m<8; m++)
	{
		if(largeE < arrayGlobal[m])
		{
			largeE = arrayGlobal[m];
			largeI = m;
		}
	}
	cout << "The index of the largest element is " << largeI << endl;
	system("read");
	return 0;
}

int array14()
{
	clrscr();
	int arrayGlobalCopy[8], sumS=0;
	copy(arrayGlobal, arrayGlobal+8, arrayGlobalCopy);
	for(int n=0; n<8; n++)
	{
		arrayGlobalCopy[n] = pow(arrayGlobalCopy[n], 2);
		sumS = sumS + arrayGlobalCopy[n];
	}
	cout << "The sum of all squares in the array is " << sumS << endl;
	system("read");
	return 0;
}
