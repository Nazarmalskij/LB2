#include <iostream>
#include "Cursor.h"

using namespace std;

Cursor makeCursor(int x, int y)
{ 
	Cursor N ( x,  y);
	return N;
}

int main()
{
	Cursor d = makeCursor(2, 3);
	cout << "first = " << d.GetFirst() << endl;
	cout << "second = " << d.GetSecond() << endl << endl;

	Cursor a;
	
	cin >> a;
	cout << endl << a << endl;

	int c, g;
	cout << endl << "Enter first argument "; cout << endl;
	cin >> c;
	cout << endl << "Enter second argument "; cout << endl;
	cin >> g;
	cout << endl;

	

	a.ChangeX(c);
	a.ChangeY(g);
	a.Check_1(g);
	a.Check_2(c);
	cout << a << endl;
	return 0;
}
