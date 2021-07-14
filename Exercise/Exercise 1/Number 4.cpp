#include <iostream>
using namespace std;

void hello(string name)
{
	cout << "Hello " << name << endl;
}

int main()
{
	string name;

	cout << "What is your name?" << endl;
	cin >> name;
	hello(name);
}