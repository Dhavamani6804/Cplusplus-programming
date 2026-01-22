#include <iostream>
using namespace std;
class Student
{
    // member variables
    int id;
    float attendance;
    double marks;
 
    //construstor
    public:
 
    //initialize using member initializer listi\ng
    //id - member id (id - parameter id)
    Student( int id = 10 , float attendance = 80.0, double marks = 90.0) : id(id), attendance(attendance), marks(marks)
    {
        cout << " Constructor called." << endl;
    }
 
 
    // //default constructor
    // Student()
    // {
    //     cout << " Default Constructor called." << endl;
    //     id = 0;
    //     attendance = 0.0;
    //     marks = 0.0;
    // }
 
    // //parameterized constructor
    // Student(int i, float att, double m)
    // {
    //     cout << " Parameterized Constructor called." << endl;
    //     id = i;
    //     attendance = att;
    //     marks = m;
    // }
 
    //copy constructor
    Student(const Student &s)
    {
        cout << " Copy Constructor called." << endl;
        id = s.id;
        attendance = s.attendance;
        marks = s.marks;
    }
 
    // member function to display student details
    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Attendance: " << attendance << endl;
        cout << "Marks: " << marks << endl;
    }
 
};
int main()
{
    Student s1; //default constructor called
    s1.display();
    Student s2(101, 85.5, 92.0); //parameterized constructor called
    s2.display();
    return 0;
}
 