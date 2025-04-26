#include<iostream>
using namespace std;
int main(){
	int i,n,loc=-1;
    int arr[3]={10,20,30};
    cout<<"Enter a number to search\n";
    cin>>n;
    for(i=0;i<=2;i++){
    	if(arr[i]==n){
    		loc=i;
		}}
		if(loc==-1){
		cout<<"number not found";
		}
		else{
		cout<<"Number found at index "<<loc;
		}
	

	return 0;
}


