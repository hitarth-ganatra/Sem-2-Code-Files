// WAP to demonstrate ATM money withdrawal process by taking following private data members:
// Accountno, balance
// The withdrawal function should return remaining balance to the user and should deduct withdrawal amount from balance.
// If withdrawal amount is greater than balance, print appropriate message on screen (Not enough balance)
// The deposit function should return updated balance to user

#include<iostream>
using namespace std;

class ATM{
    private:
        int accountNo, balance;
    public:
        int setData(int i1, int i2);
        int withdraw(int amt);
        int deposit(int amt);
};
int ATM::setData(int i1, int i2){
    accountNo = i1;
    balance = i2;
}
int ATM::withdraw(int amt){
    if(amt > balance){
        cout << "Not enough balance" << endl << endl;
    }
    else{
        cout << "The amount " << amt << " has been deducted from your account." << endl;
        balance -= amt;
        cout << "Remaining balance : " << balance << endl << endl;
    }
}
int ATM::deposit(int amt){
    balance += amt;
    cout << "The amount " << amt << " has been deposited to your account." << endl;
    cout << "Updated balance : " << balance << endl << endl;
}


int main(){
    ATM user1, user2, user3;
    user1.setData(123456789, 4000);
    user1.withdraw(2000);
    user1.deposit(1000);

    user2.setData(987654321, 5000);
    user2.withdraw(5500);
    user2.deposit(500);

    user3.setData(123456789, 10000);
    user3.withdraw(10000);
    user3.deposit(500);
    return 0;
}