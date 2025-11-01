import java.util.Scanner;

class Program
{
    public static int ChangeBit(int iNo)    // 12
    {
        int iMask = 0xfffff7ff;
        int iResult = 0;

        iResult = iNo & iMask;

        return iResult;
    }

    public static void main(String[] args)
    {
        int iValue = 0, iRet = 0;

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number : ");
        iValue = sc.nextInt();

        iRet = ChangeBit(iValue);

        System.out.println("Updated number is : " + iRet);
        
        sc.close();
    }
}



// #include<iostream>
// using namespace std;

// typedef unsigned int UINT;

// UINT ChangeBit(UINT iNo)    // 12
// {
//     UINT iMask = 0xfffff7ff;
//     UINT iResult = 0;

//     iResult = iNo & iMask;

//     return iResult;
// }

// int main()
// {
//     UINT iValue = 0, iRet = 0;

//     cout<<"Enter number : \n";
//     cin>>iValue;

//     iRet = ChangeBit(iValue);

//     cout<<"Updated number is : "<<iRet<<"\n";

//     return 0;
// }