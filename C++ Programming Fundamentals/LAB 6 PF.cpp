//1)
#include<iostream>
using namespace std;
int main(){
 for(int i=1;i<=5;i++){
 	for(int j=1;j<=5-i;j++){
 			cout<<" ";
	}
 	for(int k=1;k<=i;k++){
 		cout<<"*";
	 }
	 cout<<endl;
 }
	return 0;
}

//2)
#include<iostream>
using namespace std;
int main(){
	int rows;
	 cout << "Enter the number of rows for the pattern: ";
    cin >> rows;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++) {
            cout << i << "  ";
        }
        cout << endl;
    }
	return 0;
}

//5)
#include<iostream>
using namespace std;
int main(){
 for(char i='A';i<='E';i++){
 	for(char j='A';j<=i;j++){
 			cout<<j;
	}
	 cout<<endl;
 }
	return 0;
}

//3)
#include<iostream>
using namespace std;
int main()
{
    for (int i=1;i<=6;++i) {
        for (int j =1; j<=5;++j){
             if(i==1||i==6||j==1||j==5) {
                cout << "* ";
            }  else{
			cout << "  ";
    }
    }
    cout << endl; }
	return 0;}
	
//4)	
# include <iostream>
using namespace std;
int main ()
{
	for ( int i=1; i<=5 ; i++){
		for ( int j=1; j<=9-i;j++){
			cout<<" ";
		}
		for ( int k=1;k<=2*i-1;k++){
		cout<<"*";
			}
			cout<<endl;
			}
			
	//lower triangle
	
	for ( int i=4; i>=1; i--){
		for ( int j=1; j<=9-i;j++){
			cout<<" ";
		}
		for ( int k=1;k<=2*i-1;k++){
		cout<<"*";
			}
			cout<<endl;
			}
	
			return 0;}
