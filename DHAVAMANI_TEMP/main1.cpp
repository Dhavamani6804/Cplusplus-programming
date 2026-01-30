#include <iostream>
using namespace std;

// Class template for a simple calculator
template <typename T>
class Calculator {
private:
    T num1, num2;
    
public:
    // Constructor to initialize numbers
    Calculator(T a, T b) {
        num1 = a;
        num2 = b;
    }
    
    T add() {
        return num1 + num2;
    }
    
    T subtract() {
        return num1 - num2;
    }
    
    T multiply() {
        return num1 * num2;
    }
    
    T divide() {
        // Check for division by zero
        if (num2 == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return num1 / num2;
    }
    
    // Method to display results
    void displayResults() {
        cout << "\nNumbers: " << num1 << " and " << num2 << endl;
        cout << "Addition: " << add() << endl;
        cout << "Subtraction: " << subtract() << endl;
        cout << "Multiplication: " << multiply() << endl;
        cout << "Division: " << divide() << endl;
    }
};

int main() {
    // Integer calculator example
    cout << " INTEGER CALCULATOR " << endl;
    Calculator<int> intCalc(20, 5);
    intCalc.displayResults();
    
    // Double calculator example
    cout << "\n DOUBLE CALCULATOR " << endl;
    Calculator<double> doubleCalc(15.5, 2.5);
    doubleCalc.displayResults();
    
    // Example with division by zero
    cout << "\n DIVISION BY ZERO EXAMPLE " << endl;
    Calculator<int> zeroDivCalc(10, 0);
    zeroDivCalc.displayResults();
    
    return 0;
}