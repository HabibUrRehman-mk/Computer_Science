#include <iostream>
using namespace std;
int main() {
    int rows = 3; // Number of rows in the pattern
    int spaces = 0; // Number of spaces to print

    for (int i = 0; i < rows; ++i) {
        // Print spaces
        for (int j = 0; j < spaces; ++j) {
        cout << " ";
        }
         //Print '&' characters
        for (int k = 0; k < (rows - i); ++k) {
        cout << "& ";
        }
        cout << endl;

         //Increase spaces for the next row
        spaces += 2;
    }

    return 0;
}
