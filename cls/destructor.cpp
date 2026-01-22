#include<iostream>
using namespace std;
 
class Student
{
    // member variables
    int id;
    float attendance;
    double marks;
 
    //constructor
    public:
    //default constructor
    Student()
    {
        cout << " Default Constructor called." << endl;
        id = 0;
        attendance = 0.0;
        marks = 0.0;
    }
    ~Student()
    {
        cout << " Destructor called." << endl;
       
    }
 
    // member function to display student details
    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Attendance: " << attendance << endl;
        cout << "Marks: " << marks << endl;
    }
 
};
 
void test()
{
    cout << "Entering test function." << endl;
    Student s3; // Default constructor called
    cout << "Exiting test function." << endl;
}
 
int main()
{
    test(); // Call function to demonstrate destructor
    Student s1; // Default constructor called
    s1.display();
    return 0;
}