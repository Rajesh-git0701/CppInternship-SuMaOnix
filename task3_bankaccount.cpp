#include <iostream>
using namespace std;

class BankAccount {
private:
    string name;
    int accNumber;
    double balance;

public:
    void openAccount() {
        cout << "Enter Account Holder Name: ";
        getline(cin, name);
        cout << "Enter Account Number: ";
        cin >> accNumber;
        cout << "Enter Initial Balance: ";
        cin >> balance;
        cin.ignore();
    }

    void deposit() {
        double amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Deposited Successfully.\n";
    }

    void withdraw() {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal Successful.\n";
        } else {
            cout << "Insufficient Balance.\n";
        }
    }

    void displayAccount() {
        cout << "\n--- Account Details ---" << endl;
        cout << "Name     : " << name << endl;
        cout << "Account# : " << accNumber << endl;
        cout << "Balance  : ₹" << balance << endl;
    }
};

int main() {
    BankAccount user;
    user.openAccount();
    user.deposit();
    user.withdraw();
    user.displayAccount();
    return 0;
}