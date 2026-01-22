#include<iostream>
using namespace std;
 
class Student
{
    public:
    //member variables
    int *p1;
    int *p2;
 
    //constructor
    Student()
    {
        cout << " Default Constructor called." << endl;
        p1 = new int(0);
        *p1 = 10;
        p2 = new int(0);
        *p2 = 20;
    }
    Student(const Student &s)
    {
        cout << " Copy Constructor called." << endl;
        p1 = new int;
        *p1 = *(s.p1);
        p2 = new int;
        *p2 = *(s.p2);
    }
    void display()
    {
        cout << "Value at p1: " << *p1 << endl;
        cout << "Value at p2: " << *p2 << endl;
    }
};
 
int main()
{
    Student s1; //default constructor called
    s1.display();
    Student s2 = s1; //copy constructor called
    s2.display();
    *s1.p1 = 100;
    s1.display();
    s2.display();
    return 0;
}