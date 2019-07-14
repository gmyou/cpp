#include <iostream>
using namespace std;

int main()
{
    int nArray[10];

    for (int i = 0; i < 10; i++)
    {
        nArray[i] = i;
    }

    int* p = &nArray[0];

    for (int i = 0; i < 10; i++)
    {
        // *(p + i) = i;
        // p[i] = i;
        // *(nArray + i) = i;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << i << "번째 원소 : " << nArray[i] << "\n";
    }
    

    return 0;
}