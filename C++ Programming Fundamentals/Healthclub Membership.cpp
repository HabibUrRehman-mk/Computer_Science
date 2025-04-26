
#include<iostream>
using namespace std;
int main(){
	int choice,months,charges;
    cout<<" Health Club Membership Menu\n 1)Standard Adult member ship Rs 50/Month\n 2)Child Membership Rs 20/Month\n 3)Senior Citizen Membership Rs 30/Month";
    cout<<"\nEnter your choice\n";
    cin >> choice;
    if(choice >= 1 && choice<=3){
    	cout<<"For How many months\n";
    	cin>>months;
    	switch (choice)
    	{
    		case 1: charges = months * 50;
    		break;
    		case 2: charges=months*20;
    		break;
    		case 3: charges=months*30;
    		break;
		}
		cout<<"Total charges are "<<charges;
		}

   if(choice>3){
   	cout<<"Invalid input";
   }
   		
    
	return 0;
}


