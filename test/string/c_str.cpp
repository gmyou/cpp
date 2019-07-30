#include <iostream>
#include <string>
using namespace std;

int main()
{
    string cppstyle = "Yes, I am.";

    const char* cstyle = NULL;

    cstyle = cppstyle.c_str();

    cout << "cstyle = " << cstyle << "\n";
    cout << "cppstyle = " << cppstyle << "\n";

    return 0;
}