
//2.	Write a program that input 10 numbers and counts even and odd numbers out of them
#include <iostream>
using namespace std;
int main(){
	int even=0;
	int odd=0;
	int num;
	for ( int i = 1; i <= 10; ++i){
	
	cout<<" Enter number"<<i<<":";
	cin>>num;
	if (num %2 == 0){
	  even++;}
	  
	 else {
	 	odd++;
	 }
}
	 cout<<"Even numbers are "<<even;
	 cout<<"\nOdd numbers are "<<odd;
	
	return 0;
}

