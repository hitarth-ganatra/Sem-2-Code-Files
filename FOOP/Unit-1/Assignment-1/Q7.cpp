// Write a C++ program to read two numbers from user and print their addition, subtraction, multiplication and division on screen.

#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter First Number: ";
    cin >> a;
    cout << "Enter Second Number: ";
    cin >> b;
    cout << "The sum of " << a << " and " << b << " is " << a + b << endl;
    cout << "The difference of " << a << " and " << b << " is " << a - b << endl;
    cout << "The multiplication of " << a << " and " << b << " is " << a * b << endl;
    cout << "The division of " << a << " and " << b << " is " << a / b << endl;
    return 0;
}