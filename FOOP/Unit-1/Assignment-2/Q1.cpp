// WAP to print your name, age city and pin code using CLASS

#include<iostream>
using namespace std;

class Info
{
    public:
        string name;
        int age;
        string city;
        int pincode;
        int displayData(){
            cout << "Name : " << name << endl;
            cout << "Age : " << age << endl;
            cout << "City : " << city << endl;
            cout << "Pincode : " << pincode << endl;
        }
};

int main(){
    Info Hitarth;
    Hitarth.name = "Hitarth Ganatra";
    Hitarth.age = 18;
    Hitarth.city = "Rajkot";
    Hitarth.pincode = 360005;

    Hitarth.displayData();
    return 0;
}