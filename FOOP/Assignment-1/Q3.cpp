// Write a C++ program to input three numbers and display its total and average. 

#include<iostream>
using namespace std;

int main(){
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    cout << "Total: " << num1 + num2 + num3 << endl;
    cout << "Average: " << (num1 + num2 + num3) / 3;
    return 0;
}