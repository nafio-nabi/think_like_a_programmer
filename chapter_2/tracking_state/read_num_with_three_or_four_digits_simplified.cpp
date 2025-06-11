#include <iostream>
using std::cin;
using std::cout;

int main() {
    cout << "Enter a three-digit or four-digit number: ";
    char digitChar = cin.get();
    int threeDigitNumber = (digitChar - '0') * 100;
    int fourDigitNumber = (digitChar - '0') * 1000;
    digitChar = cin.get();
    threeDigitNumber += (digitChar - '0') * 10;
    fourDigitNumber += (digitChar - '0') * 100;
    digitChar = cin.get();
    threeDigitNumber += (digitChar - '0');
    fourDigitNumber += (digitChar - '0') * 10;
    digitChar = cin.get();
    if (digitChar == 10) {
        cout << "Number entered: " << threeDigitNumber << "\n";
    } else {
        fourDigitNumber += (digitChar - '0');
        cout << "Number entered: " << fourDigitNumber << "\n";
    }
}