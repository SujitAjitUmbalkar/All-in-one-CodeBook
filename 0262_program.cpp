#include<iostream>
using namespace std;

template <class T>
void Display(T Arr[], int iLength)
{
    // Improvement 1 is applied here
    cout<<"Elements are \n";

    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
}

int main()
{
    int Size = 0;

    cout<<"Enter number of elements : \n";
    cin>>Size;

    // Improvement 2: Input Validation
    if(Size <= 0)
    {
        cout << "Error: Number of elements must be positive.\n";
        return -1;
    }

    int * ptr = new int[Size];
    
    cout<<"Enter the elements : \n";
    
    // Improvement 1: 'iCnt' is declared inside the loop
    for(int iCnt = 0; iCnt < Size; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    Display(ptr,Size);
    
    delete []ptr;
    
    return 0;
}