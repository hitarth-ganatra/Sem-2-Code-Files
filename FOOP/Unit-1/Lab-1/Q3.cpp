// WAP to check whether the entered number is even or odd

#include<iostream>
using namespace std;

int main(){
    int num;

    cout << "Enter the number: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "The number " << num << " is EVEN" << endl;
    }
    else{
        cout << "The number " << num << " is ODD" << endl;
    }
    
    return 0;
}