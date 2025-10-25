#include<iostream>
using namespace std;

template <class T>
void Display(T Arr[], int iLength)
{
    // Improvement 1 is also applied here
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