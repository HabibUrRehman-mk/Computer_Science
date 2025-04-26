//#include<iostream>
//using namespace std;
//int main(){
//int i,sum=0;
//	for(i=0;i<11;i++){
//		if(i%2 != 0){
//			cout<<i<<endl;
//            sum+=i;
//		}
//					
//		
//	}
//		cout<<"Sum of these numbers is "<<sum;
//	return 0;
//}
//

#include <iostream>
using namespace std;
int main(){
	int num,leng,result;
	cout<<"Which numbers's table you want \n";cin>>num;
	cout<<"Enter the lenght of table\n";cin>>leng;
	for(int i=num;i<=leng;i++){
		cout<<num*i++;
	}
//	cout<<num<<"x "<<" ="<<result<<"\n";
	return 0;
}









