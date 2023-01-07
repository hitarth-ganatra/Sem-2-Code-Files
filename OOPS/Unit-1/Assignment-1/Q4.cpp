// WAP to check whether given number is Armstrong or not.

#include<iostream>
using namespace std;

int main(){
    int num, sum = 0, temp, rem;

    cout << "Enter a number : ";
    cin >> num;

    temp = num;
    while (temp != 0)
    {
        rem = temp % 10;
        sum += (rem * rem * rem);
        temp /= 10;
    }

    if (sum == num)
    {
        cout << "The number " << num << " is an ARMSTRONG NUMBER" << endl;
    }
    else{
        cout << "The number " << num << " is NOT AN ARMSTRONG NUMBER" << endl;
    }
        
    return 0;
}