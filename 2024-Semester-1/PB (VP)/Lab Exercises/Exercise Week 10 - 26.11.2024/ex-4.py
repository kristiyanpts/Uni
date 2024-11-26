from modules.calculator import *

def main():
    operation = input("Enter the operation (+, -, *, /): ")
    n = int(input("Enter the number of operands: "))
    operands = [float(input(f"Enter operand {i + 1}: ")) for i in range(n)]

    if operation == "+":
        print(f"Result of the sum is {sum(*operands)}")
    elif operation == "-":
        print(f"Result of the substract is {substract(*operands)}")
    elif operation == "*":
        print(f"Result of the multiply is {multiply(*operands)}")
    elif operation == "/":
        print(f"Result of the divide is {divide(*operands)}")
    else:
        raise ValueError("Invalid operation")
    
try:
    main()
except ValueError as e:
    print(f"ValueError: {e}")