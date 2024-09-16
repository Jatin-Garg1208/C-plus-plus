#include<iostream>
using namespace std;

class comple{
int real,imag;
public:
    void getdata();
    void sum(comple c1,comple c2);
    void display();
};
void comple::getdata()
{
    cout<<"Enter real number: ";
    cin>>real;
    cout<<"Enter imaginary number: ";
    cin>>imag;
}
void comple::sum(comple c1,comple c2)
{
    real=c1.real+c2.real;
    imag=c1.imag+c2.imag;
}
void comple::display()
{
    cout<<"Complex number: "<<real<<"+i"<<imag<<endl;
}
int main()
{
    comple c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3.sum(c1,c2);
    c1.display();
    c2.display();
    cout<<"Complex number after adding: ";
    c3.display();
    cout<<endl<<"Jatin Garg \t 05617702023 \t BCA 3A";
}
