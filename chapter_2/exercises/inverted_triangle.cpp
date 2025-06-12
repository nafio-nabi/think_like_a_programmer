#include <iostream>
using std::cin;
using std::cout;

int main() {
    int counter = 0;
    for (int row = 1; row <= 4; row++) {
        if (row != 1) {
            for (int spaceNum = 1; spaceNum <= abs(1 - row); spaceNum++) {
                cout << " ";
            }
        }
        for (int hashNum = 1; hashNum <= 9 - row - counter; hashNum++) {
            cout << "#";
        }
        cout << "\n";
        counter++;
    }
}