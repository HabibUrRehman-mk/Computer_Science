//6.	Write a C++ program that input 5 numbers and find maximum between five numbers.
#include <iostream>
using namespace std;
int main(){
	int num1,num2,num3,num4,num5,max;
	cout<<"Enter 1st number\n";
	cin>>num1;
	cout<<"Enter 2nd number\n";
	cin>>num2;
	cout<<"Enter 3rd number\n";
	cin>>num3;
	cout<<"Enter 4th number\n";
	cin>>num4;
	cout<<"Enter 5th number\n";
	cin>>num5;
    max=num1;
    if (num2>max){
    	max=num2;
	}
	if (num3>max){
		max=num3;
	}
	if (num4>max){
		max=num4;
	}
	if (num5>max){
		max=num5;
	}
	cout<<"The maximum number out of 5 numbers is "<<max;
	return 0;
}
