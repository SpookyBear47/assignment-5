/******************************************************
** Program: recur.cpp
** Author: Wesley Grandmont IV
** Date: 6/10/2023
** Description: Prints a hollow diamond based upon user specifications
** Input: Put in the size and padding
** Output: Outputs the diamond shape to the terminal
******************************************************/

#include <iostream>
#include <cmath>

using namespace std;

// Print (num_spaces) white spaces
void print_spaces(int num_spaces) {
    for (int i = 0; i < num_spaces; i++) {
        cout << " ";
    }
}

// Print stars, with white spaces in between
// For the duration of the length of num_stars,
// when i equals 0 or num_stars - 1, print a star(*).
// otherwise, print a space( ).
void print_stars(int num_stars) {
    for (int i = 0; i < num_stars; i++) {
        if (i == 0 || i == num_stars - 1) {
            cout << "*";
        } else {
            cout << " ";
        }
    }
}

void print_row(int n, int col, int row) {
    if (row == n) {
        return;
    }

    print_spaces(col + abs(n - row));
    print_stars((row * 2) - 1);
    cout << endl;

    print_row(n, col, row + 1);

    print_spaces(col + abs(n - row));
    print_stars((row * 2) - 1);
    cout << endl;
}

void pattern(int n, int col) {
    print_row(n, col, 1);
}

int main() {
    int n, col;

    cout << "Enter the number of rows (odd number): ";
    cin >> n;
    cout << "Enter the leading white spaces: ";
    cin >> col;

    pattern(n, col);

    return 0;
}
