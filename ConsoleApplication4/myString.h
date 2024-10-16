#pragma once

#include <iostream>

using std::ostream;
using std::istream;

#ifndef STRING_H_
#define STRING_H_

class myString
{
private:
	char* str;
	size_t len;

public:
	//construct default
	myString();

	//construct with pharam
	myString(const char* s);

	//copy construct
	myString(const myString& s);

	//destructor
	~myString();

	//print string in console
	void print();

	//overload operator =
	myString& operator = (myString& s);

	//freindly print function
	friend ostream& operator << (ostream& os, const myString& s);

	//overload operator [] for search simvol in the string
	char& operator[](int i);

};	

#endif // !STRING_H_