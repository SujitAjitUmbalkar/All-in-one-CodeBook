// find AND , OR , XOR  of 2 different decimal digits  ;

#include<iostream>
using namespace std;

int main()
{
    int No1 = 13;
    int No2 = 24;

    int Ans = 0;

    Ans = No1 & No2;
    cout<<"Bitwise and : "<<Ans<<"\n";

    Ans = No1 | No2;
    cout<<"Bitwise or : "<<Ans<<"\n";
    
    Ans = No1 ^ No2;
    cout<<"Bitwise xor : "<<Ans<<"\n";

    Ans =  ~No2;
    cout<<"Bitwise or of No2 : "<<Ans<<"\n";
    
    return 0;
}