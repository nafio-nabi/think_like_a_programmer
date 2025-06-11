#include <iostream>
using std::cin;
using std::cout;

int main() {
    // cout << "Enter a two-digit number: ";
    // char digitChar1 = cin.get();
    // char digitChar2 = cin.get();
    // int digit1 = digitChar1 - '0';
    // int digit2 = digitChar2 - '0';
    // int overallNumber = digit1 * 10 + digit2;
    // cout << "That number as an integer: " << overallNumber << "\n";

    // cout << "Enter a two-digit number: ";
    // char digitChar = cin.get();
    // int overallNumber = (digitChar - '0') * 10;
    // digitChar = cin.get();
    // overallNumber += (digitChar - '0');
    // cout << "That number as an integer: " << overallNumber << "\n";

    cout << "Enter a number with as many digits as you like: ";
    char digtiChar = cin.get();
    int number = (digtiChar - '0');
    digtiChar = cin.get();
    while (digtiChar != 10) {
        number = number * 10 + (digtiChar - '0');
        digtiChar = cin.get();
    }
    cout << "Number entered: " << number << "\n";
}