#include<iostream>
using namespace std;
int main()
{
    int  digit=0,num,rev=0;
    cout<<"Enter number: ";
    cin>>num;
    while(num!=0)
    {
        digit = num % 10;
        rev = rev*10+digit;
        num=num/10;
    }
    cout<<rev;
}
