// лаб5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string tex;

    getline(cin, tex);
    string p = tex.substr(0, tex.find(' '));

    size_t i = p.find_first_of("аоАОaoAO");
    while (i != string::npos)
    {
        p.erase(i, 1);
        i = p.find_first_of("аоАОaoAO", i);
    }
    cout << p;
    return 0;
    
}

