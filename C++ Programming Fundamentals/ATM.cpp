#include<iostream>
using namespace std;
int main(){
int long long option,username1,pin,pin1,widrawamount,depositamount,option1,accountnumber,transferamount;
string username= "admin";
int balance=50000;
start:
cout<<"Enter your username\n";
cin>>username;
cout<<"Enter your Pin\n";
cin>>pin;
if(username!="admin" || pin!=123){cout<<"invalid username or password!\n";goto start;}
if(username=="admin" && pin==123){
    start1:
cout<<"Welcome to ATM!\n Please select a valid option\n1.Widraw Amount\n2.Deposit Amount\n3.Transfer Amount\n4.Balance Inquiry\n5.Change Pin\n6.Change Username\n7.Exit\n";
cin>>option;
if(option==1){
	start2:
cout<<"Enter the amount you want to widraw\n";
cin>>widrawamount;cout<<endl;
if(widrawamount<balance){
	cout<<"Transaction Successful!\nPlease take your ATM card\n Your new balance is Rs "<<balance-widrawamount;
	balance= balance-widrawamount;
}
if(widrawamount>balance){
	cout<<"Insufficient Balance!";goto start2;
}
cout<<"Do you want to make another transaction?\nEnter 1 for another transaction and 2 to exit\n";cin>> option1; //option1 is to take input from user that he want any other transaction or not
if(option1==1){goto start1;} switch(option1){case 2:break;}
}
 }
 if(option==2){
 	cout<<"Enter the amount you want to deposit\n";
 	cin>>depositamount;cout<<endl;
 	cout<<"Transaction Successful!\n Your new balance is Rs "<<balance+depositamount;
 	cout<<"Do you want to make another transaction?\nEnter 1 for another transaction and 2 to exit\n";cin>> option1; //option1 is to take input from user that he want any other transaction or not
if(option1==1){goto start1;} switch(option1){case 2:break;}
   balance=balance+depositamount;
 }
 if(option==3){
 	start3:
 	cout<<"Enter the account number\n";cin>>accountnumber;
 	cout<<"\nEnter the amount you want to transfer\n";cin>>transferamount;
 	if(transferamount<balance){
 		cout<<"\nTransaction Successful. Rs "<<transferamount<<" has been transferred.Your new balnace is"<<balance-transferamount;
	 }
	 if(transferamount>balance){
	 	cout<<"Insufficient Balance.Please enter a valid amount.";goto start3;
	 }
cout<<"Do you want to make another transaction?\nEnter 1 for another transaction and 2 to exit\n";cin>> option1; //option1 is to take input from user that he want any other transaction or not
if(option1==1){goto start1;} switch(option1){case 2:break;}
   balance=balance-transferamount;	 
 }
 if(option==4){
 	cout<<"Your current balance is Rs "<<balance<<"\n";
 	cout<<"Do you want to make another transaction?\nEnter 1 for another transaction and 2 to exit\n";cin>> option1; //option1 is to take input from user that he want any other transaction or not
if(option1==1){goto start1;} switch(option1){case 2:break;}
 }
 if(option==5){
 	cout<<"Enter a new pin";cin>>pin1;
 	cout<<"\n Your pin is updated. Your new pin is "<<pin1<<endl;
 	cout<<"Do you want to make another transaction?\nEnter 1 for another transaction and 2 to exit\n";cin>> option1; //option1 is to take input from user that he want any other transaction or not
if(option1==1){goto start1;} switch(option1){case 2:break;}
 }
 if(option==6){
 	cout<<"Enter a new username";cin>>username;
 	cout<<"\n Your username is updated. Your new username is "<<username1<<endl;
 	cout<<"Do you want to make another transaction?\nEnter 1 for another transaction and 2 to exit\n";cin>> option1; //option1 is to take input from user that he want any other transaction or not
if(option1==1){goto start1;} switch(option1){case 2:break;}
 }
 switch(option){
 	case 7:break;
 }
if(option>7){cout<<"Invalid input. Select a valid option,"; goto start1;}
return 0;
}
