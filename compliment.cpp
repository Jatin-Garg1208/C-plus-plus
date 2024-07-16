#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,bit=0,m=0,answer=0,mask=0;
    cout<<"Enter number to convert decimal to binary: ";
    cin >> n;
    m=n;
    if(n==0)
        return 1;
    while(m!=0)
    {
        mask = (mask<<1)| 1;
        m=m>>1;
    }
   answer=(~n)&mask;
   cout<< answer<<endl;

  return 0;
}
