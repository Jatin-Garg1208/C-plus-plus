#include<iostream>
using namespace std;

int main()
{
    int choice, num1, num2;
    char cont;
    do
    {
        cout << "Enter any two numbers for applying the operators: ";
        cin >> num1 >> num2;
        cout << "Enter the number of operator: ";
        cout << "1) +\n2) -\n3) * \n4) / \n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Sum is " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Difference is " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Product is " << num1 * num2 << endl;
            break;
        case 4:
            if (num2 != 0)
                cout << "Quotient is " << num1 / num2 << endl;
            else
            cout << "Error: Division by zero is not allowed.\n";
            break;
        default:
            cout << "Invalid choice entered\n";
        }
        cout << "Do you want to perform another operation? (y/n): ";
        cin >> cont;
    }
    while (cont == 'y' || cont == 'Y');
     cout<<endl<<"Jatin Garg \t 05617702023 \t BCA 3A";
    return 0;
}

