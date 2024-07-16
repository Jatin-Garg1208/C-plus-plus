#include<iostream>

using namespace std;

int main()
{
    int amt,cost,qty,dis,namt;
    cout<<"\nEnter the cost and quantity";
    cin>>cost>>qty;
amt= cost*qty;
    if(amt>=1000)
    {
        dis= 10*amt/100;
        cout<<" \n\n discount is "<<dis;
    }
    else
    {
        dis=0;
        cout<<"\n\ndiscount is "<<dis;
    }
    namt= amt-dis;
    cout<<"\n\nNet amount is "<<namt<<endl;

    return 0;

}

