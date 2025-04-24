////"	Write a C++ program that could find whether the number entered through keyboard is odd or even and 
////should also tell that whether its prime or not. The user enters a zero to show that he has no more values to
////. The program should display total number of odds, total number of evens and total number of prime entered.
//
//#include <iostream>
//using namespace std;
//int main() {
//  int num, oddCount = 0, evenCount = 0, primeCount = 0;
//  cout << "Enter positive number (0 to quit):\n";
//  for (cin >> num; num > 0; cin >> num) {
//    if (num <= 1) {
//      if (num == 0) {
//        break; 
//      }
//      cout << num << " is not prime." << endl;
//      continue;
//    }
//    if (num % 2 == 0) {
//      evenCount++;
//      cout << num << " is even." << endl;
//    } else {
//      oddCount++;
//      cout << num << " is odd." << endl;
//    }
//    bool isPrime = true;
//    for (int i = 2; i <= num / 2; ++i) { // Check divisibility up to half of num
//      if (num % i == 0) {
//        isPrime = false;
//        break;
//      }
//    }
//    if (isPrime) {
//      primeCount++;
//      cout << num << " is prime." << endl;
//    }
//  }        
//  cout << "\nTotal even numbers: " << evenCount << endl;
//  cout << "Total odd numbers: " << oddCount << endl;
//  cout << "Total prime numbers: " << primeCount << endl;
//return 0;
//}

////////	Write a C++ Program to Check Whether a Number is Palindrome or Not. Using do while loop
//#include <iostream>
//using namespace std;
//int main() {
//  int num, reverse = 0, remainder, originalNum;
//
//  cout << "Enter a number\n ";
//  cin >> num;
//  // Store the original number for comparison later
//  originalNum = num;
//  // Reverse the number using a do-while loop
//  do {
//    remainder = num % 10; // Extract the last digit
//    reverse = reverse * 10 + remainder; // Append the digit to the reversed number
//    num /= 10; // Remove the last digit from the original number
//  } while (num != 0);
//
//  // Check if the original number and reversed number are equal
//  if (originalNum == reverse) {
//    cout << originalNum << " is a palindrome." << endl;
//  } else {
//    cout << originalNum << " is not a palindrome." << endl;
//  }
//
//  return 0;
//}
//



////Write a C++ Program to Display Armstrong Number Between Two Intervals.
//#include<iostream>
//using namespace std;
//
//int main() {
//   int num, num1, rem, sum = 0;
//
//   cout << "Enter the number\n";
//   cin >> num;
//   num1 = num;
//
//   while (num1 != 0) {
//      rem = num1 % 10;
//      sum += rem * rem * rem;
//      num1 /= 10;
//   }
//
//   if (sum == num) {
//      cout << num << " is an Armstrong number"<<endl;
//   } else {   
//      cout << num << " is not an Armstrong number"<<endl;
//   }
//   while(num=0){
//      break;
//   }
//   
//   return 0;
//}

////
////"Write a program that inputs a number and check whether it is a Perfect number or not??. 
////A Perfect is a number that is numerically equals to the sum of its divisors.
//
//#include<iostream>
//using namespace std;
//int main() {
//    int num, sum = 0;
//    
//    cout << "Enter a number: ";
//    cin >> num;
//    
//    for(int i = 1; i < num; i++) {
//        if(num % i == 0) {
//            sum += i;
//        }
//    }
//    
//    if(sum == num) {
//        cout << num << " is a perfect number";
//    } else {
//        cout << num << " is not a perfect number";
//    }
//    return 0;
//}
//
//
//



//
//"	Write a program that inputs numbers until the user enters a negative number 
//.the program calculate the average, maximum and minimum of all positive numbers.

#include <iostream>
using namespace std;
int main() {
    double number, sum = 0.0, average = 0.0;
    int count = 0;
    int max = INT_MIN, min = INT_MAX;  // Initialize with system's min/max for flexibility

    cout << "Enter positive numbers (enter a negative number to stop):\n";
    // Loop until the user enters a negative number
    while (cin >> number) {
        if (number > 0) {
            sum += number;
            count++;

            // Update max and min values efficiently
            max = (number > max) ? number : max;
            min = (number < min) ? number : min;
        } else {
            break;  // Exit the loop on negative input
        }
    }
    // Calculate average only if there are positive numbers entered
    if (count > 0) {
        average = sum / count;
        cout << "Average: " << fixed << average << endl;
        cout << "Maximum: " << max << endl;
        cout << "Minimum: " << min << endl;
    } else {
        cout << "No positive numbers entered." << endl;
    }

    return 0;
}













































