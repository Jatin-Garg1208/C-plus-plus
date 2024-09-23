#include <iostream>
using namespace std;
class squ{
    int square;
    public:
        squ(int n){
            square = n*n;
            cout << "Square is :" << square << endl;
        }
        friend void quad(squ &c);
};
void quad(squ &c){
    int quad = c.square*c.square;
    cout << "Ouad is : " << quad << endl;
}

int main() {
    squ c1(5);
    quad(c1);
    cout <<endl<<"Jatin GArg \t05617702023 \t BCA 3A";
    return 0;
}
