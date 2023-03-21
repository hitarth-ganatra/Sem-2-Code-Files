// Write a program to input one number in one class and another number in another class. Now largest of these two numbers using a friend function.

#include<iostream>
using namespace std;

class N1;
class N2;

class N1{
    int a;
    public:
        N1(int n) : a(n){};
        friend void max(N1 a, N2 b);
};
class N2{
    int a;
    public:
        N2(int n) : a(n){};
        friend void max(N1 a, N2 b);
};
void max(N1 a, N2 b){
    if(a.a > b.a){
        cout << "The maximum of both is : " << a.a << endl;
    }
    else{
        cout << "The maximum of both is : " << b.a << endl;
    }
}

int main(){
    N1 a(10);
    N2 b(20);
    max(a, b);
    return 0;
}