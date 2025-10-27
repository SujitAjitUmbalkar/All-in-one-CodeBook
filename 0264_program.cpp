#include<iostream>
using namespace std;

int CountOne(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 2;
        if(iDigit == 1)
        {
            iCount++;
        }
        iNo = iNo / 2;
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    iRet = CountOne(iValue);

    cout<<"Number of 1 : "<<iRet<<"\n";
    
    return 0;
}

/*

import java.util.Scanner;

class Program {

    public static int CountOne(int iNo) {
        int iDigit = 0;
        int iCount = 0;

        
        while(iNo != 0) {
            iDigit = iNo % 2;
            if(iDigit == 1) {
                iCount++;
            }
           
            iNo = iNo / 2;
        }
        return iCount;
    }

    public static void main(String[] args) {
        int iValue = 0, iRet = 0;

        // Create a Scanner object for user input
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number : ");
        iValue = sc.nextInt();

        // Call the function to count the bits
        iRet = CountOne(iValue);

        System.out.println("Number of 1 : " + iRet);
        
        sc.close(); // Close the scanner
    }
}

*/