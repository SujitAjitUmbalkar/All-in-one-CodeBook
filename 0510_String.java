
// _ _ _India_ _ _ _is_ _my_country_ _ _ _
// Aftre trim
// India_ _ _ _is_ _my_country

// output should be : India is my country

import java.util.*;

class program_510
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");

        String str = sobj.nextLine();

        str = str.trim();

        char Arr[] = str.toCharArray();
        char Brr[] = new char[Arr.length];
        
        int iCount = 0, i = 0, j = 0;
        boolean bFlag = false;

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] != ' ')
            {
                Brr[j] = Arr[i];
                j++;
                bFlag = false;              // letter is not space so make flag false
            }
            else if(Arr[i] == ' ')
            {
                if(bFlag == false)      // false means previous letter wasnt space
                {
                    Brr[j] = ' ';       // insert space in output string (only one space)
                    j++;
                    bFlag = true;           // space is there so make flag true
                }
            }
        }

        String output = new String(Brr);        // convert char array to string

        // output = output.trim(); 
        // not required because we have already handled leading and trailing spaces in above loop
        
        System.out.println("Updated string is : "+output);
        System.out.println("Length is : "+output.length());
    }
}