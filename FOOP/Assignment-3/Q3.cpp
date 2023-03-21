#include<iostream>
using namespace std;


class Bank
{
    private:
        int accno, balance;
    public:
        Bank(int a, int b);
        void ask();
        void deposit();
        void withdraw();
        void balance_func();
};

Bank::Bank(int a, int b){
    accno = a;
    balance = b;
}
void Bank::ask(){
    int choice;

    cout << "1. Deposit" << endl;
    cout << "2. Withdraw" << endl;
    cout << "3. Balance" << endl;
    cout << "4. Exit" << endl << endl;

    cout << "Enter your choice : ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            deposit();
            break;
        case 2:
            withdraw();
            break;
        case 3:
            balance_func();
            break;
        case 4:
            cout << "Thank you for using the program . " << endl;
            break;
        default:
            cout << "Please enter a correct option." << endl << endl;
            ask();
            break;
    }
}

void Bank::deposit()
{
    int deposit;
    cout << "Enter the amount you want to deposit : ";
    cin >> deposit;

    balance += deposit;
    cout << "Your current balance is : " << balance << endl << endl;
    ask();
}
void Bank::withdraw(){
    int withdraw;
    cout << "Enter the amount you want to withdraw : ";
    cin >> withdraw;

    if (withdraw > balance)
    {
        cout << "Not enough balance" << endl << endl;
        ask();
    }
    else{
        balance -= withdraw;
        cout << "Your current balance is : " << balance << endl << endl;
        ask();
    } 
}
void Bank::balance_func(){
    cout << "Your current balance is : " << balance << endl << endl;
    ask();
}

int main(){
    Bank p1(1, 1000);
    p1.ask();
    return 0;
}