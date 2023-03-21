// WAP to print the area of rectangle by creating class named 'Area' having two functions. First function named as 'setDim' takes the length and breadth of rectangle as parameters and the second function named as 'getArea' returns the area of rectangle. Length and Breadth of the rectangle are entered through keyboard. 

#include<iostream>
using namespace std;

class Area{
    private:
        int length, breadth;
    public:
        void setDim(int l, int b){
            length = l;
            breadth = b;
        }
        int getArea(){
            return length * breadth;
        }
};

int main(){
    Area a;
    int l, b;
    cout << "Enter the length and breadth of the rectangle: ";
    cin >> l >> b;
    
    a.setDim(l, b);
    cout << "Area of the rectangle is: " << a.getArea() << endl;
    return 0;
}