// 1.	Write a program to input one number in a base class and one number in a derived class. Perform basic arithmetic operations by using a member function in a derived class.

#include<iostream>
using namespace std;

class Base{
    protected:
        int num1;
    public:
        void getNum1(){
            cout << "Enter a number: ";
            cin >> num1;
        }
};
class Derived : public Base{
    protected:
        int num2;
    public:
        void getNum2(){
            cout << "Enter a number: ";
            cin >> num2;
        }
        void add(){
            cout << "Sum: " << num1 + num2 << endl;
        }
        void sub(){
            cout << "Difference: " << num1 - num2 << endl;
        }
        void mul(){
            cout << "Product: " << num1 * num2 << endl;
        }
        void div(){
            cout << "Quotient: " << num1 / num2 << endl;
        }
};

int main()
{
    Derived d;
    d.getNum1();
    d.getNum2();
    d.add();
    d.sub();
    d.mul();
    d.div();
    return 0;
}