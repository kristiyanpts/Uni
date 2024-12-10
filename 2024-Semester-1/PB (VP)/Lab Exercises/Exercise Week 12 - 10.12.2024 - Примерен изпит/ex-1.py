n = 0

while True:
    try:
        n = int(input("Enter amount of elements: "))
        if n <= 15 or n >= 35:
            raise ValueError
        break
    except ValueError:
        print("Invalid input. Please enter a positive integer between 15 and 35.")

num_list = []

for i in range(n):
    while True:
        try:
            num = int(input(f"Enter element {i + 1}: "))
            if num <= 30 or num >= 300:
                raise ValueError
            break
        except ValueError:
            print("Invalid input. Please enter an integer between 30 and 300.")
    num_list.append(num)

print(f"Entered list: {num_list}")

count = 0
current_smallest_div_6 = 0
index = 0

for i in range(len(num_list)):
    elem = num_list[i]
    if elem % 3 == 0 and elem % 10 != 0:
        count += 1

    if elem % 6 == 4:
        if current_smallest_div_6 == 0 or elem < current_smallest_div_6:
            current_smallest_div_6 = elem
            index = i

print(f"Number of elements divisible by 3 and not by 10: {count}")
print(f"Index of the smallest element divisible by 6 with remainder 4: {index}")

num_list_2 = [elem for elem in num_list if len(str(elem)) == 2 and ((elem % 2 == 0 or elem % 3 == 0) and elem % 10 != 0)]

print(f"New list: {num_list_2}")

odd_sum = 0
odd_len = 0

for i in range(len(num_list)):
    if i % 2 == 1:
        odd_sum += num_list[i]
        odd_len += 1

avg_odd = odd_sum / odd_len

print(f"Average of odd-indexed elements: {avg_odd}")

num_list_2.remove(min(num_list_2))

print(f"New list after removing the smallest element: {num_list_2}") 

odd_numbers = [elem for elem in num_list_2 if elem % 2 == 1]
num_list_2.insert(0, min(odd_numbers) * max(odd_numbers))

print(f"New list after inserting the product of the smallest and largest odd elements: {num_list_2}")