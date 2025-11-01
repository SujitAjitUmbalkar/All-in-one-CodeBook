//   * Turns OFF two bits at user-specified positions.


import java.util.Scanner;

class Program
{
    public static int OffBitMultiple(int iNo, int iPos1, int iPos2)
    {
        int iMask1 = 1;
        int iMask2 = 1;
        int iResult = 0;

        iMask1 = iMask1 << (iPos1 - 1);
        iMask2 = iMask2 << (iPos2 - 1);
        
        iMask1 = ~iMask1;
        iMask2 = ~iMask2;
        
        iResult = iNo & (iMask1 & iMask2);

        return iResult;
    }

    public static void main(String[] args)
    {
        int iValue = 0, iLocation1 = 0, iLocation2 = 0;
        int iRet = 0;
        
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number : ");
        if (!sc.hasNextInt())
        {
            System.out.println("Invalid input. Not a number.");
            sc.close();
            return;
        }
        iValue = sc.nextInt();

        System.out.println("Enter first position : ");
        if (!sc.hasNextInt())
        {
            System.out.println("Invalid input. Not a number.");
            sc.close();
            return;
        }
        iLocation1 = sc.nextInt();

        System.out.println("Enter second position : ");
        if (!sc.hasNextInt())
        {
            System.out.println("Invalid input. Not a number.");
            sc.close();
            return;
        }
        iLocation2 = sc.nextInt();

        iRet = OffBitMultiple(iValue, iLocation1, iLocation2);
        System.out.println("Updated number is : " + iRet);
        
        sc.close();
    }
}





// #include<iostream>
// using namespace std;

// typedef unsigned int UINT;

// UINT OffBitMultiple(UINT iNo, UINT iPos1, UINT iPos2)
// {
//     UINT iMask1 = 1;
//     UINT iMask2 = 1;
//     UINT iResult = 0;

//     iMask1 = iMask1 << (iPos1 - 1);
//     iMask2 = iMask2 << (iPos2 - 1);
    
//     iMask1 = ~iMask1;
//     iMask2 = ~iMask2;
    
//     iResult = iNo & (iMask1 & iMask2);

//     return iResult;
// }

// int main()
// {
//     UINT iValue = 0,iRet = 0, iLocation1 = 0, iLocation2 = 0;

//     cout<<"Enter number : \n";
//     cin>>iValue;

//     cout<<"Enter first position : \n";
//     cin>>iLocation1;

//     cout<<"Enter second position : \n";
//     cin>>iLocation2;

//     iRet = OffBitMultiple(iValue,iLocation1,iLocation2);

//     cout<<"Updated number is : "<<iRet<<"\n";

//     return 0;
// }