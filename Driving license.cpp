#include<iostream>

using namespace std;

int main()
{
    int age;
    cout<<"Check that candidate is qualify for driving test"<<"\n\nEnter the age";
    cin>>age;

    (age>=18)?cout<<"\n\n candidate is qualify for driving test":cout<<"Candidate comes after 18";
    return 0;
}
