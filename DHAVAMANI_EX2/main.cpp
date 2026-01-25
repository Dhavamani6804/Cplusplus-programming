#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string model;
    string brand;
    int makeYear;
    double price;
    
public:
    // Default Constructor
    Car() {
        model = "Unknown";
        brand = "Unknown";
        makeYear = 0;
        price = 0.0;
        cout << "Default constructor called" << endl;
    }
    
    // Parameterized Constructor
    Car(string m, string b, int year, double p) {
        model = m;
        brand = b;
        makeYear = year;
        price = p;
        cout << "Parameterized constructor called" << endl;
    }
    
    // Copy Constructor
    Car(const Car &otherCar) {
        model = otherCar.model;
        brand = otherCar.brand;
        makeYear = otherCar.makeYear;
        price = otherCar.price;
        cout << "Copy constructor called" << endl;
    }
    
    // Destructor
    ~Car() {
        cout << "Destructor called for " << brand << " " << model << endl;
    }
    
    void displayInfo() {
        cout << "Model: " << model << endl;
        cout << "Brand: " << brand << endl;
        cout << "Make Year: " << makeYear << endl;
        cout << "Price: $" << price << endl;
        cout << endl;
    }
    
    void setCarInfo(string m, string b, int year, double p) {
        model = m;
        brand = b;
        makeYear = year;
        price = p;
    }
};

int main() {
    cout << endl;
    
    cout << "1. Creating car using default constructor:" << endl;
    Car car1;
    car1.displayInfo();
    
    cout << "2. Creating car using parameterized constructor:" << endl;
    Car car2("Civic", "Honda", 2023, 25000.50);
    car2.displayInfo();
    
    cout << "3. Creating car using copy constructor:" << endl;
    Car car3(car2);
    car3.displayInfo();
    
    cout << "4. Modifying car1 information:" << endl;
    car1.setCarInfo("Camry", "Toyota", 2022, 28000.75);
    car1.displayInfo();
    
    cout << "5. Creating another car in a block:" << endl;
    {
        Car car4("Corolla", "Toyota", 2021, 22000.25);
        car4.displayInfo();
    }    
    return 0;
}