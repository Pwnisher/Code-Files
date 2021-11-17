#include <iostream>
using namespace std;

int sumNatural(int num)
{
	int sum=0;
	while(num > 0)
	{
		sum+=num;
		num--;
	}
	return sum;
}

int main()
{
	int num;
	
	cout << "Enter a number" << endl;
	cin >> num;
	
	cout << "The sum is " << sumNatural(num) << endl;
}