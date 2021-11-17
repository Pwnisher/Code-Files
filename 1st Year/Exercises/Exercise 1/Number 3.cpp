#include <iostream>
#include <math.h>
using namespace std;

int calculate()
{
	int a=6, b=5, c;
	c = pow(a,b);
	return c;
}

int main()
{
	cout << "6^5 is " << calculate() << endl;
}