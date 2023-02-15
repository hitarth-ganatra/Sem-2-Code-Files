// WAP to display addition, subtraction, multiplication and division of two integers on screen  
// Declare Class Calculation
// Declare data member num1 and num2 in private section
// Write member function for initialize num1 and num2
// Write member function for each operation

#include<iostream>
using namespace std;

class Calculation{
    private:
        int num1, num2;
    public:
        int getData(int n1, int n2);
        int add();
        int sub();
        int mul();
        float div();
};

int Calculation::getData(int n1, int n2){
    num1 = n1;
    num2 = n2;
}
int Calculation::add(){
    return num1 + num2;
}
int Calculation::sub(){
    return num1 - num2;
}
int Calculation::mul(){
    return num1 * num2;
}
float Calculation::div(){
    float result;
    result = (float)num1/num2;
    return result;
}
int main(){
    Calculation q1;
    int n1, n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    q1.getData(n1, n2);
    cout << "Addition: " << q1.add() << endl;
    cout << "Subtraction: " << q1.sub() << endl;
    cout << "Multiplication: " << q1.mul() << endl;
    cout << "Division: " << q1.div() << endl;
    return 0;
}