//  cheak wheather 2nd  ,  3rd ,    4th ,    5th  bit of a number is on or off;


#include<iostream>
using namespace std;

bool CheckBit(int iNo)
{
    int iMask = 0x1e;
    int iResult = 0;
    iResult = iNo & iMask;

    if(iResult == 0)
    {   return false;   }
    else
    {   return true;    }
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
        cout<<"2nd  ,  3rd ,    4th ,    5th bit is ON\n";
    }
    else
    {
        cout<<"2nd  ,  3rd ,    4th ,    5th bit is ON";
    }
    
    return 0;
}



// 1e 

//   0000   0000    0000    0000    0000    0000    0001    1110

  