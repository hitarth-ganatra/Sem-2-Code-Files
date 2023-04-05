// 7.	Write a program to overload Binary * (multiply) operator for object of different class

#include<iostream>
using namespace std;

class PT;

class UT{
    public:
        int m1, m2, m3;
        UT(int m1, int m2, int m3){
            this->m1 = m1;
            this->m2 = m2;
            this->m3 = m3;
        }
        friend UT operator + (PT a);
        void display(){
            cout << "m1 = " << m1 << endl;
            cout << "m2 = " << m2 << endl;
            cout << "m3 = " << m3 << endl << endl;
        }
};
class PT{
    public:
        int m1, m2, m3;
        PT(int m1, int m2, int m3){
            this->m1 = m1;
            this->m2 = m2;
            this->m3 = m3;
        }
        void display(){
            cout << "m1 = " << m1 << endl;
            cout << "m2 = " << m2 << endl;
            cout << "m3 = " << m3 << endl;
        }
};
UT operator + (UT a, PT b){
    UT temp(0, 0, 0);
    temp.m1 = a.m1 + b.m1;
    temp.m2 = a.m2 + b.m2;
    temp.m3 = a.m3 + b.m3;
    return temp;
}


int main()
{
    UT u1(1, 2, 3), u2(4, 5, 6);
    PT p1(7, 8, 9), p2(10, 11, 12);

    UT result1 = u1 + p1;
    result1.display();
    UT result2 = u2 + p2;
    result2.display();
    return 0;
}