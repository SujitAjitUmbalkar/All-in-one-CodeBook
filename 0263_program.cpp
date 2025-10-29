#include<iostream>
using namespace std;

void DisplayBinary(int iNo)
{
    int iDigit = 0;
    
    cout<<"Binary conversion is : \n";

    while(iNo != 0)
    {
        iDigit = iNo % 2;
        cout<<iDigit;
        iNo = iNo / 2;
    }
    cout<<endl;
}

int main()
{
    int iValue = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    DisplayBinary(iValue);

    return 0;
}

/*
import java.util.Scanner;

class Program 
{

    public static void DisplayBinary(int iNo) {
        int iDigit = 0;
        
        System.out.println("Binary conversion is : ");

        // Loop continues as long as the number is not zero
        while(iNo != 0) {
            iDigit = iNo % 2;         // Get the remainder
            System.out.print(iDigit); // Print the digit
            iNo = iNo / 2;            // Divide the number by 2
        }
        System.out.println(); // Print a final newline
    }

    public static void main(String[] args) {
        int iValue = 0;

        // Create a Scanner object to read input
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number : ");
        iValue = sc.nextInt();

        DisplayBinary(iValue);

        sc.close(); // Close the scanner
    }
}

*/
