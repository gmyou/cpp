#include "dog.h"
#include "cat.h"
#include <iostream>

using namespace std;

int main()
{
    Dog::CreateAll();
    Cat::CreateAll();

    cout << "Dog:  " << Dog::count << endl;
    cout << "Cat:  " << Cat::count << endl;

    return 0;
}