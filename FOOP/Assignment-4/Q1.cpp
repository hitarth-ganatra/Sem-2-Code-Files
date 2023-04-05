// 1.	Write a program to swap two characters of different data types using the function overloading concept.

#include<iostream>
using namespace std;

class Swap{
    int x, y;
    char a, b;
    public:
        void swap(int x, int y){
            cout << "Before : ";
            cout << "x = " << x << " y = " << y << endl;
            int temp = x;
            x = y;
            y = temp;
            cout << "After : ";
            cout << "x = " << x << " y = " << y << endl;
        }
        void swap(char a, char b){
            cout << "Before : ";
            cout << "a = " << a << " b = " << b << endl;
            char temp = a;
            a = b;
            b = temp;
            cout << "After : ";
            cout << "a = " << a << " b = " << b << endl;
        }
};

int main(){
    Swap func, func1;
    func.swap(10, 20);
    func1.swap('A', 'B');
    return 0;
}