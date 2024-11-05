def findAreaOfCircle(radius):
    return 3.14 * radius * radius

def findAreaOfRectangle(length, width):
    return length * width

def findAreaOfTriangle(sideA, sideB):
    return (sideA * sideB) / 2

def findAreaOfFigure(figure):
    if figure == "circle":
        radius = float(input("Enter the radius of the circle: "))
        return findAreaOfCircle(radius)
    elif figure == "rectangle":
        length = float(input("Enter the length of the rectangle: "))
        width = float(input("Enter the width of the rectangle: "))
        return findAreaOfRectangle(length, width)
    elif figure == "triangle":
        sideA = float(input("Enter the first side of the triangle: "))
        sideB = float(input("Enter the second side of the triangle: "))
        return findAreaOfTriangle(sideA, sideB)
    else:
        return "Invalid figure"
    
figure = input("Enter the figure: ")
area = findAreaOfFigure(figure.lower())
print(f"Area of {figure.lower()}: {area:.2f}")