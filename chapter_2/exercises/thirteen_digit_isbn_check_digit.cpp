#include <iostream>
using std::cin;
using std::cout;

int main() {
    char digit;
    int position = 1;
    int checksum = 0;
    int remainder;
    int checkdigit;
    cout << "Enter the first twelve digits of a 13-digit ISBN number: ";
    digit = cin.get();
    while (digit != 10) {
        if (position % 2 == 0) {
            checksum += (digit - '0') * 3;
        } else {
            checksum += (digit - '0') * 1;
        }
        digit = cin.get();
        position++;
    }
    if ((position - 1) == 12) {
        remainder = checksum % 10;
        checkdigit = 10 - remainder;
        cout << "Check digit is " << checkdigit << "\n";
    } else {
        cout << "You entered a number with " << (position - 1) << " numbers. Please enter the first twelve digits of a 13-digit ISBN number.\n";
        return 0;
    }
}