#include <iostream>
using namespace std;
int main(){
	int i, sum = 0;
	for (i=1; i<=1000; i++)
	{
	cout<<i<<endl;
	sum = sum + i;
	}
	cout<<"The sum of 1st 10 numbers is "<<setw (10) <<sum;
	return 0;
	}
