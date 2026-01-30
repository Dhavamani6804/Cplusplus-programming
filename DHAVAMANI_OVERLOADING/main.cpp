#include <iostream>
using namespace std;

// Area of square
double area(double side) {
    return side * side;
}

// Area of rectangle
double area(double length, double width) {
    return length * width;
}

// Area of circle
double area(float radius) {
    return 3.14159 * radius * radius;
}

int main() {
    cout << "Area Calculations:\n";
    
    // Square
    cout << "Square (side=5): " << area(5.0) << endl;
    
    // Rectangle
    cout << "Rectangle (4x6): " << area(4.0, 6.0) << endl;
    
    // Circle
    cout << "Circle (radius=3): " << area(3.0f) << endl;
    
    return 0;
}