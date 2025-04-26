//1)Write a program that inputs radius of sphere from 
//the user and then Calculates its volume and surface area using 
//the formula Area = 4pR2 and circumference = 4/3pr2 where p = 3.14 

/*#include<iostream>
using namespace std;
int main(){
int r;
cout<<"Enter the Radius of sphere\n";
cin>>r;
float area=4*3.14*r*r; 
cout<<"The area of sphere is "<<area<<endl;
float volume = 1.33 * 3.14 * r * r * r; //1.33== 4/3
cout<<"The Volume of circle is "<<volume;
return 0;
}*/






//2)Write a program to find out the area of triangle when the sides 
//and of the triangle are given. Use appropriate statements to input 
//the values of a, b, and c from the keyboard. Formula for the area 
//of triangle is area = 
/*#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a,b,c,s,area;
	cout<<"Enter the value of a \n";
	cin>>a;
	cout<<"Enter the value of b \n";
	cin>>b;
	cout<<"Enter the value of c \n";
	cin>>c;
	s=a+b+c/2;
	area = (s * (s - a) * (s - b) * (s - c));
	double Area=sqrt(area);
	cout<<"The area of traingle is "<<Area;
	return 0;}*/


 //3)Write a  program to calculate the volume (V) of a cube by taking
 //asures from the user. (Formula: V = length * width * height).
 /*#include<iostream>
 using namespace std;
 int main(){
 	float l,w,h;
 	cout<<"Enter the lenght of cube\n";
 	cin>>l;
 	cout<<"Enter the width of cube\n";
 	cin>>w;
 	cout<<"Enter the height of cube\n";
 	cin>>h;
 	cout<<"The volume of cube is "<<l*w*h;
 	return 0;
 }*/
 
 
 
 
/* 4)Write a program that inputs the x, y coordinates for two points and computes
  the distance between two points using the formula.
Distance = ?( (x2 - x1)² + (y2 - y1)² ).*/
/*#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x1, y1, x2, y2;
    cout << "Enter the coordinates of the first point (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of the second point (x2 y2): ";
    cin >> x2 >> y2;
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << "Distance between the two points: " << distance << endl;

    return 0;
}*/


 
 //5)Write a program in c++ to swap the values of three variables with using 
 //fourth variable
/* #include <iostream>
using namespace std;
int main() {
int a, b, c;
cout << "Enter the value of variable a: ";
cin >> a;
cout << "Enter the value of variable b: ";
cin >> b;
cout << "Enter the value of variable c: ";
cin >> c;
cout << "Original values: a = " << a << ", b = " <<b<< ", c = "<<c<<endl;
int temp = a;
a = b;
b = c;
c = temp;
cout << "Values after swapping: a = " <<a<< ", b = "<<b<< ", c = "<<c<<endl;

    return 0;}*/



//6)Write a C++ program to enter a letter and display the next two letters.
/*#include<iostream>
using namespace std;
int main(){
	char letter;
	cout<<"Enter a letter\n";
	cin>>letter;
	char letter1=letter+1;
	char letter2=letter+2;
	if((letter>='a' && letter<'z') || (letter>='A' && letter<'Z')){
		cout<<"The next letters are "<<letter1<<" "<<letter2;
	}
	else{
		cout<<"Your input is invalid";
	}
	return 0;
}*/




//7)Write a program that inputs a number and displays its corresponding ASCII code.

/*#include <iostream>

using namespace std;

int main() {
    
	char character;
    
    cout << "Enter a character: ";
    
	cin >> character;
    
cout << "The ASCII code for '" << character << "' is " << (int)character << endl;
    
	return 0;
}*/
//8)Write a program that inputs principal amount, rate of interest and 
//total time
//. It calculates the compound interest and displays it.
/*#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float A,p,r,n,t,x;
	//A= final amount | p=initial amount | r= interest rate | t= time period
	cout<<"Enter the initial amount \n";
	cin>>p;
	cout<<"Enter the interest rate\n";cin>>r;
	cout<<"How many times interest applied per time period\n";
	cin>>n;
	cout<<"Enter the number of time period elapsed\n";
	cin>>t;
	x=(1+r/n)*p;
	A=pow(x , n*t);
	cout<<"The final amount is "<<A;
	return 0;
}*/




//9)Write a program that inputs five-digit number through the keyboard and calculates the sum of its digits.
/*#include <iostream>
using namespace std;
int main() {
    int number, sum = 0;
    cout << "Enter a five-digit number: ";
    cin >> number;
    // Check if the number has exactly five digits
    if (number < 10000 || number > 99999) {
        cout << "Please enter a valid five-digit number.\n";
        return 1; // Exit the program with an error code
    }
    // Calculate the sum of digits
    while (number > 0) {
        sum += number % 10; // Add the last digit to the sum
        number /= 10;       // Remove the last digit
    }
    // Display the result
    cout << "Sum of digits: " << sum <<endl;
    return 0; // Exit the program successfully
}*/




//9)Write a program that inputs five-digit number through the keyboard and calculates the sum of its digits.
/*#include<iostream>
using namespace std;
int main(){
	int num1,num2,num3,num4,num5,sum;
	cout<<"Enter the 1st number\n";
	cin>>num1;
    cout<<"Enter the 2nd number\n";
	cin>>num2;
	cout<<"Enter the 3rd number\n";
	cin>>num3;
	cout<<"Enter the 4th number\n";
	cin>>num4;
	cout<<"Enter the 5th number\n";
	cin>>num5;
	sum=num1+num2+num3+num4+num5;
	cout<<"The sum of these numbers is "<<sum;
	return 0;
}*/



//10)Write a program that inputs Basic Salary and calculates 35% dearness allowance, 
//25% house rent and then displays the gross salary.
#include<iostream>
using namespace std;
int main(){
	int salary,rent,allowance,percentage;
	cout<<"Enter the amount of your salary\n";
	cin>>salary;
	percentage=salary/100;
	allowance=percentage*35;
	rent=percentage*25;
	cout<<"The 35% dearness allowance of your salary is "<<percentage*35<<endl;
	cout<<"The 25% house rent according to your salary is "<<percentage*25<<endl;
	cout<<"your Total salary is "<<salary+allowance+rent;
	return 0;
}

















 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 


















































