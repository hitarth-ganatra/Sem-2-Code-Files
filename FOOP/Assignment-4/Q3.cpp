// 3.	Write a program to overload unary minus operator

#include<iostream>
using namespace std;

class Demo{
    public:
        int a, b, c;
        Demo(int a, int b, int c){
            this-> a = a;
            this-> b = b;
            this-> c = c;
        }
        int operator - (){
            a = -a;
            b = -b;
            c = -c;
        }
        void display();
};

void Demo :: display (){
    cout << "A : " << a << endl;
    cout << "B : " << b << endl;
    cout << "C : " << c << endl << endl;
}

int main()
{
    Demo d1(10, -20, 30);
    d1.display();
    -d1;
    d1.display();
    return 0;
}
