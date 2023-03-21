#include<iostream>
using namespace std;

class Mobile{
    public:
        string brand, color;
        int price;
        float width, height;
        Mobile(string b, int p, string c, float w, float h){
            brand = b;
            price = p;
            color = c;
            width = w;
            height = h;
        }
        void display(){
            cout << "Brand : " << brand << endl;
            cout << "Price : " << price << endl;
            cout << "Color : " << color << endl;
            cout << "Width : " << width << endl;
            cout << "Height : " << height << endl << endl;
        }
};

int main(){
    Mobile samsung("Samsung", 30000, "Purple", 15.6, 13.2);
    samsung.display();
    return 0;
}