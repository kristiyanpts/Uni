n = int(input("Enter the amount of numbers that you want to sum: "))

sum = 0
for i in range(n):
    sum += int(input("Enter a number: "))

print("The sum of the numbers is:", sum)