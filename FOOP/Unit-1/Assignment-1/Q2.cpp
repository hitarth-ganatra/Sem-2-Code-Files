// WAP to find area of circle using #define

#include<iostream>
using namespace std;
#define PI 3.14


int main(){
    float radius;

    cout << "Enter the radius : ";
    cin >> radius;

    cout << "The Area of Circle with Radius " << radius << " is " << PI * radius * radius << endl;
    return 0;
}