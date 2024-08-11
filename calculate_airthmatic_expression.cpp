#include<iostream>
using namespace std;

int main()
{
    int A,U,T,S=0;
    cout<<"Enter number A: ";
    cin>>A;
    cout<<"Enter number U: ";
    cin>>U;
    cout<<"Enter number T: ";
    cin>>T;
    S = ((U*T)+(0.5*A*T*T));
    cout<<"The calculation of number "<<A<<" , "<<U<<" and "<<T<<" is "<<S;
    return 0;
}

