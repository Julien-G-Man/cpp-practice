// Created by user on 8/9/2025.
// Created by user on 8/9/2025.

#include <iostream>
#include <string>
#include <iomanip> // for std::fixed and std::setprecision
using namespace std;

// class
class bankAccount {
private:
    static int nextAccountNumber; // shared among all accounts
    int accountNumber;
    string accountName; // account holder's name
    string accountType; // checking/saving
    double accountBalance;
    double interestRate;

public:
    // Default constructor
    bankAccount() {
        accountName = "";
        accountType = "";
        accountBalance = 0.0;
        interestRate = 0.0;
        accountNumber = ++nextAccountNumber; // auto-assign
        cout << "Account created! Account No: " << accountNumber << endl;
    }

    // Parameterized constructor
    bankAccount(string name, string type, double balance, double rate) {
        accountName = name;
        accountType = type;
        accountBalance = balance;
        interestRate = rate;
        accountNumber = ++nextAccountNumber;
        cout << "Account created! Account No: " << accountNumber << endl;
    }

    // deposit method (member functions)
    void deposit(double amount) {
        accountBalance += amount;
    }

    void withdraw(double amount) {
        if (amount <= accountBalance) {
            accountBalance -= amount;
        } else {
            cout << "Insufficient funds!" << endl;
        }
    }

    void applyInterest() {
        accountBalance += accountBalance * interestRate;
    }

    void display() const {
        cout << "Account No: " << accountNumber << endl
             << "Name: " << accountName << endl
             << "Type: " << accountType << endl
             << "Balance: $" << fixed << setprecision(2) << accountBalance << endl
             << "Interest Rate: " << fixed << setprecision(2) << (interestRate * 100) << "%" << endl
             << "--------------------------" << endl;
    }
};

int bankAccount::nextAccountNumber = 0; // initialize

int main() {
    // Array of 10 accounts
    bankAccount customers[10] = {
        bankAccount("Julien", "Savings", 500.0, 0.03),
        bankAccount("Rich", "Checking", 1000.0, 0.02),
        bankAccount("Sam", "Savings", 750.0, 0.04),
        bankAccount("Rose", "Checking", 200.0, 0.01),
        bankAccount("Mia", "Savings", 1200.0, 0.05),
        bankAccount("John", "Checking", 300.0, 0.02),
        bankAccount("Paul", "Savings", 600.0, 0.03),
        bankAccount("Eve", "Checking", 150.0, 0.01),
        bankAccount("Liam", "Savings", 800.0, 0.04),
        bankAccount("Noah", "Checking", 400.0, 0.02)
    };

    customers[0].deposit(200.0);    // deposit into Julien's account
    customers[1].withdraw(150.0);   // withdraw from Rich's account

    // Apply interest to all accounts
    for (int i = 0; i < 10; i++) {
        customers[i].applyInterest();
    }

    // Display after interest
    for (int i = 0; i < 10; i++) {
        customers[i].display();
    }

    return 0;
}
