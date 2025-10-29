#include<iostream>
using namespace std;

bool CheckBit(unsigned int iNo)
{
    unsigned int iMask = 8;
    unsigned int iResult = 0;

    iResult = iNo & iMask;

    return (iResult == iMask);
}

int main()
{
    unsigned int iValue = 0;
    bool bRet = false;

    cout<<"Enter number : \n";
    cin>>iValue;

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        cout<<"4th bit is ON\n";
    }
    else
    {
        cout<<"4th bit is OFF\n";
    }

    return 0;
}


/*

If user enters a negative number, it becomes a large positive unsigned value 
— not an error, but unexpected behavior.

You should reject negative inputs or handle them properly depending on your goal.
*/