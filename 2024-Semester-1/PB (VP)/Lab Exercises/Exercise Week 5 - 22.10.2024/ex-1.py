num = int(input("Enter a number: "))
listContainingDigits = list(map(int, list(str(num))))

tup1 = tuple(listContainingDigits)
tup2 = tuple(reversed(listContainingDigits))

print(tup1)
print(tup2)