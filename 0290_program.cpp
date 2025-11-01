#include<iostream>
using namespace std;

bool CheckBit(int iNo)
{
    int iMask = 0x00000080;     // 8

    // All three lines are identical to the compiler:
    int iMask_hex = 0x80;    // Hexadecimal (prefix 0x)
    int iMask_oct = 0200;  // Octal (prefix 0)
    int iMask_dec = 128;   // Decimal (no prefix)

    int iResult = 0;

    iResult = iNo & iMask_oct;

    if(iResult == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter number : \n";
    cin>>iValue;

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        cout<<"8th bit is ON\n";
    }
    else
    {
        cout<<"8th bit is OFF\n";
    }

    return 0;
}