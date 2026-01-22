#include <iostream>
using namespace std;

class Student {
private:
    int *p1;
    int *p2;

public:
    // Default Constructor
    Student() {
        cout << "Default Constructor Called" << endl;
        p1 = new int(10);
        p2 = new int(20);
    }

    // Copy Constructor (Deep Copy)
    Student(const Student &s) {
        cout << "Copy Constructor Called" << endl;
        p1 = new int(*s.p1);
        p2 = new int(*s.p2);
    }

    // Display function
    void display() {
        cout << "Value of p1: " << *p1 << endl;
        cout << "Value of p2: " << *p2 << endl;
    }

    // Destructor
    ~Student() {
        delete p1;
        delete p2;
        cout << "Destructor Called" << endl;
    }
};

int main() {
    Student s1;          // Default constructor
    s1.display();

    Student s2 = s1;     // Copy constructor
    s2.display();

    return 0;
}
