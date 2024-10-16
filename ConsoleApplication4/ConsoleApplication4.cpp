
#include <iostream>
#include "myString.h"
#include <Windows.h>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    myString s1;
    myString s2("I'am a student 210 group!");
    myString s3(s2);
    s1.print();
    s2.print();
    s3.print();

    s1 = s2;

    s1.print();

    cout << s1[20] << endl;

    return 0;
}

