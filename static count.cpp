#include<iostream>
using namespace std;

class counter{
    int number;
static int coun;
public:
    void getdata(int n)
    {
        number =n;
        coun++;
    }
    void display()
    {

        cout<<"The total number of objects are: "<<coun<<endl;
    }
};
int counter::coun;
int main()
{
    counter c1,c2,c3;
    c1.display();
    c2.display();
    c3.display();
    c1.getdata(10);
    c2.getdata(20);
    c1.display();
    c3.getdata(30);
     c2.display();
    c3.display();
    cout<<endl<<"Jatin Garg \t 05617702023 \t BCA 3A";
    return 0;

}
