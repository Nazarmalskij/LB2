#include <iostream>
#include <cmath>
#include <string>
#include "Cursor.h"

using namespace std;

Cursor::Cursor()
{
	first = 0;
	second = 0;
}

Cursor::Cursor(int x = 0, int y = 0)
{
	first = x;
	second = y;
}

void Cursor::SetFirst(int value)
{
	if (value > 0)
		first = value;
	else
		first = 0;
}

void Cursor::SetSecond(unsigned int value)
{
	if (value > 0)
		second = value;
	else
		second = 0;
}

Cursor& Cursor::operator = (const Cursor& r)
{
	first = r.first;
	second = r.second;
	return *this;
}

Cursor::operator string () const
{
	stringstream ss;
	ss << "first = " << first << endl;
	ss << "second = " << second << endl;
	return ss.str();
}


ostream& operator << (ostream& out,  const Cursor& a)
{
	return out <<" ( "<< a.first << ", "  <<a.second << " ) ";
}

istream& operator >> (istream& in, Cursor& a)
{
	cout << "first = "; in >> a.first;
	cout << "second = "; in >> a.second;
	return in;
}

void Cursor::ChangeX(int N)
{
	first = N;
}

void Cursor::ChangeY(int G)
{
	second = G;
}

bool Cursor::Check_1( int G)
{
	if (G <= 200 && G > 0)
	{

		return true;
	}
	else
	{
		cout << "Wrong value" << endl;
		return 0;
	}
}

bool Cursor::Check_2(int N)
{
	if (N <= 200 && N > 0)
	{

		return true;
	}
	else
	{
		cout << "Wrong value" << endl;
		return 0;
	}
}