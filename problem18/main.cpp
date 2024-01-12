// C++ Program to Find Factorial of a Number


#include<iostream>

using namespace std;

int factorial(int n) {
    if (n == 0 || n ==1) return 1;

    return n * factorial(n - 1);
}

int main () {
    int number;
    cout << "Enter the number you want the factorial of : ";
    cin >> number ;

    int factorialNumber = factorial(number);

    cout << "Factorial of " << number << " is " << factorialNumber << endl;

}