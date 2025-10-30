// ON a specific bit using a bitwise AND mask

import java.util.Scanner;

class BitwiseOperator 
{
  
    public int ChangeBit(int iNo, int iPos) 
    {
        int iMask = 1;
        int iResult = 0;

        iMask = iMask << (iPos - 1);

        iMask = ~iMask;
        
        iResult = iNo & iMask;

        return iResult;
    }
}

class Program_0282 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        
        int iValue = 0, iLocation = 0, iRet = 0;

        System.out.println("Enter number: ");
        iValue = scanner.nextInt();

        System.out.println("Enter the position: ");
        iLocation = scanner.nextInt();

        BitwiseOperator bobj = new BitwiseOperator();
        iRet = bobj.ChangeBit(iValue, iLocation);

        System.out.println("Updated number is: " + iRet);
        
        scanner.close();
    }
}