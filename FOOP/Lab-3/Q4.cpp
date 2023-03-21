// Write a program to input price of two products in a member function and display total bill amount in a friend function.

#include<iostream>
using namespace std;

class Prices{
    int price1, price2;
    public:
        void getPrices(){
            cout << "Enter Prices of both the products : ";
            cin >> price1 >> price2;
        }
        friend void totalBill(Prices);
};
void totalBill(Prices p){
    cout << "Total Bill is : " << p.price1 + p.price2 << endl;
}

int main(){
    Prices wheat;
    wheat.getPrices();

    totalBill(wheat);
    return 0;
}
