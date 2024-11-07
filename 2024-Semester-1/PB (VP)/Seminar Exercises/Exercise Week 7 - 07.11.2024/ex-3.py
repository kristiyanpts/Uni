n = int(input("Моля въведете стойност на дължината на списъка: "))

numList = [int(input("Моля въведете стойност за елемент: ")) for x in range(n)]
filteredNumList = [num * 2 for num in numList if num > 10 and num % 2 == 0]
sortedNumList = sorted(filteredNumList, reverse=True)

print(f"Получения лист -> {filteredNumList}")
print(f"Сортирания лист -> {sortedNumList}")