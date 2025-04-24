/*4.	Write a program that input 3 numbers tell if these numbers are consecutive or not. 
(like 34,35,36 are consecutive but 23,25,26 are not because there should be 24 after 23 to be consecutive).*/
#include<iostream>
using namespace std;
int main(){
	int num1, num2, num3;
	cout<<"Enter 1st number\n";
	cin>>num1;
	cout<<"Enter 2nd number\n";
	cin>>num2;
	cout<<"Enter 3rd number\n";
	cin>>num3;
	if (num1 + 1 == num2 && num2 + 1 == num3)
    {
    	cout<<"The number is consecutive ";
		}
	else 
	{
		cout<<"The number is not consecutive";
	}	
	
	return 0;
}
