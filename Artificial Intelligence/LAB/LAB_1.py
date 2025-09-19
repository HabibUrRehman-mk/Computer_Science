# Activity 1: Check if number is even or odd

num = int(input("Enter an integer: "))

if num % 2 == 0:
    print(num, "is Even")
else:
    print(num, "is Odd")


# Activity 2: Keep accepting integers until 0, then display sum

total = 0

while True:
    num = int(input("Enter an integer (0 to stop): "))
    if num == 0:
        break
    total += num

print("The sum of entered numbers is:", total)


# Activity 3: Check prime number

num = int(input("Enter an integer: "))

if num <= 1:
    print(num, "is not a prime number")
else:
    is_prime = True
    for i in range(2, int(num ** 0.5) + 1):  
        if num % i == 0:
            is_prime = False
            break

    if is_prime:
        print(num, "is a prime number")
    else:
        print(num, "is not a prime number")


# Activity 4: Accept 5 integers and sum them

total = 0
for i in range(5):
    num = int(input(f"Enter number {i+1}: "))
    total += num

print("The sum of the 5 numbers is:", total)


# Activity 5: Sum of numbers from 0 to 10

num = 0
total = 0

while num <= 10:
    total += num
    num += 1

print("Sum of numbers between 0 and 10 is:", total)


# Activity 6: Taking input from user

name = input("What is your name? ")
print("Hello " + name)

job = input("What is your job? ")
print("Your job is " + job)

num = input("Give me a number: ")
print("You said:", num)


# Activity 7: Guessing Game

import random

secret_number = random.randint(1, 9)
guess_count = 0

while True:
    user_input = input("Guess the number between 1 and 9 (or type 'exit' to quit): ")

    if user_input.lower() == "exit":
        print("Game Over! You made", guess_count, "guesses.")
        break

    guess = int(user_input)
    guess_count += 1

    if guess < secret_number:
        print("Too low!")
    elif guess > secret_number:
        print("Too high!")
    else:
        print("Exactly right! 🎉 You guessed it in", guess_count, "tries.")
        break



# # Task 1
Input =input('Enter a number\n')
print("Reverse of number is ",Input[::-1])


# Task 2

intergers={1,2,3,4,5,7,8}
evensum=oddsum=0
for i in range(0,len(intergers)):
    if i%2 == 0:
        evensum+=i
    else:
        oddsum+=i

print("Sum of even numbers: ",evensum)
print("Sum of odd numbers: ",oddsum)


# Task 3
term_1=0
term_2=1
terms=int(input("How many terms want to print: "))

if terms==0:
    print("Enter valid number of terms")
elif terms==1:
    print(term_1)
elif terms==2:
    print(term_1," ",term_2)
else:
    print(term_1," ",term_2,end=" ")
    start=3
    while(start<=terms): 
        print(term_1+term_2,end=" ")
        term_1,term_2=term_2,term_1+term_2
        
        start+=1


#Task 4 Grade
marks = int(input('Enter your marks: '))

if marks > 100 or marks < 1:
    print("Enter valid marks 1-100")
elif marks < 50:
    print("Your grade is F")
elif marks <= 60:
    print("Your grade is E")
elif marks <= 70:
    print("Your grade is D")
elif marks <= 80:
    print("Your grade is C")
elif marks <= 90:
    print("Your grade is B")
else: 
    print("Your grade is A")


# Task 5 Factorial
input_number=int(input('Enter a number to calculate factorial: '))

def factorial(n):
    if n==0:
        return 1
    else:
        return n * factorial(n-1)
    
print(factorial(input_number))
