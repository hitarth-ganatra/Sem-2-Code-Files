// Write a program to input per day salary and number of days in a class “Salary”. Also input service tax and income tax in a class “Tax”. Design a friend function “Net_Earning” where Total Salary-Total Tax will be calculated.

#include<iostream>
using namespace std;

class Salary;
class Tax;

class Salary{
    int salary, days;
    public:
        Salary(int a, int b) : salary(a), days(b){};
        friend void net_earning(Salary s, Tax t);
};
class Tax{
    int sTax, iTax;
    public:
        Tax(int a, int b) : sTax(a), iTax(b){};
        friend void net_earning(Salary s, Tax t);
};
void net_earning(Salary s, Tax t){
    cout << "Total Salary : " << s.salary * s.days << endl;
    cout << "Total Tax : " << t.sTax + t.iTax << endl;    
}

int main(){
    Salary s(100, 20);
    Tax t(300, 200);

    net_earning(s, t);
    return 0;
}