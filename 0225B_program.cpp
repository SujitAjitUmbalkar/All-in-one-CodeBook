#include <iostream>
#include <fcntl.h>
#include <unistd.h>
#include <string.h> // Required for strlen()

using namespace std;

int main()
{
    const char* filename = "file2.txt";
    int fd = 0;

    // --- First, create the file and write initial data ---
    fd = creat(filename, 0644);
    write(fd, "This is the original data.", 26);
    close(fd);
    
    cout << "Note 2: 'file2.txt' created with original data." << endl;

    // --- Note 2: Call creat() again on the same file ---
    // This call will erase (truncate) the "original data".
    fd = creat(filename, 0644); 
    
    cout << "Called creat() on 'file2.txt' a second time." << endl;
    
    write(fd, "This new data erased the old.", 29);
    close(fd);

    cout << "File was truncated and overwritten." << endl;
    cout << "Check 'file2.txt' to see only the new data." << endl;

    return 0;
}
