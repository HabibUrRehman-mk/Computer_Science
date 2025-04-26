
/*3.	Write a  program that generates 5 MCQ's and their possible answers. In the end, the program will tell the score of 
correct MCQ's.(1 score per correct MCQ) (Use switch statement)*/
#include<iostream>
using namespace std;
int main(){
	int score=0;
	char choice;
	cout<<"Welcome to quiz game!\nEnter the correct answers of following\n";
	cout<<"Question 1 \n Who is the current prime minister of Pakistan\n a)Imran Khan  b)Shahbaz Sharif  c)Asif Zardari\n Your answer: ";
	cin>>choice;
	switch(choice){
	case'b':
	case'B':
	cout<<"Correct Answer!\n";
	score++;
	break;
	default:
	cout<<"Incorrect Answer\n";
	break;}
	cout<<"Question 2-) \n In which year Pakistan won the 50/50 World Cup\n a)1990  b)1991  c)1992\n Your answer: ";
	cin>>choice;
	switch(choice){
	case'c':
	case'C':
	cout<<"Correct Answer!\n";
	score++;
	break;
	default:
	cout<<"Incorrect Answer\n";
	break;}
	cout<<"Your Total score is "<<score;
	return 0;
}














