// WAP to find area of circle using class

#include<iostream>
using namespace std;
#define PI 3.14

class Area{
    private:
        float radius;
    public:
        Area(float r){
            radius = r;
        }
        float getArea(){
            return PI * radius * radius;
        }
};

int main(){
    float r;
    cout << "Enter radius of circle: ";
    cin >> r;

    Area a(r);
    cout << "Area of circle is: " << a.getArea() << endl;
    return 0;
}