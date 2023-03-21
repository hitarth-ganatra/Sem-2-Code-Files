// Write a program to take one number from user using a member function and display the number using a friend function.

#include<iostream>
using namespace std;

class Sample{
    int num;
    public:
        void getNum(){
            cout << "Enter a number: ";
            cin >> num;
        }
        friend void displayNum(Sample);
};
void displayNum(Sample s){
    cout << "Number: " << s.num << endl;
}

int main(){
    Sample s1;
    s1.getNum();
    
    displayNum(s1);
    return 0;
}