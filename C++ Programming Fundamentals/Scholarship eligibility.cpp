/*1.	Write a program that inputs GPA and total income. If GPA is greater then 3.5 and income is less than 30,000, 
then it's a full scholarship and if GPA is grater than 3.5 and income is less than 50,000, then it's a half scholarship. (Use nested if else). */
#include<iostream>
using namespace std;
int main(){
	float gpa;
	int income;
    cout<<"Enter your current GPA\n";
    cin>>gpa;
    cout<<"Enter your monthly income\n";
    cin>>income;
    if(gpa>=3.5 && income<30000){
    	cout<<"You are eligible for Full Scholarship";
	}
	else if(gpa>=3.5 && income<50000){
		cout<<"You are eligible for Half Scholarship";
	}
	else if( income>50000){
		cout<<"You are not eligible for Scholarship";
	}
	return 0;
}
