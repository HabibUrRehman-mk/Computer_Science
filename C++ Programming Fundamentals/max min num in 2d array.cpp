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
