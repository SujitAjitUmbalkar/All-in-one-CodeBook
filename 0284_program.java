// clear (OFF-> ON ) the 4th and 7th bits 

import java.util.Scanner;

class BitwiseOperator
{
    public int OffBitMultiple(int iNo)
    {
        int iMask1 = 1;
        int iMask2 = 1;
        int iResult = 0;

        iMask1 = iMask1 << 3;
        iMask2 = iMask2 << 6;
        
        iMask1 = ~iMask1;
        iMask2 = ~iMask2;
        
        iResult = iNo & iMask1;
        iResult = iResult & iMask2;

        return iResult;
    }
}

class Program
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        
        int iValue = 0, iRet = 0;

        System.out.println("Enter number: ");
        iValue = scanner.nextInt();

        BitwiseOperator bobj = new BitwiseOperator();
        iRet = bobj.OffBitMultiple(iValue);

        System.out.println("Updated number is: " + iRet);
        
        scanner.close();
    }
}