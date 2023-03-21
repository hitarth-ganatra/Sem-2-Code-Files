// Write a program to input one number in one class and another number in another class. Now make summation of these two numbers using a friend function.

#include<iostream>
using namespace std;

class N1;
class N2;

class N1{
    int a;
    public:
        N1(int n) : a(n){};
        friend void sum(N1 a, N2 b);
};
class N2{
    int a;
    public:
        N2(int n) : a(n){};
        friend void sum(N1 a, N2 b);
};
void sum(N1 a, N2 b){
    cout << "The sum of both the numbers is : " << a.a + b.a << endl;
}

int main(){
    N1 a(10);
    N2 b(20);
    sum(a, b);
    return 0;
}