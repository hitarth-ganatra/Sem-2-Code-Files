// WAP to create a class for student to get and print details of a student:
// Student Id, name,
// Branch, Sub1_mark, Sub2_mark, Sub3_mark, Sub4_mark, Sub5_mark
// Calculate percentage, class(Distinction, First class, second class, pass) of student

#include<iostream>
using namespace std;

class Student{
    private:
        string studentID, name, branch;
        int sub1, sub2, sub3, sub4, sub5;
        float percentage;
        string studentClass;
    public:
        int setData(string i1, string i2, string i3, int i4, int i5, int i6, int i7, int i8);
        int displayData();
        int calculatePercentage();
        int calculateClass();
};
int Student::setData(string i1, string i2, string i3, int i4, int i5, int i6, int i7, int i8){
    studentID = i1;
    name = i2;
    branch = i3;
    sub1 = i4;
    sub2 = i5;
    sub3 = i6;
    sub4 = i7;
    sub5 = i8;
}
int Student::calculatePercentage(){
    percentage = (sub1 + sub2 + sub3 + sub4 + sub5) / 5.0;
}
int Student::calculateClass(){
    if(percentage >= 80){
        studentClass = "Distinction";
    }
    else if(percentage >= 60){
        studentClass = "First Class";
    }
    else if(percentage >= 40){
        studentClass = "Second Class";
    }
    else{
        studentClass = "Pass";
    }
}
int Student::displayData(){
    cout << "Student ID: " << studentID << endl;
    cout << "Name: " << name << endl;
    cout << "Branch: " << branch << endl;
    cout << "Percentage: " << percentage << endl;
    cout << "Class: " << studentClass << endl << endl;
}

int main(){
    Student chamber, omen, neon;

    chamber.setData("22BCA064", "Chamber", "BCA", 90, 90, 90, 90, 90);
    omen.setData("22BCA080", "Omen", "BCA", 97, 95, 83, 99, 90);
    neon.setData("22BCA117", "Neon", "BCA", 70, 70, 70, 70, 70);

    chamber.calculatePercentage();
    chamber.calculateClass();

    omen.calculatePercentage();
    omen.calculateClass();

    neon.calculatePercentage();
    neon.calculateClass();

    chamber.displayData();
    omen.displayData();
    neon.displayData();
    return 0;
}