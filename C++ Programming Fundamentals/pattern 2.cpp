
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
