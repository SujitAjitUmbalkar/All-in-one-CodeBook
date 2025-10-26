#include <iostream>
#include <fcntl.h>  // Required for creat() and 0644
#include <unistd.h> // Required for close()

using namespace std;

int main()
{
    const char* filename = "file1.txt";
    int fd = 0;

    // We use 0644 for permissions (user can read/write, others can read)
    fd = creat(filename, 0644);

    if(fd == -1)
    {
        cout << "Note 1: Failed to create file." << endl;
    }
    else
    {
        // Note 1: It returns a file descriptor (a number)
        cout << "Note 1: File 'file1.txt' created successfully." << endl;
        cout << "The returned file descriptor (fd) is: " << fd << endl;
        
        // We must close the file descriptor when done
        close(fd);
    }
    
    return 0;
}

