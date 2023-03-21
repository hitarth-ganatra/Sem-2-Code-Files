#include<iostream>
using namespace std;

class Employee{
    int salary;
    public:
        static int empcode;
        string name;
        Employee(string n, int s){
            name = n;
            salary = s;
            empcode++;
        }
        void display(){
            cout << "Empcode : " << empcode << endl;
            cout << "Employee Name : " << name << endl;
            cout << "Salary : " << salary << endl << endl;
        }
};
int Employee::empcode = 0;
int main(){
    Employee e1("E1", 1000);
    e1.display();
    Employee e2("E2", 2000);
    e2.display();
    Employee e3("E3", 3000);
    e3.display();
    return 0;
}