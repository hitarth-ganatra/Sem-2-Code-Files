// 4.	Write a program to enter father salary in a base class “Father” and mother salary in a base class “Mother”. Calculate Total Salary in a derived class “Income” using multiple inheritance.

#include<iostream>
using namespace std;

class Father{
    protected:
        int sal;
    public:
        Father(){
            cout << "Enter Father's Salary : ";
            cin >> sal;
        }
};
class Mother{
    protected:
        int sal;
    public:
        Mother(){
            cout << "Enter Mother's Salary : ";
            cin >> sal;
        }
};

class Income : public Father, public Mother{
    public:
        void show(){
            cout << "Total Salary : " << Father::sal + Mother::sal << endl;
        }
};

int main()
{
    Income i1;
    i1.show();

    return 0;
}