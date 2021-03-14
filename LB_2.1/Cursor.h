#pragma once
#pragma pack(1)
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Cursor
{
private:
	int first, second;
public:
	Cursor(int, int);

	
	Cursor();
	
	void SetFirst(int value);
	void SetSecond(unsigned int value);
	int GetFirst() const { return first; }
	int GetSecond() const { return second; }

	Cursor& operator =(const Cursor&);
	operator string() const;

	friend ostream& operator <<(ostream& out, const Cursor& a);
	friend istream& operator >>(istream& in, Cursor& a);

	void ChangeX(int N);
	void ChangeY(int G);
	bool Check_1( int G);
	bool Check_2(int N);
};
