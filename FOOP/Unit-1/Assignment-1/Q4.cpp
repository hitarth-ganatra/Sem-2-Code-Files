// Write a C++ program to enter Day Temperature of 5 cities of Gujarat. Display average temperature. 

#include<iostream>
using namespace std;

int main(){
    int dayTemp1, dayTemp2, dayTemp3, dayTemp4, dayTemp5;
    cout << "Enter Day Temperature of 5 cities of Gujarat: ";
    cin >> dayTemp1 >> dayTemp2 >> dayTemp3 >> dayTemp4 >> dayTemp5;
    cout << "Average Temperature is: " << (dayTemp1 + dayTemp2 + dayTemp3 + dayTemp4 + dayTemp5) / 5;
    return 0;
}