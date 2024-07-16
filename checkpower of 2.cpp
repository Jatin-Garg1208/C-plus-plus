#include<iostream>
#include<math.h>
using namespace std;
bool check(int n)
{
    int i;
    for(i=0;i<31;i++)
    {
        if(pow(2,i)==n)
        {
            return true;

        }
    }
        return false;
}
int main()
{
    int n,chck;
    cin>>n;
    chck = check(n);
    cout<<chck;
    return 0;
}
