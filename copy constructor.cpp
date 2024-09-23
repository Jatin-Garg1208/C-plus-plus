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
  square(square &c)
  {
      a=c.a;
      cout<<"Value after copy: "<<a<<endl;
  }
};
int main()
{
    square s1(4);
    square s2(6);
    square s3 = s2;
    cout<<endl<<"Jatin Garg \t 05617702023 \t BCA 3A";
    return 0;

}



