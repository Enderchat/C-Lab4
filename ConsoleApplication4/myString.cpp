#include "myString.h"

#include <iostream>

using std::ostream;
using std::istream;
using std::cin;
using std::cout;
using std::endl;
using std::strlen;

//construct default
myString::myString() : len(0)
{
	str = new char[1];
	str[0] = '\0';
}

//construct with pharam
myString::myString(const char* s)
{
	len = strlen(s);
	str = new char[len + 1];
	for (size_t i = 0; i <= len; i++)
	{
		str[i] = s[i];
	}
}

//copy construct
myString::myString(const myString& s)
{
	len = s.len;
	str = new char[len + 1];
	for (size_t i = 0; i <= len; i++)
	{
		str[i] = s.str[i]; 
	}
}

//destructor
myString::~myString()
{
	delete[] str;
	len = 0;
	str = new char[1];
	str[0] = '\0';
	cout << "String has been deleted!\n";
}

//print string in console
void myString::print() 
{
	cout << str << endl;
}

//overload operator =
myString& myString::operator = (myString & s)
{
	delete[] str;
	len = s.len;
	str = new char[len + 1];
	for (size_t i = 0; i <= len; i++)
	{
		str[i] = s.str[i];
	}
	return *this;
}

	//freindly print function
ostream& operator << (ostream& os, const myString& s)
{
	os << s.str << " string lenght ="<< " " << s.len;
	return os;
}

//overload operator [] for search simvol in the string
char& myString::operator[](int i)
{
	if (i < 0 or i > len) 
	{
		i = 0;
	}
	return str[i];
}
