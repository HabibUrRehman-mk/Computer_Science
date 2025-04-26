#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    
    // Input first number
    cout << "Enter the first number: ";
    cin >> num1;
    
    // Input second number
    cout << "Enter the second number: ";
    cin >> num2;
    
    // Swapping if the second number is smaller than the first
    if (num2 < num1) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    
    // Display even numbers between num1 and num2 using a while loop
    cout << "Even numbers between " << num1 << " and " << num2 << " are:\n";
    int current = num1;
    while (current <= num2) {
        if (current % 2 == 0) {
            cout << current << " ";
        }
        current++;
    }
    cout << endl;

    return 0;
}

