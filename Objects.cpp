#include<iostream>
using namespace std;

inline int product(int a, int b){
    static int num = 0;
    num++;
    return num;
}
int main(){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "The product of " << a << " and " << b << " is " << product(a, b) << endl;
    cout << "The product of " << a << " and " << b << " is " << product(a, b) << endl;
    cout << "The product of " << a << " and " << b << " is " << product(a, b) << endl;
    cout << "The product of " << a << " and " << b << " is " << product(a, b) << endl;
    return 0;
}