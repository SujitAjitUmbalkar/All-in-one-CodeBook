// Turns OFF the 4th and 7th bits of a given number.

import java.util.Scanner;

class Program 
{

    public static int OffBitMultiple(int iNo) 
    {
        int iMask = (1 << 3) | (1 << 6); // 8 | 64 = 72

        int iOffMask = ~iMask; // ~72

        int iResult = iNo & iOffMask;

        return iResult;
    }

    public static void main(String[] args)          // exception handelling for valid input
    {
        int iValue = 0, iRet = 0;

        try (Scanner sc = new Scanner(System.in))                
        {
            System.out.println("Enter number : ");
            iValue = sc.nextInt();
        } catch (java.util.InputMismatchException e) 
        {
            System.out.println("Invalid input.");
            return;
        }

        iRet = OffBitMultiple(iValue);

        System.out.println("Updated number is : " + iRet);
    }
}


/*

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBitMultiple(UINT iNo)
{
    UINT iMask1 = 1;
    UINT iMask2 = 1;
    UINT iResult = 0;

    iMask1 = iMask1 << 3;
    iMask2 = iMask2 << 6;
    
    iMask1 = ~iMask1;
    iMask2 = ~iMask2;
    
    iResult = iNo & (iMask1 & iMask2);

    return iResult;
}

int main()
{
    UINT iValue = 0,iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    iRet = OffBitMultiple(iValue);

    cout<<"Updated number is : "<<iRet<<"\n";

    return 0;
}


 */