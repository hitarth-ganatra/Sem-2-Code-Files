// 8.	Write a C++ program to input marks of five subjects of a student and calculate total marks and percentage.

#include<iostream>
using namespace std;

int main(){
    int sub1, sub2, sub3, sub4, sub5;
    cout << "Enter marks of five subjects: ";
    cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5;
    cout << "Total Marks: " << sub1 + sub2 + sub3 + sub4 + sub5 << endl;
    cout << "Percentage: " << (sub1 + sub2 + sub3 + sub4 + sub5) / 5 << endl;
    return 0;
}