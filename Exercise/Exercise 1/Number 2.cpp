#include <iostream>
#include <math.h>
using namespace std;

int addCal(int a, int b)
{
	int sum;
	sum = a+b;
	return sum;
}

int subCal(int a, int b)
{
	int diff;
	diff = a-b;
	return diff;
}

int mulCal(int a, int b)
{
	int prod;
	prod = a*b;
	return prod;
}

int divCal(int a, int b)
{
	int quo;
	quo = a/b;
	return quo;
}

int modCal(int a, int b)
{
	int mod;
	mod = pow(a,b);
	return mod;
}

int ifOperator(char op, int a, int b)
{	
	if(op == '+')
		cout << "The sum of " << a << " and " << b << " is " << addCal(a, b) << endl;
	else if(op == '-')
		cout << "The difference of " << a << " and " << b << " is " << subCal(a, b) << endl;
	else if(op == '*')
		cout << "The product of " << a << " and " << b << " is " << mulCal(a, b) << endl;
	else if(op == '/')
		cout << "The quotient of " << a << " and " << b << " is " << divCal(a, b) << endl;
	else if(op == '^')
		cout << "The power of " << a << " raised to " << b << " is " << modCal(a, b) << endl;	
}

int main()
{
	int a, b;
	char op;
	
	cout << "Enter two numbers: " << endl;
	cin >> a >> b;
	cout << "What operator to use? (ex: +, -, *, /, ^)" << endl;
	cin >> op;
	
	ifOperator(op, a, b);
}