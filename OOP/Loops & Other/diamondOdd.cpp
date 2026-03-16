#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    // Upper pyramid
    for (int i = 1; i <= rows; i++) {

        // spaces
        for (int j = i; j < rows; j++) {
            cout << " ";
        }

        // stars (increment by 2)
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower pyramid
    for (int i = rows - 1; i >= 1; i--) {

        // spaces
        for (int j = rows; j > i; j--) {
            cout << " ";
        }

        // stars (decrement by 2)
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
