// WAP to check whether the entered number is prime or not. 

#include<iostream>
using namespace std;

int main(){
    int num, i, flag = 0;

    cout << "Enter a number : ";
    cin >> num;

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            flag++;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "The number " << num << " is PRIME Number" << endl;
    }
    else{
        cout << "The number " << num << " is NOT A PRIME Numer" << endl;
    }
    
    return 0;
}