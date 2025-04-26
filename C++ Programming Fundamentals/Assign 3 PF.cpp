#include<iostream>
using namespace std;
int main(){
      int i,j;
      for(i=1;i<=5;i++){
      	for(j=1;j<i;j++){
      		cout<<" ";
	  }
	  for(j=i;j<=5;j++){
	  	cout<<"*";
	  }
	  cout<<endl;
	  }
	return 0;
}

#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1, num = i; j <= i; j++) {
            cout << num << " ";
            num += i;
        }
        cout << endl;
    }
    for (int i = 2; i >= 1; i--) {
        for (int j = 1, num = i; j <= i; j++) {
            cout << num << " ";
            num += i;
        }
        cout << endl;
    }
    return 0;
}
//

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
#include <iostream>
using namespace std;
int main() {
    int arr[2][3];
    int maxnum, minnum;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }
    maxnum = arr[0][0];
    minnum = arr[0][0];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] > maxnum) {
                maxnum = arr[i][j];
            }
            if (arr[i][j] < minnum) {
                minnum = arr[i][j];
            }
        }
    }
    cout << "Maximum number in the 2-D array: " << maxnum << endl;
    cout << "Minimum number in the 2-D array: " << minnum << endl;

    return 0;
}
////
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
//

