//1. check weather a number is prime or not
//#include <iostream>
//using namespace std;
//int main() {
//    int num;
//    bool isPrime = true;
//    cout << "Enter a number: ";
//    cin >> num;
//    if (num == 0 || num == 1) {
//        isPrime = false;
//    } 
//    else {       for (int i = 2; i <= num / 2; ++i) {
//            if (num % i == 0) {
//                isPrime = false;
//                break;
//            }
//        }
//    }
//
//    if (isPrime)
//        cout << num << " is a prime number." << endl;
//    else
//        cout << num << " is not a prime number." << endl;
//
//    return 0;
//    
//}

//2.program to calculate the factorial of a number
#include <iostream>
using namespace std;
int main() {
    double num;
    int factorial = 1;

    cout << "Enter a number to calculate its factorial \n";
    cin >> num;

    for (int i = 1; i <= num; ++i) {
        factorial *= i;
    }
    cout << "Factorial of " << num << " is: " << factorial << endl;

    return 0;
}




