#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int &x=num;
    cout<<"The number x is: "<<x++<<" number num is: "<<++num<<endl;
    cout<<endl<<"Jatin Garg \t 05617702023 \t BCA 3A";
    return 0;
}

