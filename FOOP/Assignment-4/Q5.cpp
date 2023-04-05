// 5.	Write a program to overload post decrement operator (obj1=obj--)

#include<iostream>
using namespace std;

class Demo{
    public:
        int count = 100;
        int operator -- (int){
            --count;
        }
        void display(){
            cout << "Count : " << count << endl;
        }
};

int main()
{
    Demo d1;
    d1.display();
    d1--;
    d1.display();
    return 0;
}
