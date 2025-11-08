#include<iostream>
using namespace std;

// Call by reference
void Swap(int &No1, int &No2)
{
    int temp = 0;

    temp = No1;
    No1 = No2;
    No2 = temp;
}

int main()
{
    int a = 10, b = 11;
   
    Swap(a,b);

    cout<<"Value of a : "<<a<<"\n";
    cout<<"Value of b : "<<b<<"\n";
    
    return 0;
}


// It does the exact same thing as Call by Address (permanent changes), but it's cleaner:

// No pointers: You don't have to deal with * and & everywhere.

// Easier to read: It looks just like normal variables.

// Safer: References cannot be NULL (empty), whereas pointers can be, which can cause crashes.