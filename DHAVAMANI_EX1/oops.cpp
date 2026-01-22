#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int age;
    float marks;
    
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
        cout << endl;
    }
};

class BankAccount {
public:
    string owner;
    double balance;
    
    void deposit(double amount) {
        balance = balance + amount;
        cout << owner << " deposited: $" << amount << endl;
    }
    
    void withdraw(double amount) {
        if(amount <= balance) {
            balance = balance - amount;
            cout << owner << " withdrew: $" << amount << endl;
        } else {
            cout << "Sorry, " << owner << " doesn't have enough money!" << endl;
        }
    }
    
    void showBalance() {
        cout << owner << "'s balance: $" << balance << endl;
    }
};

class Car {
public:
    string brand;
    string model;
    int year;
    
    void start() {
        cout << brand << " " << model << " is starting..." << endl;
    }
    
    void stop() {
        cout << brand << " " << model << " is stopping..." << endl;
    }
    
    void displayInfo() {
        cout << brand << " " << model << " (" << year << ")" << endl;
    }
};

class Book {
public:
    string title;
    string author;
    int pages;
    double price;
    
    void showDetails() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Pages: " << pages << endl;
        cout << "Price: $" << price << endl;
        cout << endl;
    }
    
    void applyDiscount(float percent) {
        double discount = price * (percent / 100);
        price = price - discount;
        cout << title << " now costs: $" << price << " after " << percent << "% discount" << endl;
    }
};

int main() {
    cout << "C++ CLASS & OBJECT DEMO" << endl;
    cout << endl;
    
    cout << "EXPERIMENT 1: Student Class" << endl;
    cout << endl;
    
    Student s1;
    s1.name = "Alice";
    s1.age = 20;
    s1.marks = 85.5;
    
    Student s2;
    s2.name = "Bob";
    s2.age = 21;
    s2.marks = 78.0;
    
    cout << "Student 1:" << endl;
    s1.display();
    
    cout << "Student 2:" << endl;
    s2.display();
    
    cout << "EXPERIMENT 2: Bank Account Class" << endl;
    cout << endl;
    
    BankAccount acc1;
    acc1.owner = "John";
    acc1.balance = 1000.0;
    
    BankAccount acc2;
    acc2.owner = "Emma";
    acc2.balance = 500.0;
    
    cout << "Initial balances:" << endl;
    acc1.showBalance();
    acc2.showBalance();
    cout << endl;
    
    cout << "Transactions:" << endl;
    acc1.deposit(200);
    acc1.withdraw(100);
    acc2.withdraw(600);
    cout << endl;
    
    cout << "Final balances:" << endl;
    acc1.showBalance();
    acc2.showBalance();
    cout << endl;
    
    cout << "EXPERIMENT 3: Car Class" << endl;
    cout << endl;
    
    Car car1;
    car1.brand = "Toyota";
    car1.model = "Camry";
    car1.year = 2020;
    
    Car car2;
    car2.brand = "Honda";
    car2.model = "Civic";
    car2.year = 2019;
    
    cout << "Car 1 Information:" << endl;
    car1.displayInfo();
    car1.start();
    car1.stop();
    cout << endl;
    
    cout << "Car 2 Information:" << endl;
    car2.displayInfo();
    car2.start();
    car2.stop();
    cout << endl;
    
    cout << "EXPERIMENT 4: Book Class" << endl;
    cout << endl;
    
    Book book1;
    book1.title = "C++ Programming";
    book1.author = "John Smith";
    book1.pages = 400;
    book1.price = 49.99;
    
    Book book2;
    book2.title = "Learn Python";
    book2.author = "Sarah Lee";
    book2.pages = 350;
    book2.price = 39.99;
    
    cout << "Book 1 Details:" << endl;
    book1.showDetails();
    
    cout << "Book 2 Details:" << endl;
    book2.showDetails();
    
    cout << "Applying Discounts:" << endl;
    book1.applyDiscount(10);
    book2.applyDiscount(15);
    cout << endl;
    
    return 0;
}