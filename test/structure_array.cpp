#include <iostream>
using namespace std;

struct StudentInfo
{
    char name[20];
    int stdNumber;
    float grade[2];
};

int main()
{
    StudentInfo stdInfos[5] = {
        { "Jack You", 1990001001, {10.0f, 32.09f} },
        { "Son", 1990001002, {23.0f, 12.19f} },
        { "Moon", 1990001003, {3.01f, 32.09f} },
        { "Bum", 1990001004, {14.0f, 42.09f} },
        { "Duck", 1990001005, {11.0f, 52.09f} }
    };

    for (int i = 0; i < 5; i++)
    {
        cout << stdInfos[i].name << "\n";
        cout << stdInfos[i].stdNumber << "\n";
        cout << stdInfos[i].grade[0] << ", " << stdInfos[i].grade[1] << "\n\n";
    }

    return 0;
    
}
