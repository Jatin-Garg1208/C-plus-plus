#include<iostream>
using namespace std;

int main()
{
  int num[]={4,9,6};
  int target = 10;
  int size = sizeof(num)/ sizeof(num[0]);
  for(int i=0;i<size;i++)
  {
      for(int j=i+1;j<size;j++)
      {
          if(num[i]+num[j]== target)
            cout<<i+1<<" "<<j+1;
      }
  }
  return 0;
}
