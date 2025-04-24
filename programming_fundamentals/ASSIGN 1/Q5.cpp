/*5.	Write a C program to input all sides of a triangle and check whether triangle is valid or not. A triangle is invalid if you find any 
2 sides whose sum is less then third side, otherwise valid.*/
#include <iostream>
using namespace std;
int main(){
int num1, num2, num3;
	cout<<"Enter 1st Angle of triangle\n";
	cin>>num1;
	cout<<"Enter 2nd Angle of triangle\n";
	cin>>num2;
	cout<<"Enter 3rd Angle of triangle\n";
	cin>>num3;
	if (num1+num2 > num3 && num2+num3 > num1 && num1+num3 > num2){
		cout<<"The triangle is valid";
	}
	else {
		cout<<"The triangle is invalid";
	}
	return 0;
}
