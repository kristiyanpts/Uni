def complex_calculator(*numbers, lambda_function):
    result = numbers[0]
    for number in numbers[1:]:
        result = lambda_function(result, number)

    return result

n = int(input("n: "))
numbers = [int(input(f"Текущото число {i + 1} от списъка с числа: ")) for i in range(n)]

numbers_sum = complex_calculator(*numbers, lambda_function=lambda res, x: res + x)
numbers_product = complex_calculator(*numbers, lambda_function=lambda res, x: res * x)
numbers_difference = complex_calculator(*numbers, lambda_function=lambda res, x: res - x)

print("Сумата е: ", numbers_sum)
print("Произведението е: ", numbers_product)
print("Разликата е: ", numbers_difference)