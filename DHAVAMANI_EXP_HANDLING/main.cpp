#include <iostream>
#include <string>
using namespace std;

// Custom exception classes
class InsufficientFundsException {
public:
    string message;
    InsufficientFundsException(string msg) : message(msg) {}
};

class InvalidAmountException {
public:
    string message;
    InvalidAmountException(string msg) : message(msg) {}
};

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    // Constructor
    BankAccount(string name, double initialBalance) {
        accountHolder = name;
        balance = initialBalance;
    }

    // Function to deposit money
    void deposit(double amount) {
        try {
            if (amount <= 0) {
                throw InvalidAmountException("Cannot deposit negative or zero amount!");
            }
            balance += amount;
            cout << "Deposited: $" << amount << endl;
            cout << "New balance: $" << balance << endl;
        }
        catch (InvalidAmountException &e) {
            cout << "Deposit Error: " << e.message << endl;
            throw; // Re-throw the exception
        }
    }

    // Function to withdraw money
    void withdraw(double amount) {
        try {
            if (amount <= 0) {
                throw InvalidAmountException("Cannot withdraw negative or zero amount!");
            }
            if (amount > balance) {
                throw InsufficientFundsException("Not enough money in account!");
            }
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
            cout << "New balance: $" << balance << endl;
        }
        catch (InsufficientFundsException &e) {
            cout << "Withdrawal Error: " << e.message << endl;
            cout << "Current balance: $" << balance << endl;
            throw; // Re-throw the exception
        }
        catch (InvalidAmountException &e) {
            cout << "Withdrawal Error: " << e.message << endl;
            throw; // Re-throw the exception
        }
    }

    // Function to display account details
    void display() {
        cout << "\nAccount Holder: " << accountHolder << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    cout << "Bank Account with Exception Handling\n" << endl;

    // Create a bank account
    BankAccount account("John", 1000.0);
    
    // Display initial details
    account.display();
    
    cout << "\nTesting Deposits" << endl;
    
    // Test 1: Normal deposit
    try {
        cout << "\nTest 1: Deposit $500" << endl;
        account.deposit(500);
    }
    catch (...) {
        cout << "Caught an exception during deposit." << endl;
    }
    
    // Test 2: Deposit negative amount (should throw exception)
    try {
        cout << "\nTest 2: Deposit $-100" << endl;
        account.deposit(-100);
    }
    catch (...) {
        cout << "Exception handled in main." << endl;
    }
    
    cout << "\nTesting Withdrawals " << endl;
    
    // Test 3: Normal withdrawal
    try {
        cout << "\nTest 3: Withdraw $200" << endl;
        account.withdraw(200);
    }
    catch (...) {
        cout << "Caught an exception during withdrawal." << endl;
    }
    
    // Test 4: Withdraw more than balance (should throw exception)
    try {
        cout << "\nTest 4: Withdraw $5000" << endl;
        account.withdraw(5000);
    }
    catch (...) {
        cout << "Exception handled in main." << endl;
    }
    
    // Test 5: Withdraw negative amount (should throw exception)
    try {
        cout << "\nTest 5: Withdraw $-50" << endl;
        account.withdraw(-50);
    }
    catch (...) {
        cout << "Exception handled in main." << endl;
    }
    
    // Test 6: Another normal withdrawal
    try {
        cout << "\nTest 6: Withdraw $300" << endl;
        account.withdraw(300);
    }
    catch (...) {
        cout << "Caught an exception during withdrawal." << endl;
    }
    
    // Display final details
    cout << "\n Final Account Status " << endl;
    account.display();
    
    return 0;
}