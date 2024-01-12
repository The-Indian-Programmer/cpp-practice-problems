// C++ Program to Reverse a Number


// 45678

// 1. % by 10 then remainder is 8
//    reversed = reversed * 10 + remainder
//    8
//    divided number will be 4567
   

// 2. % by 10 then remainder is 8 * 10 + remainder
//    reversed = reversed * 10 + remainder
//    87
//    divided number will be 456

// 2. % by 10 then remainder is 8 * 10 + remainder
//    reversed = reversed * 10 + remainder
//    876
//    divided number will be 45

// 2. % by 10 then remainder is 8 * 10 + remainder
//    reversed = reversed * 10 + remainder
//    8765
//    divided number will be 4

// 2. % by 10 then remainder is 8 * 10 + remainder
//    reversed = reversed * 10 + remainder
//    87654
//    divided number will be 0

#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int reverse = 0;

    while (n != 0)    {
        int remainder = (n%10);
        reverse = (reverse *10) + remainder;
        n = n/10;
    }

    return reverse;
    
}

int main () {
    int number;
    cout << "Enter the number you want to reverse : ";
    cin >> number;
    int reversedNumber = reverseNumber(number);
    cout << "The reversed number of " << number << " is " << reversedNumber << endl;

    return 0;


}
