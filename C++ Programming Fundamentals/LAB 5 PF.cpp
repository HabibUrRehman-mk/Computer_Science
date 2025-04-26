/*Problem # 1:
Write an application for a bottle vending machine in which a customer inserts an amount and selects the cold drink he/she wants. 
We assume that the vending machine has five following beverages (7up, Fanta, Sprite, Pepsi, Coke). 
Show the beverages and their prices (of your choice) to the user. Display the beverage name selected by the user,
 its price and the remaining amount after purchase of a cold drink. Machine would display an error message: “Out of money” if 
 the amount entered by the user is less than the cost of beverage, he/she wants to purchase. Following is just a sample, values in the red are user inputs.
====================
Welcome to the vending machine. We have following drinks.
Enter 1 for Pepsi, price = Rs. 80 Enter 2 for Coke, price = Rs. 80 Enter 3 for 7up, price = Rs. 75 Enter 4 for Sprite, price = Rs. 79 Enter 5 for Fanta, price = Rs. 76
Which drink do you want? 2 Enter the amount you have? 70
Out of money, you cannot buy a Coke*/
/*#include<iostream>
using namespace std;
int main(){
	int choice,amount;
	cout<<"Welcome to vending Machine!\n We have following Drinks\n Enter 1 for Pepsi, price = Rs. 80\n Enter 2 for Coke,"
	    <<"price = Rs. 80 \n Enter 3 for 7up, price = Rs. 75\n Enter 4 for Sprite, price = Rs. 79\n Enter 5 for Fanta, price = Rs. 76"
        <<"\n Which drink do you want?\n ";
        cin>>choice;
        cout<<"Enter the amount you have\n";
		cin>>amount;
		if(choice==1 && amount>=80){
			cout<<"you can buy Pepsi and your remaining balance will be Rs "<<amount-80;
		}
		else if(choice==1 && amount<80){
			cout<<"Out of money, you cant buy a Pepsi";
		}
		if(choice==2 && amount>=80){
			cout<<"you can buy Coke and your remaining balance will be Rs "<<amount-8;
		}
		else if(choice==2 && amount<80){
			cout<<"Out of money, you cant buy a Coke";
		}
        if(choice==3 && amount>=75){
			cout<<"you can buy 7up and your remaining balance will be Rs "<<amount-75;
		}
		else if(choice==3 && amount<75){
			cout<<"Out of money, you cant buy a 7up";
		}
		if(choice==4 && amount>=79){
			cout<<"you can buy Sprite and your remaining balance will be Rs "<<amount-79;
		}
		else if(choice==4 && amount<79){
			cout<<"Out of money, you cant buy a Sprite";
		}
		if(choice==5 && amount>=76){
			cout<<"you can buy Fanta and your remaining balance will be Rs "<<amount-76;
		}
		else if(choice==5 && amount<76){
			cout<<"Out of money, you cant buy a Fanta";
		}
		if (choice>5){
			cout<<"Invalid Input";
		}
	return 0;
}

*/

/*#include <iostream>

int main() {
    // Step 1: Get the total amount in the money box
    float total_amount;
    std::cout << "Enter the total amount in the money box (in rupees): ";
    std::cin >> total_amount;

    // Step 2: Calculate expenses for the round trip
    const int rickshaw_fare = 130;
    const int bus_fare = 75;
    const int candy_cost = 5;

    // Step 3: Determine mode of transportation
    std::string mode_of_transport;
    int travel_expenses;

    if (total_amount > 260) {
        mode_of_transport = "Rickshaw";
        travel_expenses = rickshaw_fare;
    } else if (total_amount >= 150 && total_amount <= 260) {
        mode_of_transport = "Bus";
        travel_expenses = bus_fare;
    } else {
        mode_of_transport = "Bicycle";
        travel_expenses = 0;
    }

    // Step 4: Calculate the amount spent on travelling and the amount remaining
    float remaining_amount = total_amount - travel_expenses;

    // Step 5: Calculate the amount spent on candies
    int candies_expenses = static_cast<int>(remaining_amount / candy_cost);
    remaining_amount -= candies_expenses * candy_cost;

    // Step 6: Print the results
    std::cout << "Mode of transportation: " << mode_of_transport << std::endl;
    std::cout << "Amount spent on travelling: " << travel_expenses << " rupees" << std::endl;
    std::cout << "Amount spent on candies: " << candies_expenses << " rupees" << std::endl;
    std::cout << "Remaining amount in the money box: " << remaining_amount << " rupees" << std::endl;

    return 0;
}
*/

/*3.	You were orphaned at an early age. To make ends meet, you sought work in a local toy car workshop in your city,
 and your job is to build toy cars from a collection of parts. Each toy car needs 4 wheels, 1 car body, and 2 figures of 
 people to be placed inside. You notice that sometimes, you'll get orders of the number of cars to make, but you won't have the 
 total required parts available. To prevent this, you want to find out how many complete toy cars can you make, given the total 
 number of wheels, car bodies and figures available at hand currently.*/
 
 #include <iostream>
 using namespace std;
 int main(){
 	int wheels, body , fig;
 	cout<<"Enter thr total number of wheels available\n";
 	cin>>wheels;
 	cout<<"Enter thr total number of car bodies available\n";
 	cin>>body;
 	cout<<"Enter thr total number of figures available\n";
 	cin>>fig;
 	cout<<"Total number of car y
 	return 0;
 }















































