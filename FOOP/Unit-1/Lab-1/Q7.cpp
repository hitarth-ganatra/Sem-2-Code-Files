// WAP to find maximum element from 1-dimensional array

#include<iostream>
using namespace std;

int main(){
    int arr[5] = {34, 56, 12, 89, 78}, i, max = 0;

    for (i = 0; i < 4; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "The maximum number of array is : " << max << endl;
    
    return 0;
}