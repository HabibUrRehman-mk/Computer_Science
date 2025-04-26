#include<iostream>
using namespace std;
int main(){
	int num1, num2, num3, num4;
	
	cout<<"how many marks you got in Quizes"<<endl;
	
	cin>>num1;
	
	cout<<"how many marks you got in Assignments"<<endl;
	cin>>num2;
	cout<<"how many marks you got in Mid Exam"<<endl;
	cin>>num3;
	cout<<"how many marks you got in Terminal Exam"<<endl;
	cin>>num4;
	cout<<"Your total marks are "<<num1+num2+num3+num4<<endl;
	if ((num1+num2+num3+num4>=85)&&(num1+num2+num3+num4<=100)){
	cout<<"your grade is A+";
    }
	if((num1+num2+num3+num4>=81)&&(num1+num2+num3+num4<=85)){
		cout<<"Your grade is A";
	} 

    if((num1+num2+num3+num4>=76)&&(num1+num2+num3+num4<=80)){
    	cout<<"Your grade is B+";
	}

	if((num1+num2+num3+num4>=71)&&(num1+num2+num3+num4<=75)){
		cout<<"Your grade is B";
	}
	if((num1+num2+num3+num4>=66)&&(num1+num2+num3+num4<=70)){
		cout<<"Your grade is C";
	}
	if((num1+num2+num3+num4>=61)&&(num1+num2+num3+num4<=65)){
		cout<<"Your grade is D";
	}

	if (num1+num2+num3+num4<60){
		cout<<"Your grade is F";
	}

	
	
	return 0;
}
