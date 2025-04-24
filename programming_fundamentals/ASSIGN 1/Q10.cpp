#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter the Total obtained marks in a subject. \n";
	cin>>num;
	if (num>=85){
		cout<<"Your Grade is A (4.00)";
	}
	if (num>80 && num<85){
		cout<<"Your Grade is A- (3.66)";
	}
	if(num>75 && num<=80){
		cout<<"Your Grade is B+ (3.33)";
	}
	if(num>=71 && num<=74){
		cout<<"Your Grade is B (3.00)";
	}
		if(num>=68 && num<=70){
		cout<<"Your Grade is B- (2.66)";
		}
		if(num>=64 && num<=67){
		cout<<"Your Grade is C+ (2.33)";}
		if(num>=61 && num<=63){
		cout<<"Your Grade is C (2.00)";}
		if(num>=58 && num<=60){
		cout<<"Your Grade is C- (1.66)";}
		if(num>=54 && num<=57){
		cout<<"Your Grade is D+ (1.30)";}
		if(num>=50 && num<=53){
		cout<<"Your Grade is D (1.00)";}
		if(num<50){
		cout<<"Your Grade is F (0.00)";}
	return 0;
}


