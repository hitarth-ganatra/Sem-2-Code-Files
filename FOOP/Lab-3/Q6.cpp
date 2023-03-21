// Write a program to calculate Simple Interest using friend function. The input must be taken in a member function designed outside the class.

#include<iostream>
using namespace std;

class SimpleInterest{
    int p, r, t;
    public:
        void get();
        friend void calculate(SimpleInterest);
};
void SimpleInterest::get(){
    cout << "Enter Principal Amount : ";
    cin >> p;
    cout << "Enter Interest Rate : ";
    cin >> r;
    cout << "Enter Duration : ";
    cin >> t;
}
void calculate(SimpleInterest s1){
    cout << "Simple Interest is : " << (s1.p*s1.r*s1.t)/100 << endl;
}

int main(){
    SimpleInterest s;
    s.get();
    calculate(s);
    return 0;
}