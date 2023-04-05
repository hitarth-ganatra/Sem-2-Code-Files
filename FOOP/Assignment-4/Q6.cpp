// 6.	Write a program to overload Binary *(multiply) operator for object of same class
//   Ex. class student s1,s2,s3     s3=s1*s2

#include<iostream>
using namespace std;

class Student{
    public:
        int m1 = 0, m2 = 0, m3 = 0, m4 = 0, m5 = 0;
        Student(int m1, int m2, int m3, int m4, int m5){
            this->m1 = m1;
            this->m2 = m2;
            this->m3 = m3;
            this->m4 = m4;
            this->m5 = m5;
        }
        Student operator*(Student s){
            Student temp(0, 0, 0, 0, 0);
            temp.m1 = this->m1 * s.m1;
            temp.m2 = this->m2 * s.m2;
            temp.m3 = this->m3 * s.m3;
            temp.m4 = this->m4 * s.m4;
            temp.m5 = this->m5 * s.m5;
            return temp;
        }
        void display(){
            cout << "m1 = " << m1 << endl;
            cout << "m2 = " << m2 << endl;
            cout << "m3 = " << m3 << endl;
            cout << "m4 = " << m4 << endl;
            cout << "m5 = " << m5 << endl;
        }
};

int main(){
    Student s1(1, 2, 3, 4, 5), s2(6, 7, 8, 9, 10), s3(0,0,0,0,0);
    s3 = s1 * s2;

    s3.display();
    return 0;
}

