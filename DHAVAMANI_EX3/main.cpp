#include <iostream>
#include <string>
using namespace std;

// Base Class
class Person {
protected:
    string name;
    int age;
    string gender;

public:
    Person(string n, int a, string g) {
        name = n;
        age = a;
        gender = g;
    }

    void showBasicInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }
};

// First Derived Class
class EmployeeInfo : public Person {
protected:
    string department;
    int empId;

public:
    EmployeeInfo(string n, int a, string g, string dept, int id) 
        : Person(n, a, g) {
        department = dept;
        empId = id;
    }

    void showEmployeeInfo() {
        showBasicInfo();
        cout << "Department: " << department << endl;
        cout << "Employee ID: " << empId << endl;
    }
};

// Second Derived Class
class EmployeePay : public EmployeeInfo {
private:
    double salary;
    int joinYear;

public:
    EmployeePay(string n, int a, string g, string dept, int id, double sal, int year) 
        : EmployeeInfo(n, a, g, dept, id) {
        salary = sal;
        joinYear = year;
    }

    void showAllDetails() {
        showEmployeeInfo();
        cout << "Salary: $" << salary << endl;
        cout << "Year Joined: " << joinYear << endl;
        cout << "Experience: " << calculateExp() << " years" << endl;
    }

    int calculateExp() {
        return 2025 - joinYear;
    }

    double addBonus(double percent) {
        return salary + (salary * percent / 100);
    }

    void updateSalary(double newSal) {
        salary = newSal;
    }

    void updateDept(string newDept) {
        department = newDept;
    }

    double getSalary() {
        return salary;
    }

    string getEmpName() {
        return name;
    }
};

int main() {
    cout << "Employee Details Program\n" << endl;

    // Create employees
    EmployeePay emp1("John ", 30, "Male", "Engineering", 1001, 75000.50, 2018);
    EmployeePay emp2("Jane ", 28, "Female", "Marketing", 1002, 65000.75, 2020);
    EmployeePay emp3("Robert ", 35, "Male", "Finance", 1003, 85000.25, 2015);

    // Show all employee details
    cout << "Employee 1 Details:" << endl;
    emp1.showAllDetails();
    
    cout << "\nEmployee 2 Details:" << endl;
    emp2.showAllDetails();
    
    cout << "\nEmployee 3 Details:" << endl;
    emp3.showAllDetails();

    // Bonus calculation
    cout << "\nSalaries with 10% bonus:" << endl;
    cout << emp1.getEmpName() << ": $" << emp1.addBonus(10) << endl;
    cout << emp2.getEmpName() << ": $" << emp2.addBonus(10) << endl;
    cout << emp3.getEmpName() << ": $" << emp3.addBonus(10) << endl;

    // Update salary
    cout << "\nUpdating John's salary..." << endl;
    emp1.updateSalary(80000.00);
    cout << "John's new salary: $" << emp1.getSalary() << endl;

    // Update department
    cout << "\nChanging Jane's department..." << endl;
    emp2.updateDept("Sales");
    cout << "Jane's updated details:" << endl;
    emp2.showAllDetails();

    // Using array for multiple employees
    cout << "\nAdditional Employees:" << endl;
    EmployeePay moreEmployees[2] = {
        EmployeePay("Alice ", 32, "Female", "HR", 1004, 60000, 2019),
        EmployeePay("Mike ", 40, "Male", "Operations", 1005, 90000, 2012)
    };

    for(int i = 0; i < 2; i++) {
        cout << "\nEmployee " << (i+4) << ":" << endl;
        moreEmployees[i].showAllDetails();
    }

    return 0;
}