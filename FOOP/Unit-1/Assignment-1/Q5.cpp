// Write a C++ program to find simple interest

#include<iostream>
using namespace std;

int main(){
    int p, r, t;
    cout << "Enter Principal, Rate and Time: ";
    cin >> p >> r >> t;
    cout << "Simple Interest is: " << (p * r * t) / 100;
    return 0;
}