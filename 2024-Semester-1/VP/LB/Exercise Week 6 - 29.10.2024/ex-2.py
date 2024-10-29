import random

n = int(input("Enter the amount of numbers: "))

numbers = [random.randint(1, 100) for x in range(n)]
# numbers = [x for x in range(n)]
modified_numbers = []

for idx in range(len(numbers) - 1):
    modified_numbers.append(numbers[idx])
    modified_numbers.append(numbers[idx] + numbers[idx + 1])
modified_numbers.append(numbers[-1])

print(numbers)
print(modified_numbers)