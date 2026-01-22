#include <iostream>
using namespace std;
 
class AmiMember
{
    string name; // 4 * 8 = 32 bytes
    int id; //4 bytes + 4 padding = 8 bytes
 
    public:
   
    AmiMember(string n, int i)
    {
        cout<< "AmiMember / parent parameterized constructor called" << endl;
        name = n;
        id = i;
    }
};
 
class Student : public AmiMember
{
    double attendance; // 8 bytes
    public:
    Student(string n , int i, double a) : AmiMember(n, i)
    {
        cout<< "Student / child constructor called" << endl;
        attendance = a;
    }
 
};
 
int main()
{
    AmiMember ami("John Doe", 12345);
    Student stu("Dharshini", 67890 , 95.5);
    return 0;
}