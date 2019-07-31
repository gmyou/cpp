#include <iostream>
#include <string>
using namespace std;

int main()
{
    char cs[20];
    string cpps;

    // cin >> cs;
    // cin >> cpps;
    cin.getline(cs, 20);
    cin.clear();
    getline(cin, cpps);

    cout << "cs = " << cs << "\n";
    cout << "cpps = " << cpps << "\n";

    return 0;
}