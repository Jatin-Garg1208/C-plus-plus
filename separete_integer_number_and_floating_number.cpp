#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float num,decimal;
    int whole;
    cout<<"Enter number: ";
    cin>>num;
    whole=floor(num);
    decimal=num-whole;
    cout<<"Original number is: "<<num<<"\nInteger part is: "<<whole<<"\nDecimal part is: "<<decimal;
    return 0;
}

