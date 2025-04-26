//3.	Write a C++ program to input 3 angles and check whether the triangle is Acute (All angles are less than 90°), 
//   Right Triangle (one angle is 90°) or Obtuse triangle(Has an angle more than 90°).
#include<iostream>
using namespace std;
int main(){
	int num1,num2,num3,sum;
	cout<<"Enter the 1st angle of triangle\n";
	cin>>num1;
	cout<<"Enter the 2nd angle of triangle\n";
	cin>>num2;
	cout<<"Enter the 3rd angle of triangle\n";
	cin>>num3;
	sum = num1+num2+num3;
	if (num1 == 90 || num2 == 90 || num3 == 90)
	{
		cout<<"Triangle is Right angle triangle.";
	}
	if (num1 > 90 && num2 > 90 && num3 > 90){
		cout<<"The Triangle is Obtuse.";
	}
	if(num1 < 90 && num2 < 90 && num3 < 90){
		cout<<"The Triangle is Acute.";
	}
	
	return 0;
}
