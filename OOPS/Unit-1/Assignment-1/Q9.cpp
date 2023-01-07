// WAP program to calculate N * M without using * operator

#include<iostream>
using namespace std;

int main(){
    int n, m , result = 0;
    cout << "Enter the value of N: ";
    cin >> n;
    cout << "Enter the value of M: ";
    cin >> m;
    int temp = m;
    while (m != 0)
    {
        result += n;
        m--;
    }
    
    cout << n << " * " << temp << " = " << result << endl;
    return 0;
}