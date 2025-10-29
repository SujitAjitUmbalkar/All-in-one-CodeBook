#include<iostream>
using namespace std;

int main()
{
    int iValue = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    cout<<"Number in Decimal format : "<<std::dec<<iValue<<"\n";
    cout<<"Number in Octal format : "<<std::oct<<iValue<<"\n";
    cout<<"Number in Hexadecimal format : "<<std::hex<<iValue<<"\n";

    return 0;
}

/*

import java.util.Scanner;

 * A Java program to read an integer and display it in decimal,
 * octal, and hexadecimal formats.

class Program 
{

    public static void main(String[] args) {
        int iValue = 0;

        // 1. Use Scanner for input, wrapped in a try-with-resources
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("Enter number : ");
            iValue = sc.nextInt();
        } // sc.close() is automatically called here

        // 2. Use System.out.printf for C-style formatted output
        System.out.printf("Number in Decimal format : %d\n", iValue);
        System.out.printf("Number in Octal format : %o\n", iValue);
        System.out.printf("Number in Hexadecimal format : %x\n", iValue);
    }
}
        // it may throw exceptions  InputMismatchException.
Java also has other ways to do it (like Integer.toHexString(iValue)), but printf is often 
the simplest and most direct way to copy C-style logic.        //

*/