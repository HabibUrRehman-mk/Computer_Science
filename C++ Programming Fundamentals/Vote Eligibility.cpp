/*2.	Write a program that inputs age and nationality. If age is greater than 18, and a person also belongs to specific 
country than, he/she can vote, otherwise not. (Use nested if else*/

#include<iostream>
using namespace std;
int main(){
	int age;
	long int nationality,pakistani;
	cout<<"Enter your age\n";
	cin>>age;
	cout<<"Enter your nationality\n";
	cin>>nationality;
	if(age>=18 && nationality == pakistani){
		cout<<"You can vote";
	}
	else{
		cout<<"You can't vote";
	}
	return 0;
}
