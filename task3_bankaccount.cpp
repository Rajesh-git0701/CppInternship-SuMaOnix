#include <iostream>
#include <iomanip>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initial = 0) {
        balance = initial;
    }

    void deposit(double amt) {
        if (amt > 0) {
            balance += amt;
            cout << "Deposited: $" << fixed << setprecision(2) << amt << endl;
        } else {
            cout << "Invalid amount!" << endl;
        }
    }

    void withdraw(double amt) {
        if (amt > 0 && amt <= balance) {
            balance -= amt;
            cout << "Withdrawn: $" << fixed << setprecision(2) << amt << endl;
        } else {
            cout << "Insufficient or invalid amount!" << endl;
        }
    }

    void balanceAmount() {
        cout << "Current Balance: $" << fixed << setprecision(2) << balance << endl;
    }
};

int main() {
    BankAccount acc;
    int choice;
    double amt;

    do {
        cout << "\n===== Bank Menu =====" << endl;
        cout << "1. Deposit\n2. Withdraw\n3. Balance\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cin >> amt;
                acc.deposit(amt);
                break;
            case 2:
                cin >> amt;
                acc.withdraw(amt);
                break;
            case 3:
                acc.balanceAmount();
                break;
            case 4:
                cout << "Exiting... Thank you!" << endl;
                break;
            default:
                cout << "Invalid choice! Try again." << endl;
        }
    } while(choice != 4);

    return 0;
}
