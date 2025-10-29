// PROGRAM++ 221 - 222  = Toggle 5th bit;

#include<iostream>
using namespace std;

int main()
{
    int iValue = 0;
    int iMask = 0x10;
    int iResult = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    iResult = iValue ^ iMask;

    cout<<"Number after bit toggle : "<<iResult<<"\n";      // 5
    
    return 0;
}


/*
                      0   0   0   1   1   0   0   1             int iNo = 25  


                        0   0   0   0   1   0   0   1           this is 9 in decimal (0x19)



                        0   0   0   1   1   0   0   1           iNo = 25
             ^          0   0   0   1   0   0   0   0           iMask == 0x19
                     ___________________________________
                        0   0   0   0   1   0   0   1           iResult  == 9


                        0   0   0   0   1   0   0   1           iNo == 9
             ^          0   0   0   1   0   0   0   0           iMask == 0x10
                     ___________________________________
                        0   0   0   1   1   0   0   1           iResult  == 25


                        9 <-> 25 after changing 5th bit 
*/