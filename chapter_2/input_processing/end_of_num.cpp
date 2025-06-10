#include <iostream>
using std::cin;
using std::cout;

int main() {
    cout << "Enter a number: ";
    char digit;
    while (true) {
        digit = cin.get();
        cout << int(digit) << " ";
    }
}