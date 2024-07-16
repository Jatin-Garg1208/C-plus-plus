#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    float a,b,c,s,area;
    cout<<"Enter the sides of triangle\n\n";
    cin>>a>>b>>c;
     s = (a+b+c)/2;
    area= sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"The Area of triangle is \n\n"<<area;
    return 0;

}
