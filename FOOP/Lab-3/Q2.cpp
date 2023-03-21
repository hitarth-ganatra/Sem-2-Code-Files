// Write a program to input Item Name, Lot number, Quantity and Price for Class Item and display the details. (Use array of objects)

#include<iostream>
using namespace std;

class Item{
    string name;
    int lotNo, qty, price;
    public:
        void getDetails(){
            cout << "Enter Item Name: ";
            cin >> name;
            cout << "Enter Lot Number: ";
            cin >> lotNo;
            cout << "Enter Quantity: ";
            cin >> qty;
            cout << "Enter Price: ";
            cin >> price;
        }
        void displayDetails(){
            cout << endl << "Item Name: " << name << endl;
            cout << "Lot Number: " << lotNo << endl;
            cout << "Quantity: " << qty << endl;
            cout << "Price: " << price << endl<< endl;
        }
};

int main(){
    Item i[3];

    for(int j=0; j<3; j++){
        cout << "Enter details of Item " << j+1 << endl;
        i[j].getDetails();
    }
    for(int j=0; j<3; j++){
        i[j].displayDetails();
    }
    return 0;
}