// Use of AND in JAVA 

import java.util.Scanner;

class ChangeBitOff
{
    public static int ChangeBit(int iNo)   // example: 12
    {
        // 4294965247 is too large for Java int (32-bit signed)
        // So we store it as long, then cast to int safely

        long tempMask = 4294965247L; 
        int iMask = (int)tempMask;     // same 32 bits as in C++
        int iResult = 0;

        iResult = iNo & iMask;

        return iResult;
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iValue = sobj.nextInt();

        int iRet = ChangeBit(iValue);

        System.out.println("Updated number is : " + iRet);

        sobj.close();
    }
}
