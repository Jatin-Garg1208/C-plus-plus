#include<iostream>
#include<string>
using namespace std;

class employee
{
private:
    int a,b,c;
public:
    int d,e;
    void setdata(int a1, int b1, int c1); // declare the function
    void getdata()
    {
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
};

class fruit
{
private:
   string color;
   string name;
public:
    void setdata(string color1, string name1)
    {
        color=color1;
        name=name1;
    }
    void getdata()
    {
        cout<<"The color of fruit is "<<color<<endl;
        cout<<"The name of fruit is "<<name<<endl;
    }
};

void employee ::setdata(int a1, int b1, int c1)
{
    a=a1;
    b=b1;
    c=c1;
}
int main()
{
    employee Jatin;
    Jatin.d=54;
    Jatin.e=69;
    // Jatin.a=65; this show an error because a is private it is use by its own function
    Jatin.setdata(12,98,35);
    Jatin.getdata();
    fruit myfruit;
    myfruit.setdata("Red","Apple");
    myfruit.getdata();
    myfruit.setdata("Yellow","Mango");
    myfruit.getdata();
    return 0;
}
