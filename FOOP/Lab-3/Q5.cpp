// Write a program to input three numbers in a member function and display maximum number using friend function.

#include<iostream>
using namespace std;

class Numbers{
    int a, b, c;
    public:
        void get(int x, int y, int z){
            a = x;
            b = y;
            c = z;
        }
        friend void findMax(Numbers);
};
void findMax(Numbers n){
    if (n.a>n.b)
    {
        if (n.a>n.c)
        {
            cout << "The maximum number is : " << n.a << endl;
        }
        else
        {
            cout << "The maximum number is : " << n.c << endl;
        }        
    }
    else
    {
        if (n.b>n.c)
        {
            cout << "The maximum number is : " << n.b << endl;
        }
        else
        {
            cout << "The maximum number is : " << n.c << endl;
        }
    }
};

int main(){
    Numbers n1;
    n1.get(71, 73, 70);
    findMax(n1);
    return 0;
}