#include<iostream>
using namespace std;
int main(){
/*	1.	Write a program that inputs radius and user choice. It calculates the area of 
	circle if the user enters 1 as choice. It calculates circumference if the user enters 2 as choice.*/
/*	int radius,choice;
	cout<<"Enter the area of circle\n";
	cin>>radius;
	cout<<"If you want to find Area then press 1 and if Circumference press 2\n";
	cin>>choice;
	if (choice == 1){
		cout<<"The Area of circle is "<<3.14*radius*radius;
	}
    if (choice == 2){
    	cout<<"The Circumference of circle is "<<2*3.14*radius;
	}
	if (choice != 1 && choice !=2){
		cout<<"Your input is invalid";
	}*/
	
	
	/*2.	Write a program that inputs three numbers and displays the maximum number by using logical operators*/
/*	int num1,num2,num3,max;
	cout<<"Enter 1st number\n";
	cin>>num1;
	cout<<"Enter 2nd number\n";
	cin>>num2;
	cout<<"Enter 3rd number\n";
	cin>>num3;
    max=num1;
    if (num2>max){
    	max=num2;
	}
	if (num3>max){
		max=num3;
	}
	cout<<"The maximum number out of 3 numbers is "<<max;*/
	
/*	3.	Write a  program that inputs three numbers and 
	displays whether all numbers are equal or not by using nested if conditions.*/
	
/*	int num1,num2,num3;
	cout<<"Enter a number\n";
	cin>>num1;
	cout<<"Enter a number\n";
	cin>>num2;
	cout<<"Enter a number\n";
	cin>>num3;
	if(num1 == num2){
		if(num2 == num3){
			cout<<"All three numbers are equal";
		}
	}
	if (num1 != num2){
		if(num2 != num3){
			cout<<"These numbers are not equal";
		}
	}*/
	
	
//	4.	Write a program that inputs a character and displays whether it's a vowel or not

    /*char CH;
    cout<<"Enter an Alphabet\n";
    cin>>CH;
    if (CH == 'A' ||CH=='E'|| CH == 'I' || CH == 'O' || CH == 'U'|| CH == 'a' || CH == 'e' || CH == 'i' || CH == 'o' || CH == 'u'){
    	cout<<"This is a vowel";
	}
	else {
		cout<<"This is not a Vowel";
	}*/
	
	
	//5.	Write a program that inputs a number of the month and displays the number of days in that month
	
	int month;
	cout<<"Enter the number of month\n";
	cin>>month;
	if(month==1){cout<<"There are 31 days in 1st Month";	}
	if(month==2){cout<<"There are 28 days in 2nd Month";	}
	if(month==3){cout<<"There are 31 days in 3rd Month";	}
	if(month==4){cout<<"There are 30 days in 4th Month";	}
	if(month==5){cout<<"There are 31 days in 5th Month";	}
	if(month==6){cout<<"There are 30 days in 6th Month";	}
	if(month==7){cout<<"There are 31 days in 7th Month";	}
	if(month==8){cout<<"There are 31 days in 8th Month";	}
	if(month==9){cout<<"There are 30 days in 9th Month";	}
	if(month==10){cout<<"There are 31 days in 10th Month";	}
	if(month==11){cout<<"There are 30 days in 11th Month";	}
	if(month==12){cout<<"There are 31 days in 12th Month";	}
	if(month < 1 && month > 12){
	cout<<"Your input is invalid";	}
	
	
//	6.	Write a C++ program that allows a user to enter any character through 
//	keyboard and determines whether it is a capital letter, small letter, digit or a special number
/*char ch;
cout<<"Enter a character\n";
cin>>ch;
if(ch>= 'A' && ch <= 'Z'){
	cout<<"This is a Capital Letter";
}
else if(ch>= 'a' && ch <= 'z'){
	cout<<"This is a Small Letter";
}
else if(ch>= '0' && ch <= '100000000000000000000000000'){
	cout<<"This is a digait";
}
else{
	cout<<"This is a special Letter";
}*/




 //   7.	Write a program that inputs three digits and displays all possible combinations of digits123 132 213 231 312 321
 /* int num1,num2,num3;
  cout<<"Enter a number\n";
  cin>>num1;
  cout<<"Enter a number\n";
  cin>>num2;
  cout<<"Enter a number\n";
  cin>>num3;
  cout<<"The possible combinations are "<<num1<<num2<<num3;
  cout<<" "<<num1<<num3<<num2;
  cout<<" "<<num2<<num1<<num3;
  cout<<" "<<num2<<num3<<num1;
  cout<<" "<<num3<<num1<<num2;
  cout<<" "<<num3<<num2<<num1;*/
  
  
  //8.	Write a program that inputs a number and tells if it positive, negative or equal to 0.
 /* int num;
  cout<<"Enter a number\n";
  cin>>num;
  if(num == 0){
  	cout<<"This is 0";
  }
  else if (num>=1 && num<=100000000000){
  	cout<<"This is a positive number";
  }
  else if(num<0){
  	cout<<"This is a negative number";
  }*/
  
  
  //9)	Write a program that inputs two number and tell in which quadrant it lies
   /* float x, y;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;
    // Determine the quadrant
    if (x > 0 && y > 0) {
        cout << "The point lies in the first quadrant." << endl;
    } else if (x < 0 && y > 0) {
        cout << "The point lies in the second quadrant." << endl;
    } else if (x < 0 && y < 0) {
        cout << "The point lies in the third quadrant." << endl;
    } else if (x > 0 && y < 0) {
        cout << "The point lies in the fourth quadrant." << endl;
    } else if (x == 0 && y == 0) {
        cout << "The point is at the origin." << endl;
    } else {
        cout << "The point lies on one of the axes." << endl;
    }*/
    
    
    
    
    //10)Write a program that inputs two integers. It determines and prints if the first integer is a multiple of second integer.
    int num1, num2;
    cout << "Enter the first integer: ";
    cin >> num1;

    cout << "Enter the second integer: ";
    cin >> num2;

    // Check if num1 is a multiple of num2
    if (num2 != 0 && num1 % num2 == 0) {
        cout << num1 << " is a multiple of " << num2 << "." << endl;
    } else if (num2 == 0) {
        cout << "Cannot determine. The second integer cannot be zero." << endl;
    } else {
        cout << num1 << " is not a multiple of " << num2 << "." << endl;
    }


	return 0;
}


