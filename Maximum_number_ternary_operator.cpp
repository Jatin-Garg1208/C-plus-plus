#include<iostream>
using namespace std;

int main()
{
    int max_num,num1, num2;
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;
    max_num=(num1>num2)? num1 : num2;
    cout<<"Maximum number from "<<num1<<" and "<<num2<<" is "<<max_num;
    return 0;
}
