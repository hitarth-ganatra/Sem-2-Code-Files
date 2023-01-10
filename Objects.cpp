#include<iostream>
using namespace std;

class Employee{
    private:
        int age;
        string caste;
    public:
        int salary, bonus, experience;
        string name;
        void setData(int age, string caste);
        void getData();
};
void Employee::setData(int age, string caste){
    this->age = age;
    this->caste = caste;
}

void Employee::getData(){
    cout << "\nThe Name of Employee is : " << name << endl;
    cout << "The Age of Employee is : " << age << endl;
    cout << "The Cast of Employee is : " << caste << endl;
    cout << "The Experience of Employee is " << experience << " years" << endl;
    cout << "The Salary of Employee is : " << salary << endl;
    cout << "Bonus given to Employee : " << bonus << endl;
}

int main(){
    Employee manager;
    Employee salesman1;
    Employee salesman2;
    Employee boss;
    Employee worker1;
    Employee worker2;
    Employee worker3;

    boss.name = "Hitarth Ganatra";
    boss.salary = 0;
    boss.bonus = 2000000000;
    boss.experience = 10;
    boss.setData(30, "Lohana");
    boss.getData();

    manager.name = "Harsh Raichura";
    manager.salary = 5000000;
    manager.bonus = 200000;
    manager.experience = 13;
    manager.setData(32, "Lohana");
    manager.getData();

    salesman1.name = "Yash Radia";
    salesman1.salary = 2000000;
    salesman1.bonus = 50000;
    salesman1.experience = 5;
    salesman1.setData(26, "Lohana");
    salesman1.getData();

    salesman2.name = "Gaurang Pandya";
    salesman2.salary = 2100000;
    salesman2.bonus = 75000;
    salesman2.experience = 6;
    salesman2.setData(29, "Patel");
    salesman2.getData();

    worker1.name = "Daksh Jaswani";
    worker1.salary = 1000000;
    worker1.bonus = 50000;
    worker1.experience = 3;
    worker1.setData(23, "Rajput");
    worker1.getData();

    worker2.name = "Umang Maheshwari";
    worker2.salary = 1000000;
    worker2.bonus = 50000;
    worker2.experience = 3;
    worker2.setData(22, "Brahmana");
    worker2.getData();

    worker3.name = "Parth Makwana";
    worker3.salary = 1000000;
    worker3.bonus = 50000;
    worker3.experience = 3;
    worker3.setData(23, "Rajput");
    worker3.getData();
    return 0;
}