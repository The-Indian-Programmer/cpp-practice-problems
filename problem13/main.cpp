// Find Largest Among 3 Numbers

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter the first Number: ";
    cin >> num1;

    cout << "Enter the second Number: ";
    cin >> num2;

    cout << "Enter the third Number: ";
    cin >> num3;

    int largest = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);

    cout << "The largest number is: " << largest << endl;

    return 0;
}
