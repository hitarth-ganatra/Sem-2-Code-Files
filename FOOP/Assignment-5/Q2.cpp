// 2.	Write a program to initialize two data members i.e. height and width by using default constructor in a base class “Shape” and Calculate area of Rectangle by using a member function in a derived class “Rectangle”.

#include<iostream>
using namespace std;

class Shape{
    protected:
        int height;
        int width;
    public:
        Shape(){
            cout << "Enter height : ";
            cin >> height;
            cout << "Enter Width : " ;
            cin >> width;
        }
};
class Rectangle : public Shape{
    public:
        void area(){
            cout << "Area: " << height * width << endl;
        }
};

int main()
{
    Rectangle rect;
    rect.area();

    return 0;
}