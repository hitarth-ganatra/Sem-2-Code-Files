// WAP to crate a class for student to get and print details of a student i.e. Student ID, Name, Semester, Branch

#include<iostream>
using namespace std;

class Student{
    private:
        string studentID, name, branch;
        int semester;
    public:
        int setData(string i1, string i2, int i3, string i4);
        int displayData();
};
int Student::setData(string i1, string i2, int i3, string i4){
    studentID = i1;
    name = i2;
    semester = i3;
    branch = i4;
}
int Student::displayData(){
    cout << "Student ID : " << studentID << endl;
    cout << "Name : " << name << endl;
    cout << "Semester : " << semester << endl;
    cout << "Branch : " << branch << endl << endl;
}

int main(){
    Student cypher, reyna, killjoy;
    cypher.setData("22BCA064", "Cypher", 2, "BCA");
    reyna.setData("22BCA080", "Reyna", 2, "BCA");
    killjoy.setData("22BCA117", "Killjoy", 2, "BCA");
    cypher.displayData();
    reyna.displayData();
    killjoy.displayData();
    return 0;
}