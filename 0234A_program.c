#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    char Fname[20] = {'\0'};
    int fd = 0, iRet = 0;
    
    char Buffer[1024] = {'\0'};

    printf("Enter the file name that you want to open : \n");
    scanf("%s",Fname);

    // 2. CRITICAL: Consume the newline left by scanf.
    // This stops the next scanf from reading an empty line.
    fgetc(stdin);

    printf("Enter the data you want to write into the file:\n");
    
    scanf("%[^\n]", Buffer);

    fd = open(Fname, O_WRONLY | O_CREAT | O_TRUNC, 0777);
    
    if(fd == -1)
    {
        printf("Unable to open or create file\n");
        return 1;
    }
    else
    {
        printf("File is succesfully opened with fd : %d\n",fd);
        
        iRet = write(fd,Buffer,strlen(Buffer));

        printf("%d bytes gets written sucessfully\n",iRet);
        
        close(fd);
    }

    return 0;
}