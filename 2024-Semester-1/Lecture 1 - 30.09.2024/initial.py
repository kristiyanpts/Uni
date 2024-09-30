# # Different ways to print a variable
# age = int(input("Enter your age: "))
# print("Your age is: %d" % age) # old way
# print(f"Your age is: {age}") # f-string
# print("Your age is: " + str(age)) # concatenation
# print("Your age is:", age, "years old") # comma


# # Reading three ints with prompt
# num1 = int(input("Enter first number: "))
# num2 = int(input("Enter second number: "))
# num3 = int(input("Enter third number: "))
# print(f"Number 1 = {num1}, Number 2 = {num2}, Number 3 = {num3}")
# print("Number 1 = {0}, Number 2 = {1}, Number 3 = {2}".format(num1, num2, num3))


# # Reading three ints with prompt using map (Entered on the same line)
# num1, num2, num3 = map(int, input("Enter three numbers: ").split())
# print(f"Number 1 = {num1}, Number 2 = {num2}, Number 3 = {num3}")
# print("Number 1 = {0}, Number 2 = {1}, Number 3 = {2}".format(num1, num2, num3))


# # String methods - upper, lower, title
# name = input("Enter your name: ")
# print(name.upper(), name.lower(), name.title())


# # List
# data = [1, 2, 3, 4, 5]
# print(data)


# # List with range
# data = range(10)
# print(data)


# # List with range and for loop
# data = []
# for i in range(0, 10, 2):
#     data.append(i)
# print(data)
# for i in range(10, 0, -1):
#     data.insert(0, i)
# # for i in data:
# #     print(i, end=" ")
# print(data)
# del data[0]
# print(data)
# del data[-1]
# print(data)
# data.remove(4)
# print(data)
# # data.remove(-1) # ValueError: list.remove(x): x not in list
# if -1 in data:
#     data.remove(-1)
# print(data)
# print(data.pop())
# print(data)
# # print(data.pop(12)) # IndexError: pop index out of range
# print(data.pop(2))
# print(data)
# print(len(data))
# print(len("Ivan"))


# # String operations
# info = "Hello" + " " + "World!"
# print(info)
# print(3 * info)


# Number operations
print(3 + 2, 3 - 2, 3 * 2, 3 / 2, 3 // 2, 3 % 2, 3 ** 2)
print(3 < 2, 3 > 2, 3 <= 2, 3 >= 2, 3 == 2, 3 != 2)