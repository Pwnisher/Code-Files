#include <iostream>
using namespace std;

void borderLogin()
{
	cout /* << '\xB3' */ << endl << endl;
	cout << "                       [ Login Menu ]                       " << endl;
	cout << "  +--------------------------++--------------------------+  " << endl;
	for (int x = 5; x < 26; x++)
	{
		cout << "  |                                                      |  " << endl;
	}
	cout << "  +------------------------------------------------------+  " << endl;
	cout << "  |  INPUT                                    [ ENTER ]  |  " << endl;
	cout << "  +------------------------------------------------------+  " << endl;
}

void borderMainMenu()
{
	cout << endl << endl;
	cout << "                       [ Main Menu ]                        " << endl;
	cout << "  +--------------------------++--------------------------+  " << endl;
	for (int x = 5; x < 26; x++)
	{
		cout << "  |                                                      |  " << endl;
	}
	cout << "  +------------------------------------------------------+  " << endl;
	cout << "  |                                           [ ENTER ]  |  " << endl;
	cout << "  +------------------------------------------------------+  " << endl;
}

void borderSequence()
{
	cout << endl << endl;
	cout << "                      [ Sequence Menu ]                     " << endl;
	cout << "  +--------------------------++--------------------------+  " << endl;
	for (int x = 5; x < 26; x++)
	{
		cout << "  |                                                      |  " << endl;
	}
	cout << "  +------------------------------------------------------+  " << endl;
	cout << "  |                                           [ ENTER ]  |  " << endl;
	cout << "  +------------------------------------------------------+  " << endl;
}

void borderIf()
{
	cout << endl << endl;
	cout << "                    [ If-Statement Menu ]                   " << endl;
	cout << "  +--------------------------++--------------------------+  " << endl;
	for (int x = 5; x < 26; x++)
	{
		cout << "  |                                                      |  " << endl;
	}
	cout << "  +------------------------------------------------------+  " << endl;
	cout << "  |                                           [ ENTER ]  |  " << endl;
	cout << "  +------------------------------------------------------+  " << endl;
}

void borderLoops()
{
	cout << endl << endl;
	cout << "                       [ Loops Menu ]                       " << endl;
	cout << "  +--------------------------++--------------------------+  " << endl;
	for (int x = 5; x < 26; x++)
	{
		cout << "  |                                                      |  " << endl;
	}
	cout << "  +------------------------------------------------------+  " << endl;
	cout << "  |                                           [ ENTER ]  |  " << endl;
	cout << "  +------------------------------------------------------+  " << endl;
}

void border1DArray()
{
	cout << endl << endl;
	cout << "                      [ 1D Array Menu ]                     " << endl;
	cout << "  +--------------------------++--------------------------+  " << endl;
	for (int x = 5; x < 26; x++)
	{
		cout << "  |                                                      |  " << endl;
	}
	cout << "  +------------------------------------------------------+  " << endl;
	cout << "  |                                           [ ENTER ]  |  " << endl;
	cout << "  +------------------------------------------------------+  " << endl;
}

void border2DArray()
{
	cout << endl << endl;
	cout << "                      [ 2D Array Menu ]                     " << endl;
	cout << "  +--------------------------++--------------------------+  " << endl;
	for (int x = 5; x < 26; x++)
	{
		cout << "  |                                                      |  " << endl;
	}
	cout << "  +------------------------------------------------------+  " << endl;
	cout << "  |                                           [ ENTER ]  |  " << endl;
	cout << "  +------------------------------------------------------+  " << endl;
}

void borderRecursion()
{
	cout << endl << endl;
	cout << "                     [ Recursion Menu ]                     " << endl;
	cout << "  +--------------------------++--------------------------+  " << endl;
	for (int x = 5; x < 26; x++)
	{
		cout << "  |                                                      |  " << endl;
	}
	cout << "  +------------------------------------------------------+  " << endl;
	cout << "  |                                           [ ENTER ]  |  " << endl;
	cout << "  +------------------------------------------------------+  " << endl;
}

void borderStruct()
{
	cout << endl << endl;
	cout << "                      [ Struct Menu ]                       " << endl;
	cout << "  +--------------------------++--------------------------+  " << endl;
	for (int x = 5; x < 26; x++)
	{
		cout << "  |                                                      |  " << endl;
	}
	cout << "  +------------------------------------------------------+  " << endl;
	cout << "  |                                           [ ENTER ]  |  " << endl;
	cout << "  +------------------------------------------------------+  " << endl;
}

void borderFile()
{
	cout << endl << endl;
	cout << "                   [ File Handling Menu ]                   " << endl;
	cout << "  +--------------------------++--------------------------+  " << endl;
	for (int x = 5; x < 26; x++)
	{
		cout << "  |                                                      |  " << endl;
	}
	cout << "  +------------------------------------------------------+  " << endl;
	cout << "  |                                           [ ENTER ]  |  " << endl;
	cout << "  +------------------------------------------------------+  " << endl;
}

void borderLoopsSub()
{
	cout << endl << endl;
	cout << "                     [ Loops Sub-Menu ]                     " << endl;
	cout << "  +--------------------------++--------------------------+  " << endl;
	for (int x = 5; x < 26; x++)
	{
		cout << "  |                                                      |  " << endl;
	}
	cout << "  +------------------------------------------------------+  " << endl;
	cout << "  |                                           [ ENTER ]  |  " << endl;
	cout << "  +------------------------------------------------------+  " << endl;
}

void clearinputbox()
{
	gotoxy(5, 26);
	cout << "                               ";
	gotoxy(5, 26);
}

void clearaboveinput()
{
	gotoxy(5, 24);
	cout << "                               ";
}
