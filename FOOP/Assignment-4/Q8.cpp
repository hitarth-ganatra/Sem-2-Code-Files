// 8.	Write program to overload = = operator to compare two object of student class

#include<iostream>
using namespace std;

class Student{
    public:
        int m1, m2, m3;
        Student(int m1, int m2, int m3){
            this->m1 = m1;
            this->m2 = m2;
            this->m3 = m3;
        }
        void operator==(Student s){
            if(this->m1 == s.m1 && this->m2 == s.m2 && this->m3 == s.m3){
                cout << "Same marks" << endl;
            }
            else{
                cout << "Different Marks" << endl;
            }
        }
};

int main()
{
    Student s1(1, 2, 3), s2(1, 2, 3), s3(4, 5, 6);
    s1 == s2;
    s1 == s3;
    
    return 0;
}