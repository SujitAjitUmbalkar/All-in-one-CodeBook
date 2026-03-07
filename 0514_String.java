import java.util.*;

class program514
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");

        String str = sobj.nextLine();

        str = str.trim();

        str.replaceAll("ab","x");           
        // here we are replacing "ab" with "x", 
        // but not storing the return value in str, so str will not be updated and it will print the original string without any changes.

        System.out.println(str);
    }
}