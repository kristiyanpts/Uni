def changeNumsInList(list, num):
    listCopy = list.copy()
    for i in range(len(listCopy)):
        if listCopy[i] > num:
            listCopy[i] = 0
    return listCopy

numList = list(map(int, input("Enter a list of numbers: ").split()))
num = int(input("Enter a number to check: "))

updatedList = changeNumsInList(numList, num)
print(f"Initial list: {" ".join(map(str, numList))}")
print(f"List after changes: {" ".join(map(str, updatedList))}")