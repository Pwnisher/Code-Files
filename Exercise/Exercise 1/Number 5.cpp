#include <iostream>
using namespace std;

int max_two(int a, int b)
{
	if(a > b)
		return a;
	else
		return b;
}

int main()
{
	int a, b;
	
	cout << "Enter two numbers:" << endl;
	cin >> a >> b;	
	
	cout << "The max number is " << max_two(a,b) << endl;
}