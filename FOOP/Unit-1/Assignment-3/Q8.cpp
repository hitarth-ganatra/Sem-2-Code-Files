#include<iostream>
using namespace std;

class Student;
class Sport{
    public:
        friend class Student;
        int sport_mark;
        void setSportMark(int m1){
            sport_mark = m1;
        }
};
class Student{
    public:
        int rollNo, marks1, marks2, marks3;
        void setData(int rno, int m1, int m2, int m3);
        int total(Sport s1);
};
int Student::total(Sport s1){
    return (marks1 + marks2 + marks3 + s1.sport_mark);
}

void Student::setData(int rno, int m1, int m2, int m3){
    rollNo = rno;
    marks1 = m1;
    marks2 = m2;
    marks3 = m3;
}

int main()
{
    Student n1;
    Sport s1;
    s1.setSportMark(90);
    n1.setData(1, 100, 95, 98);
    int total = n1.total(s1);
    cout << total << endl;
    return 0;
}
