#include <iostream>
using std::cin;
using std::cout;

int main() {
    char digit;
    int checksum;
    int position = 1;
    cout << "Enter a 13-digit ISNB number: ";
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
    if ((position - 1) == 13) {
        if (checksum % 10 == 0) {
            cout << "Checksum is " << checksum << ". It is divisible by 10. Valid.\n";
        } else {
            cout << "Checksum is " << checksum << ". It is not divisible by 10. Invalid.\n";
        }
    } else {
        cout << "You entered a number with " << (position - 1) << " numbers. Please enter a valid 13-digit ISBN number.\n";
        return 0; 
    }
}