#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the number for table: ";
    int num;
    cin>>num;
    cout<<"Table of "<<num<<":"<<endl;
   for(int i=1;i<=10;i++){
     cout<<num<<" x "<<i<<" = "<<num*i<<endl;
   }
   cout<<endl<<"Jatin Garg \t 05617702023 \t BCA 3A";
    return 0;
}


