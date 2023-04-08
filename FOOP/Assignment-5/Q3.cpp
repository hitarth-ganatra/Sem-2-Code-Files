// 3.	Write a program to enter Employee ID, Employee Name in a Base class by using member function and enter Employee Department and Number of Leaves applied in a derived class. Show the data using a member function of a derived class (member function definition must be outside the class).

#include<iostream>
#include<string>
using namespace std;

class Base{
    protected:
        string ID, name;
    public:
        Base(){
            cout << "Enter ID : ";
            cin >> ID;
            cout << "Enter Name : ";
            fflush(stdin);
            getline(cin, name);
        }
};
class Derived : public Base{
    protected:
        string department;
        int leaves;
    public:
        Derived(){
            fflush(stdin);
            cout << "Enter Department : ";
            cin >> department;
            cout << "Enter Leaves : ";
            cin >> leaves;
        }
        void show();
};
void Derived :: show(){
    cout << "ID: " << ID << endl;
    cout << "Name: " << name << endl;
    cout << "Department: " << department << endl;
    cout << "Leaves: " << leaves << endl << endl;
}
int main()
{
    Derived d1;
    d1.show();
    return 0;
}