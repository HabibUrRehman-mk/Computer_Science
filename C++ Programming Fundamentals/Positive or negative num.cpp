#include<iostream>
using namespace std;
int main(){
 int num;
  cout<<"Enter a number\n";
  cin>>num;
  if(num == 0){
  	cout<<"This is 0";
  }
  else if (num>=1 ){
  	cout<<"This is a positive number";
  }
  else if(num<0){
  	cout<<"This is a negative number";
  }
	return 0;
}


