n = int(input("Enter the number of lines to print: "))

for i in range(n):
    print("*" * (i + 1))

# for i in range(n):
#     print("*" * (i + 1) + " " * (n - i - 1) + " " * (n - i - 1) + "*" * (i + 1))

# for i in range(n):
#     print(" " * (n - i - 1) + "*" * (2 * i + 1))