#include <iostream>
using namespace std;
int main() {
    int day, month;
    cout << "Enter current date (day month year): ";
    cin >> day >> month ;
    int totalDays = 0;
    // Calculate days for months passed in the year
    for (int i = 1; i < month; i++) {
        if (i == 2) {
            totalDays += 28;
        } else if (i == 4 || i == 6 || i == 9 || i == 11) {
            totalDays += 30;
        } else {
            totalDays += 31;
        }
    }
    // Add days in the current month
    totalDays += day;

    cout << "Total number of days till the entered date: "<<totalDays<<endl;

    return 0;
}
