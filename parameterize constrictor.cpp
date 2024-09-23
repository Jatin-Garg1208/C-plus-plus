#include<iostream>
using namespace std;

class square{
    int a;
  public:
  square(int n)
  {
      a=n;
      cout<<"Square of number "<<a<<" is "<<a*a<<endl;
  }
};
int main()
{
    square s1(4);
    square s2(6);
    square s3(8);
    cout<<endl<<"Jatin Garg \t 05617702023 \t BCA 3A";
    return 0;

}


