#include<stdio.h>

int main()
{
    char Arr[50]; // No need to initialize with {'\0'} if we use secure input

    printf("Enter your name : \n");
    
    // Securely read up to 49 chars, leaving room for the null terminator
    scanf("%49s", Arr);

    printf("Your name is : %s\n", Arr);

    return 0;
}

// %49s: "Read a string of up to 49 characters and add a \0." (Perfect for names).

// %49c: "Read exactly 49 raw characters and don't add anything." (Not good for standard strings).