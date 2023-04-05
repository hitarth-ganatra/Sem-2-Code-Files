// 9.	Write program to overload > operator and find greater object for above program.

#include<iostream>
using namespace std;

class Demo{
    public:
        int num;
        Demo(int num){
            this->num = num;
        }
        void operator>(Demo d){
            if(this->num > d.num){
                cout << "Greater" << endl;
            }
            else{
                cout << "Smaller" << endl;    
            }
        }
};

int main()
{
    Demo d1(199), d2(70);
    d1 > d2;
    return 0;
}