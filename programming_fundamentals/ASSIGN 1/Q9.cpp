#include<iostream>
using namespace std;
int main(){
    // Input electricity units
    double units;
    cout << "Enter the electricity units consumed: ";
    cin >> units;

    // Calculate total electricity bill
    double totalBill = 0;

    if (units <= 50) {
        totalBill = units * 0.50;
    } else if (units <= 150) {
        totalBill = 50 * 0.50 + (units - 50) * 0.75;
    } else if (units <= 250) {
        totalBill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    } else {
        totalBill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }

    // Add surcharge of 20%
    totalBill += 0.20 * totalBill;

    // Display the total electricity bill
    cout << "Total Electricity Bill: Rs. " << totalBill << endl;

    return 0;
}




