#include<iostream>
using namespace std;
int main(){
int n,array[n];
cout<<"How many numbers you want to enter in Array?"<<endl;
cin>>n;
if (n==0){
	return -1;
}
cout<<"Start"<<endl;
int j=1;
for(int i=0;i<n;i++){
	cout<<"Enter number: "<<j<<endl;
	cin>>array[i];
	j++;
}
cout<<"======================"<<endl;
for(int i=0;i<n;i++){
	cout<<"\t";
	cout<<array[i]<<"\n";
}
	return 0;
}


