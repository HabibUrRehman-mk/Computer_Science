
// // 1.	Write a program that inputs an integer and passes it to a function. 
// // Then the function calculates the number of digits in that number.
// #include<iostream>
// #include<cmath>
// using namespace std;
// int check(int a){
//   return  int(log10(a)+1);
// }
// int main(){
//     cout<<"Enter a number to check its digits\n";
//     int a;
//     cin>>a;
//     cout<<"Number has "<<check(a)<<" digits";

// return 0;
// }
  
  
// // 2.	Write a function that inputs a decimal number and converts it to Binary Digits.
// #include <iostream>
// using namespace std;
// int main() {
//     int number;
//     cout << "Enter a decimal number: ";
//     cin >> number;
//     int remainders[32]; 
//     int index = 0;
//     if (number == 0) {
//         cout << "Binary representation: 0" << endl;
//         return 0;
//     }
//     while (number > 0) {
//         remainders[index] = number % 2;
//         number /= 2;
//         index++;
//     }
//     cout << "Binary representation: ";
//     for (int i = index - 1; i >= 0; i--) {
//         cout << remainders[i];
//     }
//     cout << endl;

//     return 0;
// }


// // 3.	Write a function that inputs a number and displays its reverse. 
// #include <iostream>
// using namespace std;

// int main() {
//   int n, reversed_number = 0, remainder; 
//   cout << "Enter an integer: ";
//   cin >> n;
//   while(n != 0) {
//     remainder = n % 10;
//     reversed_number = reversed_number * 10 + remainder;
//     n /= 10;
//   }
//   cout << "Reversed Number = " << reversed_number;

//   return 0;
// }

