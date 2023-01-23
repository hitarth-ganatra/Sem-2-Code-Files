// WAP to Find Maximum from Three numbers.(User Define Function)

#include<iostream>
using namespace std;

void find_max(int num1, int num2, int num3){
    if (num1 >= num2){
        if (num1 >= num3)
        {
            cout << num1 << " is the maximum. " << endl;
        }
        else{
            cout << num3 << " is the maximum. " << endl;
        }        
    }
    else{
        if (num2 >= num3)
        {
            cout << num2 << " is the maximum. " << endl;
        }
        else{
            cout << num3 << " is the maximum. " << endl;
        }       
    }
}

int main(){
    int a, b, c;
    cout << "Enter First Number : ";
    cin >> a;
    cout << "Enter Second Number : ";
    cin >> b;
    cout << "Enter Third Number : ";
    cin >> c;

    find_max(a, b, c);
    return 0;
}