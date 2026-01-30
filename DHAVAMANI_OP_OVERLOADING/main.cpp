#include <iostream>
#include <cstring>
using namespace std;

// Class for arithmetic operators
class Calculator {
    int num;
public:
    Calculator(int n = 0) {
        num = n;
    }
    
    Calculator operator+(Calculator c) {
        Calculator temp;
        temp.num = num + c.num;
        return temp;
    }
    
    Calculator operator-(Calculator c) {
        Calculator temp;
        temp.num = num - c.num;
        return temp;
    }
    
    Calculator operator*(Calculator c) {
        Calculator temp;
        temp.num = num * c.num;
        return temp;
    }
    
    Calculator operator/(Calculator c) {
        Calculator temp;
        temp.num = num / c.num;
        return temp;
    }
    
    void show() {
        cout << num;
    }
};

// Class for string comparison
class MyString {
    char text[100];
public:
    MyString(char* t) {
        strcpy(text, t);
    }
    
    bool operator==(MyString s) {
        if (strcmp(text, s.text) == 0)
            return true;
        else
            return false;
    }
    
    void show() {
        cout << text;
    }
};

int main() {
    cout << "Operator Overloading \n\n";
    
    // Arithmetic operations
    Calculator a(10), b(5), c;
    
    cout << "Arithmetic Operations:\n";
    
    c = a + b;
    cout << "10 + 5 = "; c.show(); cout << endl;
    
    c = a - b;
    cout << "10 - 5 = "; c.show(); cout << endl;
    
    c = a * b;
    cout << "10 * 5 = "; c.show(); cout << endl;
    
    c = a / b;
    cout << "10 / 5 = "; c.show(); cout << endl;
    
    // String comparison
    cout << "\nString Comparison:\n";
    
    char s1[] = "Hello";
    char s2[] = "Hello";
    char s3[] = "World";
    
    MyString str1(s1);
    MyString str2(s2);
    MyString str3(s3);
    
    cout << "String1: "; str1.show(); cout << endl;
    cout << "String2: "; str2.show(); cout << endl;
    cout << "String3: "; str3.show(); cout << endl;
    
    if (str1 == str2)
        cout << "String1 == String2: True\n";
    else
        cout << "String1 == String2: False\n";
    
    if (str1 == str3)
        cout << "String1 == String3: True\n";
    else
        cout << "String1 == String3: False\n";

    return 0;
}