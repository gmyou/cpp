#include <iostream>
using namespace std;

void UsingArray( char arr[] );

int main()
{
    char array[20] = "Hello, World!";

    UsingArray( array );

    cout << "In main() : " << array << "\n";

    return 0;
}

void UsingArray(char arr[])
{
    cout << "In UsingArray() : " << arr << "\n";

    arr[12] = '?';
}