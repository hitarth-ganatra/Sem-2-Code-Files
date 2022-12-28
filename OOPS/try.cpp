#include<iostream>
using namespace std;

class Animals
{
    private:
        int age;
        string name;
    public:
        string food;
        string toy;
        void setData(string name, int age);
        void getData();
};

void Animals::setData(string name, int age)
{
    this->age = age;
    this->name = name;
}

void Animals::getData(){
    cout << "Name of the pet: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Favorite Food: " << food << endl;
    cout << "Favorite Toy: " << toy << endl << endl;
}
int main()
{
    Animals dog;
    Animals cat;
    
    dog.food = "Biscuit";
    dog.toy = "Ball";

    dog.setData("Tommy", 5);
    dog.getData();

    cat.food = "Milk";
    cat.toy = "Teddy";

    cat.setData("Mei Chan", 7);
    cat.getData();

    return 0;
}
