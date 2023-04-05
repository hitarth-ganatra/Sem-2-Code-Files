// 2.	Write a program to calculate the volume of square(s*s*s), circle (4/3* pi*r*r*r), and rectangle(l*w*h) using the function overloading concept.

#include<iostream>
using namespace std;

class Area{
    public:
        void area(float s){
            cout << "The Area of Square is : " << (s*s*s) << endl;
        }
        void area(float pi, float r){
            cout << "The Area of Circle is : " << (4/3 * pi *r*r*r) << endl;
        }
        void area(float l, float w, float h){
            cout << "The Area of rectangle is : " << (l*w*h) << endl;
        }
};

int main(){
    Area square, circle, rect;
    square.area(10);
    circle.area(3.14, 10);
    rect.area(3, 4, 5);
    return 0;
}