#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    int id;
    
public:
    Employee(string n, int i) {
        name = n;
        id = i;
    }
    
    // Virtual function
    virtual void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

class SalariedEmployee : public Employee {
    int days;
    float rate;
    
public:
    SalariedEmployee(string n, int i, int d, float r) : Employee(n, i) {
        days = d;
        rate = r;
    }
    
    void display() {
        cout << "Salaried Employee - ";
        cout << "ID: " << id << ", Name: " << name << ", ";
        cout << "Days: " << days << ", Rate: $" << rate << ", ";
        cout << "Salary: $" << days * rate << endl;
    }
};

class ContractLabour : public Employee {
    int days;
    float wage;
    
public:
    ContractLabour(string n, int i, int d, float w) : Employee(n, i) {
        days = d;
        wage = w;
    }
    
    void display() {
        cout << "Contract Labour - ";
        cout << "ID: " << id << ", Name: " << name << ", ";
        cout << "Days: " << days << ", Wage: $" << wage << ", ";
        cout << "Earnings: $" << days * wage << endl;
    }
};

int main() {
    // Create objects
    SalariedEmployee emp1("John", 101, 22, 150);
    ContractLabour emp2("Jane", 102, 18, 120);
    
    // Without virtual function
    cout << "WITHOUT VIRTUAL FUNCTION:\n";
    Employee* ptr1 = &emp1;
    Employee* ptr2 = &emp2;
    
    ptr1->display();  // Calls base class display
    ptr2->display();  // Calls base class display
    
    cout << "\nWITH VIRTUAL FUNCTION:\n";
    // With virtual function (same pointers)
    ptr1->display();  // Calls SalariedEmployee display
    ptr2->display();  // Calls ContractLabour display
    
    cout << "\nDIRECT OBJECT CALLS:\n";
    emp1.display();  // Always calls derived class
    emp2.display();  // Always calls derived class
    
    return 0;
}