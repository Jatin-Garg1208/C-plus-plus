#include<iostream>
using namespace std;

float sum(float a,int b)
{
    cout<<endl<<"Using function with 2 arguments"<<endl;
    return a+b;
}
int sum(int a,int b,int c)
{
    cout<<endl<<"Using function with 3 arguments"<<endl;
    return a+b+c;
}
int volume(int r, int h)
{
    return(3.14*r*r*h);
}
int volume(int a)
{
    return(a*a*a);
}
int volume(int l,int b, int h)
{
    return(l*b*h);
}
int main(){
 cout<<"The sum of 3 and 6 "<<sum(6.0,3)<<endl;
 cout<<"The sum of 3,7 and 6 "<<sum(3,7,6)<<endl;
 cout<<"The volume of cylinder of radius 6 and height 3 is "<<endl<<volume(6,3)<<endl;
 cout<<"The volume of cube of side 6 is "<<endl<<volume(6)<<endl;
 cout<<"The volume of cuboid of 6 , 3 and 5 is "<<endl<<volume(6,3,5)<<endl;
 return 0;
}
