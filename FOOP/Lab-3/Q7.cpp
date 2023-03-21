// Write a program to find whether a number entered by user is odd or even using a friend function. The input must be taken using a member function defined outside the class.

#include<iostream>
using namespace std;

class Number{
    int num = 0;
    public:
        void get();
        friend void check(Number);
};
void Number::get(){
    cout << "Enter a number : ";
    cin >> num;
}
void check(Number n){
    if (n.num % 2 == 0)
    {
        cout << "The entered number is even" << endl;
    }
    else
    {
        cout << "The entered number is odd" << endl;
    }
}

int main(){
    Number n1;
    n1.get();

    check(n1);
    return 0;
}