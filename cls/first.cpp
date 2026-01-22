#include <iostream>

// :: => Scope resolution operator, used to infrom where to search for the object

int main() {
    std::cout<< "Hello, World!"<< std::endl;
    std::cout<<"Welcome to C++ programming."<< std::endl; 

    int num; 
    std::cout << "Enter an integer: ";
    std::cin >> num;
    std::cout << "You entered: " << num << std::endl;
    return 0;
}