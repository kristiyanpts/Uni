from modules.areas import *

def main():
    figure = input("Enter the figure: ")
    
    if figure == "triangle":
        base = float(input("Enter the base: "))
        height = float(input("Enter the height: "))
        print(f"Area of the triangle is {area_of_triangle(base, height)}")
    elif figure == "square":
        side = float(input("Enter the side: "))
        print(f"Area of the square is {area_of_square(side)}")
    elif figure == "rectangle":
        length = float(input("Enter the length: "))
        width = float(input("Enter the width: "))
        print(f"Area of the rectangle is {area_of_rectangle(length, width)}")
    elif figure == "rhombus":
        diagonal1 = float(input("Enter the first diagonal: "))
        diagonal2 = float(input("Enter the second diagonal: "))
        print(f"Area of the rhombus is {area_of_rhombus(diagonal1, diagonal2)}")
    elif figure == "trapezoid":
        base1 = float(input("Enter the first base: "))
        base2 = float(input("Enter the second base: "))
        height = float(input("Enter the height: "))
        print(f"Area of the trapezoid is {area_of_trapezoid(base1, base2, height)}")
    else:
        raise ValueError("Invalid figure")
    
try:
    main()
except ValueError as e:
    print(f"ValueError: {e}")