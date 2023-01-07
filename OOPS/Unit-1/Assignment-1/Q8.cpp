// WAP to Find Sum of array elements.

#include<iostream>
using namespace std;

int main(){
    int arr[5] = {12, 45, 34 ,78, 32}, i, sum = 0;

    for (i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    cout << "The sum of all the elements of array is: " << sum << endl;
    
    return 0;
}