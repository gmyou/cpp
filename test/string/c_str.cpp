#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    string cppstyle = "Yes, I am.";

    // const char* cstyle = NULL;
    char* cstyle = new char [cppstyle.size() + 1];

    // cstyle = cppstyle.c_str();
    strcpy( cstyle, cppstyle.c_str() );

    cstyle[0] = 'Z';

    cout << "cstyle = " << cstyle << "\n";
    cout << "cppstyle = " << cppstyle << "\n";

    delete[] cstyle;
    cstyle = NULL;

    return 0;
}