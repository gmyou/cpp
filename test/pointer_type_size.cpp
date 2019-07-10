#include <iostream>
using namespace std;

int main()
{
    int iArray[10];

    for (int i = 0; i < 10; i++)
    {
        cout << i << "번째 Address" << &iArray[i] << "\n";
    }
    

    int* pi = &iArray[3];

    cout << "pi = " << pi << "\n";
    cout << "pi+1 = " << pi+1 << "\n";
    cout << "pi+2 = " << pi+2 << "\n";
    cout << "pi-1 = " << pi-1 << "\n";

    short sArray[10];

    for (int i = 0; i < 10; i++)
    {
        cout << i << "번째 Address" << &sArray[i] << "\n";
    }

    short* ps = &sArray[3];

    cout << "ps = " << ps << "\n";
    cout << "ps+1 = " << ps+1 << "\n";
    cout << "ps+2 = " << ps+2 << "\n";
    cout << "ps-1 = " << ps-1 << "\n";

    // pointer 연산
    short* ps1 = &sArray[3];
    short* ps2 = &sArray[7];

    cout << "ps1 = " << ps1 << "\n";
    cout << "ps2 = " << ps2 << "\n";
    cout << "ps2-ps1 = " << ps2 - ps1 << "\n";

    return 0;

    /**
     * output
    0번째 Address0x7ffeeeca2a00
    1번째 Address0x7ffeeeca2a04
    2번째 Address0x7ffeeeca2a08
    3번째 Address0x7ffeeeca2a0c
    4번째 Address0x7ffeeeca2a10
    5번째 Address0x7ffeeeca2a14
    6번째 Address0x7ffeeeca2a18
    7번째 Address0x7ffeeeca2a1c
    8번째 Address0x7ffeeeca2a20
    9번째 Address0x7ffeeeca2a24
    pi = 0x7ffeeeca2a0c
    pi+1 = 0x7ffeeeca2a10
    pi+2 = 0x7ffeeeca2a14
    pi-1 = 0x7ffeeeca2a08
    0번째 Address0x7ffeeeca29e0
    1번째 Address0x7ffeeeca29e2
    2번째 Address0x7ffeeeca29e4
    3번째 Address0x7ffeeeca29e6
    4번째 Address0x7ffeeeca29e8
    5번째 Address0x7ffeeeca29ea
    6번째 Address0x7ffeeeca29ec
    7번째 Address0x7ffeeeca29ee
    8번째 Address0x7ffeeeca29f0
    9번째 Address0x7ffeeeca29f2
    ps = 0x7ffeeeca29e6
    ps+1 = 0x7ffeeeca29e8
    ps+2 = 0x7ffeeeca29ea
    ps-1 = 0x7ffeeeca29e4
    ps1 = 0x7ffeeeca29e6
    ps2 = 0x7ffeeeca29ee
    ps2-ps1 = 4
     */
}