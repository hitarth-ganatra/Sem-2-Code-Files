// Write a program to input Student Name, Student ID, Branch and Semester for Class Student and display the details of 3 students.

#include<iostream>
using namespace std;

class Student{
    string name, ID, Branch;
    int sem;
    public:
        void getDetails(){
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter ID: ";
            fflush(stdin);
            cin >> ID;
            cout << "Enter Branch: ";
            cin >> Branch;
            cout << "Enter Semester: ";
            cin >> sem;
        }
        void displayDetails(){
            cout << endl << "Name: " << name << endl;
            cout << "ID: " << ID << endl;
            cout << "Branch: " << Branch << endl;
            cout << "Semester: " << sem << endl<< endl;
        }
};

int main(){
    Student s[3];
    for(int i=0; i<3; i++){
        cout << "Enter details of Student " << i+1 << endl;
        s[i].getDetails();
    }
    for(int i=0; i<3; i++){
        s[i].displayDetails();
    }
    return 0;
}