// Swap Two Numbers

#include <iostream>
using namespace std;

int main() {
    int num1, num2, temp;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Before swapping: " << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    // Swapping logic
    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "After swapping: " << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    return 0;
}
