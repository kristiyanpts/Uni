num = int(input("Enter a number: "))

if num % 3 == 0 and num % 5 == 0:
    print("Числото е кратно на 3 и 5")
elif num % 3 != 0 and num % 5 != 0:
    print("Числото не е кратно на 3 и 5")
elif num % 3 == 0:
    print("Числото е кратно на 3")
elif num % 5 == 0:
    print("Числото е кратно на 5")

