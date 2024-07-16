#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,bit=0,answer=0,i=0;
    cout<<"Enter number to convert decimal to binary: ";
    cin >> n;
    while(n!=0)
    {
        bit = n&1;
        n=n>>1;
        answer= (bit*pow(10,i))+answer;
        i++;
    }
   cout<< answer<<endl;

   int d,digit=0;
   i = 0;
   answer = 0;
   cin >> d;
   while(d!=0)
   {
       digit = d % 10;
       answer = (pow(2,i)*digit)+answer;
       d=d/10;
       i++;
   }
   cout<<answer;
}
