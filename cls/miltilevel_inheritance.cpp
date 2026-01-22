//multi-level inheritance
 
#include <iostream>
using namespace std;
 
class A
{
    public:
    A()
    {
        cout << "Constructor of class A called" << endl;
    }
};
class B : public A
{
    public:
    B()
    {
        cout << "Constructor of class B called" << endl;
    }
};
class C : public B
{
    public:
    C()
    {
        cout << "Constructor of class C called" << endl;
    }
};
 
int main()
{
    cout << "Creating object of class A:" << endl;
    A objA;
    cout << "\nCreating object of class B:" << endl;
    B objB;
    cout << "\nCreating object of class C:" << endl;
    C objC;
   
    return 0;
}