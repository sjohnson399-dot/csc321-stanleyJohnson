# stanley johnson
import random 

number = 5

guess = int(input("Guess num (0-9): "))

print("number" + str(number))
print("your number" + str(guess))

if guess < number:
    print("Your guess is lower than the num.")

elif guess > number: 
    print("your guess is higher than the num.")
else: 
    print("win.")

print("\nfor loop")
for i in range(5):
    print("the hobbits")

print("\nwhile loop") 
count = 0 

while count < 5: 
    print("burger")
    count += 1

