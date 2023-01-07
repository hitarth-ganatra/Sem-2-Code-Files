// WAP to display addition, subtraction, multiplication and division of two integers on screen.  

#include<iostream>
using namespace std;

int main(){
    int choice, a, b;

    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division\n" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter First Number: ";
    cin >> a;

    cout << "Enter Second Number: ";
    cin >> b;
    switch (choice)
    {
    case 1:
        cout << "The sum of " << a << " and " << b << " is " << a + b << endl;
        break;    
    case 2:
        cout << "The difference of " << a << " and " << b << " is " << a - b << endl;
        break;
    case 3:
        cout << "The multiplication of " << a << " and " << b << " is " << a * b << endl;
        break;
    case 4:
        cout << "The division of " << a << " and " << b << " is " << a / b << endl;
        break;
    default:
        cout << "Please Enter Correct Option !!!" << endl;
        break;
    }
    return 0;
}