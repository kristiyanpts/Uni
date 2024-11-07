num = int(input("Enter a four digit number: "))

if len(str(num)) != 4:
    print("Invalid number")
else:
    digitsSum = 0

    firstDigit = num // 1000
    num = num % 1000
    digitsSum += firstDigit

    secondDigit = num // 100
    num = num % 100
    digitsSum += secondDigit

    thirdDigit = num // 10
    num = num % 10
    digitsSum += thirdDigit

    fourthDigit = num
    digitsSum += fourthDigit

    print(f"The sum of the digits is: {digitsSum}")