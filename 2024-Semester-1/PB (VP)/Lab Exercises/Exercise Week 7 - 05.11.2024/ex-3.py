def simpleCalculator(a, b, operator):
    if operator == '+':
        return a + b
    elif operator == '-':
        return a - b
    elif operator == '*':
        return a * b
    elif operator == '/':
        return a / b
    else:
        return "Invalid operator"
    
operator = input("Enter the operator (+, -, *, /): ")
a = float(input("Enter the first number: "))
b = float(input("Enter the second number: "))

calculation = simpleCalculator(a, b, operator)
print(f"Result: {calculation:.2f}")