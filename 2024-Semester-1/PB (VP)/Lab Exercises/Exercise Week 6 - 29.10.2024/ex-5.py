n = int(input("Enter the amount of numbers: "))

numbers = [x for x in range(1, n + 1)]
numberObj = {}

for i in range(len(numbers)):
    fNum = numbers[i]
    reverseNum = numbers[-i - 1]
    numberObj[fNum] = reverseNum

print(numberObj)