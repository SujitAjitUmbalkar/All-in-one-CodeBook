#include<iostream>
using namespace std;

bool CheckBit(int iNo)
{
    int iMask = 8;
    int iResult = 0;

    iResult = iNo & iMask;

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
        cout<<"4th bit is ON\n";
    }
    else
    {
        cout<<"4th bit is OFF\n";
    }

    return 0;
}


/*
import java.util.Scanner;

class Program {

    public static boolean CheckBit(int iNo)
    {
        // The mask for the 4th bit (binary 1000) is 8.
        int iMask = 8;
        int iResult = 0;

        iResult = iNo & iMask;

        if(iResult == 0) {
            return false; // The bit was OFF
        } else 
        {
            return true;  // The bit was ON
        }
    }

    public static void main(String[] args) {
        int iValue = 0;
        boolean bRet = false;

        // try-with-resources to automatically close the scanner
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("Enter number : ");
            iValue = sc.nextInt();
        }

        bRet = CheckBit(iValue);

        if(bRet == true) {
            System.out.println("4th bit is ON");
        } else {
            System.out.println("4th bit is OFF");
        }
    }
}

*/