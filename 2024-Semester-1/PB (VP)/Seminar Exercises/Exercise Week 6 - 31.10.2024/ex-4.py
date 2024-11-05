start = int(input("Моля, въведете началната стойнот на диапазона: "))
end = int(input("Моля, въведете крайната стойност на диапазона: "))

if start < end:
    primeNumbers = []
    minPrime = 0
    maxPrime = 0
    avgPrime = 0
    for i in range(start, end + 1):
        if i > 1:
            for j in range(2, i):
                if i % j == 0:
                    break
            else:
                primeNumbers.append(i)
    minPrime = min(primeNumbers)
    maxPrime = max(primeNumbers)
    avgPrime = sum(primeNumbers) / len(primeNumbers)

    print(f"Прости числа в диапазона {start} - {end}: {" ".join(map(str, primeNumbers))}")
    print(f"Минималното просто число е: {minPrime}")
    print(f"Максималното просто число е: {maxPrime}")
    print(f"Средно аритметично на простите числа: {avgPrime:.2f}")
else:
    print("Невалиден диапазон")