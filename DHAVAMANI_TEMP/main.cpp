#include <iostream>
using namespace std;

// Function template to calculate sum of array elements
template <typename T>
T arraySum(T arr[], int size) {
    T sum = 0; // Initialize sum to zero
    
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    
    return sum;
}

int main() {
    // Integer array example
    int intArr[] = {10, 20, 30, 40, 50};
    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    
    cout << "Integer array: ";
    for (int i = 0; i < intSize; i++) {
        cout << intArr[i] << " ";
    }
    cout << "\nSum of integer array: " << arraySum(intArr, intSize) << endl;
    
    // Double array example
    double doubleArr[] = {1.5, 2.5, 3.5, 4.5};
    int doubleSize = sizeof(doubleArr) / sizeof(doubleArr[0]);
    
    cout << "\nDouble array: ";
    for (int i = 0; i < doubleSize; i++) {
        cout << doubleArr[i] << " ";
    }
    cout << "\nSum of double array: " << arraySum(doubleArr, doubleSize) << endl;
    
    return 0;
}