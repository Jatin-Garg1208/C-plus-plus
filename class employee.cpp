#include<iostream>
using namespace std;

class employee{
string name;
int age;
string address;
public:
    void getdata()
    {
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the age: ";
        cin>>age;
        cout<<"Enter the address: ";
        cin>>address;
    }
    void showdata();
};

void employee::showdata(){
    cout<<"Employee:"<<endl<<"Name = "<<name<<endl<<"Age = "<<age<<endl<<"Address = "<<address<<endl;
}

int main()
{
    employee a,b;
    a.getdata();
    b.getdata();
    a.showdata();
    b.showdata();
    cout<<endl<<"Jatin Garg \t 05617702023 \t BCA 3A";
    return 0;
}

