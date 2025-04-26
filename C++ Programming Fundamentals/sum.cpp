#include <iostream>
using namespace std;
int main(){
	int num1, num2, num3, num4, num5;
		cout<<"Enter total marks\n";
		cin>>num5;
		//this is crested by HABIB MUGHAL
		
	cout<<"Enter total marks obtained in assignments\n";
	cin>>num1;
	cout<<"Enter total marks obtained in quizes\n";
	cin>>num2;
	cout<<"Enter total marks obtained in mids\n";
	cin>>num3;
	cout<<"Enter total marks obtained in finals\n";
	cin>>num4;
	cout<<"Your total marks are"<<num1+num2+num3+num4;
	cout<<"_and your percentage is"<<num1+num2+num3+num4/num5*100;
	cout<<".Keep it up!";
}


