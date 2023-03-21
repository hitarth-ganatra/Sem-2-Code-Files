#include<iostream>
using namespace std;

class Mobile{
    public:
        string brand, color;
        int price;
        Mobile(string b, int p, string c){
            brand = b;
            price = p;
            color = c;
        }
        void display(){
            cout << "Brand : " << brand << endl;
            cout << "Price : " << price << endl;
            cout << "Color : " << color << endl << endl;
        }
};

int main(){
    int total = 0;
    Mobile samsung[] = { Mobile("S22 Ultra", 5000, "Purple"),
                         Mobile("S23 Ultra", 8000, "White"),
                         Mobile("A15", 4000, "Black") };

    for (int i = 0; i < 4; i++)
    {
        if (samsung[i].price >= 5000)
        {
            total++;
        }
    }
    cout << "Total number of phones whose price is > 5000 are : " << total << endl << endl;
    for (int i = 0; i < 4; i++)
    {
        if (samsung[i].price >= 1000 && samsung[i].price <= 10000)
        {
            samsung[i].display();
        }
        
    }
    
    return 0;
}