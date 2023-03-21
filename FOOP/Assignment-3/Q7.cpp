#include<iostream>
using namespace std;

class Student{
    private:
        int ID;
        string name;
        int marks[5];
        void calculatePercentage();
    public:
        float percentage;
        void getData();
        void displayData();
};
void Student::getData(){
    cout << "Enter the ID: ";
    cin >> ID;
    cout << "Enter the name: ";
    cin >> name;
    cout << "Enter the marks for 5 subject : ";
    for(int i=0; i<5; i++){
        cin >> marks[i];
    }
    calculatePercentage();
}
void Student::calculatePercentage(){
    int sum = 0;
    for(int i=0; i<5; i++){
        sum += marks[i];
    }
    percentage = sum/5.0;
}
void Student::displayData(){
    cout << endl << "ID : " << ID << endl;
    cout << "Name : " << name << endl;
    cout << "Percentage : " << percentage << endl << endl;
}

int main(){
    int N;
    cout << "Enter the number of students: ";
    cin >> N;
    Student s[N];
    for(int i=0; i<N; i++){
        s[i].getData();
    }
    int max = 0;
    for(int i=0; i<N; i++){
        if(s[i].percentage > s[max].percentage){
            max = i;
        }
    }
    s[max].displayData();
    return 0;
}