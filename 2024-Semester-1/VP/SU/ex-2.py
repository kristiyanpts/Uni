n = int(input("Enter a number: "))

oddSum = 0
evenProd = 0

if n < 0:
    for i in range(n, 0):
        if i % 2 == 0:
            if evenProd == 0:
                evenProd = 1
            evenProd *= i
        else:
            oddSum += i
elif n > 0:
    for i in range(1, n + 1):
        if i % 2 == 0:
            if evenProd == 0:
                evenProd = 1
            evenProd *= i
        else:
            oddSum += i

print(f"Сумата е: {oddSum}")
print(f"Произведението е: {evenProd}")