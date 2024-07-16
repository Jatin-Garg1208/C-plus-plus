#include <iostream>

using namespace std;
int main()
{
    int cost,quantity,amount;
    float discount,net_amount;
    cout<<" Enter the cost and quantity of the product :";
    cin>>cost>>quantity;
    amount= cost*quantity;
    cout<<"\nAmount is :"<<amount<<"\n\nEnter the discount :";
    cin>>discount;
    net_amount=amount-(amount*discount)/100;
    cout<<"\n\nNet amount is"<<net_amount;
    return 0;
}
