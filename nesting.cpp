#include<iostream>
#include<string>
using namespace std;

class binary
{
    string s;
public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void binary :: read(void)
{
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}
void binary :: chk_bin(void)
{
    for(int i = 0; i<s.length(); i++)
    {
        if(s.at(i)!='1' && s.at(i)!='0')
        {
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }
    cout<<"Correct binary format"<<endl;
    cout<<"Displaying your binary number"<<endl;
    display();
}
void binary :: ones_compliment(void)
{
    chk_bin();
    for(int i = 0; i<s.length(); i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else
        {
            s.at(i)='0';
        }
    }
    cout<<"Displaying your binary number after one's compliment"<<endl;
    display();
}

void binary :: display(void)
{
    for(int i = 0; i<s.length(); i++)
    {
        cout<<s.at(i);

    }
    cout<<endl;
}
int main()
{
    binary b;
    b.read();
    b.ones_compliment();
    return 0;
}

