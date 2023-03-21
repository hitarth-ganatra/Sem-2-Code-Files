#include<iostream>
using namespace std;

class Area{
    int length, breadth;
    public :
        Area(int a, int b){
            length = a;
            breadth = b;
        }
        void displayArea();
};

void Area::displayArea(){
    cout << "The Area of Rectangle is : " << length*breadth << endl;
}
int main(){
    Area sum1(10, 15);
    sum1.displayArea();
    return 0;
}