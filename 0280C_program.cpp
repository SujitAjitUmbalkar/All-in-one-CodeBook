// PROGRAM++ 219- 220 = find bit is ON or  OFF by accepting location of bit from user;


#include<iostream>
using namespace std;

int main()
{
    int iValue = 0;
    int iPos = 0;
    int iMask = 0x1;

    cout<<"Enter the number : \n";
    cin>>iValue;

    cout<<"Enter the position : \n";
    cin>>iPos;

    iMask = iMask << (iPos -1);

    int iResult = iValue & iMask; 

    if(iResult == iMask)
    {
        printf("%d th Bit is OFF \n",iPos);
    }
    else
    {
        printf("%d th Bit is Off \n",iPos);
    }

    return 0;
}

/*

    iPos : 9

    iMask   0000    0000    0000    0000    0000    0000    0000    0001        0x1

                            iMask = iMask << (iPos - 1);
                            iMask = iMask << 8;

    iMask   0000    0000    0000    0000    0000    0001    0000    0000



*/