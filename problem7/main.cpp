// Print the ASCII Value of a Character

#include <iostream>
using namespace std;

int main() {
    char character;

    cout << "Enter a character: ";
    cin >> character;

    cout << "ASCII value of " << character << " is " << int(character) << endl;

    return 0;
}
