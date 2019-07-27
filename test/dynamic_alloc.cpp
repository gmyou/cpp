#include <iostream>
using namespace std;

int main()
{
    int size;
    int i = 0;

    cout << "How many input?";
    cin >> size;

    // dynamic_alloc
    int* arr = new int[size];

    cout << "Input integer.\n";
    for (i = 0; i < size; ++i)
        cin >> arr[i];

    int sum = 0;
    for (i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    float avg = (float)sum / (float)size;
    cout << "Sum = " << sum << ", Avg = " << avg << "\n";

    delete[] arr;

    return 0;
}