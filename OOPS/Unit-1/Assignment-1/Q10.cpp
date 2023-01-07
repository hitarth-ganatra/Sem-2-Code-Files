// WAP to check given number is magic number or not

#include<iostream>
using namespace std;

int main(){
    int num, sum = 0, rem, temp, reverse = 0;
    cout << "Enter a number : ";
    cin >> num;
    temp = num;

    while (temp > 0)
    {
        rem = temp % 10;
        sum += rem;
        temp /= 10;   
    }
    
    temp = sum;
    while (temp > 0)
    {
        rem = temp % 10;
        reverse = (reverse*10) + rem;
        temp /= 10;
    }

    if (sum * reverse == num)
    {
        cout << num << " is a MAGIC NUMBER";
    }
    else{
        cout << num << " is not a MAGIC NUMBER";
    }    
    return 0;
}