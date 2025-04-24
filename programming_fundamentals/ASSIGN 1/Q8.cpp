/*8.	Write a C++ program to suggest change for the shopkeeper. It must show count total number of each currency notes in amount given 
by user considering notes of 1000, 500, 100, 50, 10 and coins of 5, 2, 1 .
Like in 1738, its 1 note of thousand, 1 note of 500, 2 notes of 100, 3 notes of 10, 1 coin of 5, 1 coins of 2 and 1 coin of 1.*/

#include <iostream>
using namespace std;
int main() {
    int amount, thousand, fiveHundred, hundred, fifty, ten, five, two, one;
    cout << "Enter the amount received: ";
    cin >> amount;
    // Calculate notes and coins
    thousand = amount / 1000;
    amount %= 1000; // Remaining amount
    fiveHundred = amount / 500;
    amount %= 500;
    hundred = amount / 100;
    amount %= 100;
    fifty = amount / 50;
    amount %= 50;
    ten = amount / 10;
    amount %= 10;
    five = amount / 5;
    amount %= 5;
    two = amount / 2;
    amount %= 2;
    one = amount;
    // Display notes and coins
    cout << "\nChange to be given:" << endl;
    if (thousand) {
        cout << thousand << " note(s) of Rs. 1000" << endl;
    }
    if (fiveHundred) {
        cout << fiveHundred << " note(s) of Rs. 500" << endl;
    }
    if (hundred) {
        cout << hundred << " note(s) of Rs. 100" << endl;
    }
    if (fifty) {
        cout << fifty << " note(s) of Rs. 50" << endl;
    }
    if (ten) {
        cout << ten << " note(s) of Rs. 10" << endl;
    }
    if (five) {
        cout << five << " coin(s) of Rs. 5" << endl;
    }
    if (two) {
        cout << two << " coin(s) of Rs. 2" << endl;
    }
    if (one) {
        cout << one << " coin(s) of Rs. 1" << endl;
    }
    return 0;
}

