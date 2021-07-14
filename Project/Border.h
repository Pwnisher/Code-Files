#include <iostream>
using namespace std;

void border()
{
	system("color F0");
	cout << " " << '\xDA';
	for (int x = 1; x < 117; x++)
	{
		cout << '\xC4';
	}
	cout << '\xBF' << endl;
	for (int x = 1; x < 25; x++)
	{
		cout << " " << '\xB3' << "                                                                                                                    " << '\xB3' << " " << endl;
	}
	cout << " " << '\xC3';
	for (int x = 1; x < 117; x++)
	{
		cout << '\xC4';
	}
	cout << '\xB4' << " ";
	for (int x = 1; x < 4; x++)
	{
		cout << " " << '\xB3' << "                                                                                                                    " << '\xB3' << " " << endl;
	}
	cout << " " << '\xc0';
	for (int x = 1; x < 117; x++)
	{
		cout << '\xC4';
	}
	cout << '\xD9';

	gotoxy(106, 27);
	cout << "[ ENTER ]";
	//extreme jank yes
}

void clearinput()
{
	gotoxy(5, 27);
	cout << "                               ";
	gotoxy(5, 27);
}