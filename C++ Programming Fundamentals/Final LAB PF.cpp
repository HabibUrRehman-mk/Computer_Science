#include <iostream>
using namespace std;
int main() {
    int n = 3;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            cout << " ";
        }
        for(int j = 0; j < (n - i) * 2 - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}


//#include <iostream>
//using namespace std;
//int main() {
//    int n;
//    cout << "How many numbers do you want to enter?\n";
//    cin >> n;
//    int arr[n];
//    for(int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//    int low = arr[0];
//    int high = arr[0];
//
//    for(int i = 1; i < n; i++) {
//        if(arr[i] < low) {
//            low = arr[i];
//        }
//        if(arr[i] > high) {
//            high = arr[i];
//        }
//    }
//    cout << "Lowest number is " << low << endl;
//    cout << "Highest number is " << high << endl;
//    return 0;
//}



