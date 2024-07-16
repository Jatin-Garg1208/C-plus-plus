#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    float alt,base,hyp;
    cout<<"Enter the length of base\n\n";
    cin>>base;
    cout<<"Enter the length of altitude\n\n";
    cin>>alt;

    hyp= sqrt(pow(base,2)+pow(alt,2));
    cout<<"The hypotenuse is \n\n"<<hyp;
    return 0;

}
