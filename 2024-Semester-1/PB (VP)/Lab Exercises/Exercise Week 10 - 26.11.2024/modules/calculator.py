def sum(*numbers):
    result = numbers[0]

    for number in numbers[1:]:
        result += number

    return result

def substract(*numbers):
    result = numbers[0]

    for number in numbers[1:]:
        result -= number

    return result

def multiply(*numbers):
    result = numbers[0]

    for number in numbers[1:]:
        result *= number

    return result

def divide(*numbers):
    result = numbers[0]

    for number in numbers[1:]:
        if number == 0:
            raise ValueError("Cannot divide by zero")
        
        result /= number

    return result