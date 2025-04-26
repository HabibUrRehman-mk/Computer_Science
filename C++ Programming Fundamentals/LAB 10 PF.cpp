#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int a=50;
	float b=a+5;
cout<<setw(6)<<a+b<<endl;
cout<<a+int(b);
	return 0;
	
}



// // 4.	Write a program that inputs two numbers and passes to the function. 
// // The function must display the first number raised to power of second number.
// //  For example, if user enters 2 and 4, it will display 16.
// #include<iostream>
// #include<cmath>
// using namespace std;
// int powerf(int a, int b){
//   cout<<" The value of "<<a<<" raised to power "<<b<<" is "<<pow(a,b);
// }
// int main(){
//   int a,b;
//   cout<<"Enter the base numbers\n";
//   cin>>a;
//   cout<<"\nEnter the power of number\n";
//   cin>>b;
//   powerf(a,b);
// return 0;
// }



// 5.	Write a program that inputs a number and then passes it to a function.
//  The function should check if it is a prime number or not.
#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int n){
  if(n<=1){return false;}
  if(n<=3){return true;}
  if(n%2==0 || n%3 == 0){return false;}
  for(int i=5; i*i <= n; i+=6){
    if (n%i ==0 || n%(i+2)==0){return false;}
    return true;
  }}
  int main(){
    cout<<"Enter a number\n";
    int num;
    cin>> num;
    cout<<num<<(isprime(num) ? " is": " is not")<<" a prime number";
    return 0;
  }
