def square_root_of_number(number):
    if number < 0:
        raise ValueError("Cannot calculate square root of negative number")
    
    return number ** 0.5

def main():
    number = int(input("Enter a number: "))
    print(f"Square root of {number} is {square_root_of_number(number)}")

try:
    main()
except ValueError as e:
    print(f"ValueError: {e}")
finally:
    print("Good bye!")