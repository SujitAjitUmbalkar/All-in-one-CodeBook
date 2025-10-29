#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 2048;      // you can write here any presentaion of number (Hex,Oct,Dec)
    UINT iResult = 0;

    iResult = iNo & iMask;

    return (iResult == iMask);
}

int main()
{
    UINT iValue = 0;
    bool bRet = false;

    cout<<"Enter number : \n";
    cin>>iValue;

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        cout<<"12th bit is ON\n";
    }
    else
    {
        cout<<"12th bit is OFF\n";
    }

    return 0;
}