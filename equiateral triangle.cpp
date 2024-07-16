#include<iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Check the triangle is equilateral or not"<<"\n\nEnter the all sides of Triangle";
    cin>>a>>b>>c;

    (a==b&&b==c)? cout<<"\n\nTriangle is equilateral" : cout<<"\n\nTriangle is not equilateral";
    return 0;

}
