// WAP to crate a class for Employee to get and display following Employee information for 5 Employees using Array of Object

#include<iostream>
using namespace std;

class Employee{
    private:
        int empcode, salary, income_tax, netsalary;
    public:
        int da = 0, hra = 0, ta = 500;
        int setData(int code, int sal){
            empcode = code;
            salary = sal; 
        }
        int calculations();
        int calculateTax();
        int netSalary();
        int displayData();
};
int Employee::calculations(){
    da = salary + (salary * 0.74);
    hra = (salary * 0.1);
}
int Employee::calculateTax(){
    calculations();
    if (salary > 50000)
    {
        income_tax = salary * 0.05;
    }
    else{
        income_tax = 0;
    }
}
int Employee::netSalary(){
    calculateTax();
    netsalary = (salary + da + hra + ta) - income_tax;
}
int Employee::displayData(){
    netSalary();
    cout << "Employee Code : " << empcode << endl;
    cout << "Salary : " << salary << endl;
    cout << "Income Tax : " << income_tax << endl;
    cout << "Net Salary : " << netsalary << endl << endl;
}

int main(){
    Employee managers[5];
    
    for (int i = 0; i < 5; i++)
    {
        managers[i].setData(i+1, ((i+1)*55000));
        managers[i].displayData();
    }
    
    return 0;
}