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
    remainder = checksum % 10;
    checkdigit = 10 - remainder;
    cout << "Check digit is " << checkdigit << "\n";
}