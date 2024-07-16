#include<iostream>

using namespace std;

int main()
{
    int cls, per;
    cout<<"Enter the Class and percentange";
    cin>>cls>>per;

    (cls ==10||cls==12)?((per>=90)?cout<<"Scholarship is granted":cout<<"not granted") : cout<<"Not eligible";
    return 0;
}
