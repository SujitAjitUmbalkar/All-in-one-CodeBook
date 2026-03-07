import java.util.*;

class program513
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");

        String str = sobj.nextLine();

        str = str.trim();

        // replaceAll() method returns a new string after replacing all the old characters with new characters.
        // here we are replacing double spaces with single space.
        // but not storing the return value in str, so str will not be updated and it will print the original string with double spaces.

        str.replaceAll("  "," ");

        System.out.println(str);
    }
}