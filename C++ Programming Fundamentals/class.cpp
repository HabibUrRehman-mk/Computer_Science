#include<iostream>
using namespace std;
int main(){
	//code to check 2 numbers are equal or not
/*	int n,m;
	cout<<"Enter a number\n";
	cin>>n;
	cout<<"Enter another number\n";
	cin>>m;
	
	if (n==m){
		cout<<"Numbers are equal";
	}
	else{
		cout<<"Numbers are not equal";
	}*/
	
	// n>0 = +ive n<0 = -ve
	/*int n;
	cout<<"Enter a number\n";
	cin>>n;
	if (n==0){
		cout<<"Number is 0";
	}
	if(n>0){
		cout<<"The number is positive";
	}
	if(n<0){
		cout<<"The number is Negative";
	}*/
	// Code to calculate grade of a subject
	int n;
	cout<<"Enter your marks\n";
	cin>>n;
	if ((n>=85)&&(n<=100)){
	cout<<"your grade is A+ (4.00 GPA)";
    }
	if((n>=81)&&(n<85)){
		cout<<"Your grade is A (3.66 GPA)";
	} 

    if((n>=76)&&(n<=80)){
    	cout<<"Your grade is B+ (3.33 GPA)";
	}

	if((n>=71)&&(n<=75)){
		cout<<"Your grade is B (3.00 GPA)";
	}
	if((n>=66)&&(n<=70)){
		cout<<"Your grade is C (2.66 GPA)";
	}
	if((n>=61)&&(n<=51)){
		cout<<"Your grade is D (2.33 GPA)";
	}

	if (n<=50){
		cout<<"Your grade is F";
	}
	return 0;
}
