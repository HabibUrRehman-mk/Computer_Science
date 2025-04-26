#include<iostream>
using namespace std;
int main(){
	int num1,num3,num4;
	float num2;
	cout<<"What is your weight in Kilograms\n";
	cin>>num1;
	cout<<"What is your height in Meters.( One meter is approximately equal to 3.281 feet )\n";
	cin>>num2;
	num3 = num2*num2;
	num4=num1/num3;
	cout<<"Your BMI value is "<<num4;
	if (num4 < 18.5){
		cout<<" and you are underweight";
	}
		if (num4 > 18.5 && num4 < 24.9){
		cout<<" and you are healthy";
	}
		if (num4 >= 25 && num4 < 29.9){
		cout<<" and you are overweight";
		}
			if (num4 >= 30){
		cout<<" and you are obese";}
	
	return 0;
}
