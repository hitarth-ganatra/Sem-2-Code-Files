#include<iostream>
using namespace std;


class Calculation{
    int num1, num2;
    public :
        Calculation(int a, int b);
        void addition();
        void subtraction();
        void multiplication();
        void division();
        void do_all(){
            addition();
            subtraction();
            multiplication();
            division();
        }
};

Calculation::Calculation(int a, int b){
    num1 = a;
    num2 = b;
}
void Calculation::addition(){
    cout << "The addition of " << num1 << " and " << num2 << " is " << num1 + num2 << endl;
}
void Calculation::subtraction(){
    cout << "The subtraction of " << num1 << " and " << num2 << " is " << num1 - num2 << endl;
}
void Calculation::multiplication(){
    cout << "The multiplication of " << num1 << " and " << num2 << " is " << num1 * num2 << endl;
}
void Calculation::division(){
    cout << "The division of " << num1 << " and " << num2 << " is " << (float)num1 / num2 << endl;
}

int main(){
    Calculation c1(10, 3);
    c1.do_all();
    return 0;
}