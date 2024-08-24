#include <iostream>
#include <string>
using namespace std;

class BankAccount{
    int accountNumber = 0;
    int balance = 0;
public:
    BankAccount(int accountNumber, int balance) {
        this->accountNumber = accountNumber;
        this->balance = balance;
    }
    void deposit(int money) {
        balance += money;
    };

    void withdraw(int money) {
        if (money <= balance) {
            balance -= money;
        } else {
            cout << "Insufficient Balance!" << endl;
        }
        
    }

    int getBalance(){
        return balance;
    }

};

int main(){
    BankAccount shoruv(777,500);
    shoruv.deposit(500);
    shoruv.withdraw(1500);
    shoruv.withdraw(1000);
    shoruv.getBalance();

    cout << shoruv.getBalance();
}