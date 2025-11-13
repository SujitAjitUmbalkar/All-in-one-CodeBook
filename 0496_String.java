import java.util.*;

class program496
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

        int i = 0;
        int Count[] = new int[26];      // to store frequency 

        char Arr[] = str.toCharArray(); 
    
        for(i = 0; i < Arr.length; i++)
        {
            Count[Arr[i]- 'a']++;         
        } 

        for(i = 0; i < 26; i++)
        {
            System.out.println("Frequency of "+(char)(i+'a')+" is : "+Count[i]);

        }

        sobj.close();
    }
}


// stored string input in direct string variable 
// convert that string in array of characters 
// create an array of 26 bytes of size to store frequency of each character in 
