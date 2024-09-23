#include <iostream>
using namespace std;
class squ{
    int square;
    public:
        squ(int n){
            square = n*n;
            cout << "Square is :" << square << endl;
        }
        friend class quad;
};
class quad{
    int quadruple;
    public:
        quad(squ &c){
            quadruple = c.square*c.square;
        }
        void display(){
            cout << "Ouad is : " << quadruple << endl;
        }
};

int main() {
    squ c1(5);
    quad c2(c1);
    c2.display();
    cout <<endl<<"Jatin GArg \t05617702023 \t BCA 3A";
    return 0;
}

