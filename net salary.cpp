#include<iostream>
using namespace std;
int main()
{

    float bsalary,hra,da,pf,net_salary;
    cout<<"Enter the basic salary :";
    cin>> bsalary;

    hra= 30*bsalary/100;
    da= 25*bsalary/100;
    pf= 10*bsalary/100;
    net_salary= bsalary+hra+ da- pf;

    cout<<"\nHRA is"<<hra<<"\nDA is"<<da<<"\nPF is"<<pf<<"\n\n Net Salary is"<<net_salary;
    return 0;


}
