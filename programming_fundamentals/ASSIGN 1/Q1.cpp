//1.	Write a C++ program that input a number and tell if it's even or odd
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int num1;
	cout<<"Enter a number.\n";
	cin>>num1;
	if (num1 % 2==0)
	{
		cout<<"number is even";
	}
	else{
		cout<<"The number is odd "<<num1<<setw(10);
	}
	
	return 0;
}
