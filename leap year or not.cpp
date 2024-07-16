#include<iostream>

using namespace std;

int main()
{
    int year;
    cout<<"Enter the year";
    cin>>year;

    (year % 4 ==0)? cout<<"It is leap year" : cout<<"It is not a leap year";
    return 0;
}
