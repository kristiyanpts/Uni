def circle_calculator(radius):
    perimeter = 2 * 3.14 * radius
    area = 3.14 * radius ** 2
    return (float(f"{area:.2f}"), float(f"{perimeter:.2f}"))

def rectangle_calculator(width, height):
    perimeter = 2 * (width + height)
    area = width * height
    return (area, perimeter)

def triangle_calculator(a, b, c):
    perimeter = a + b + c
    pp = perimeter / 2
    area = (pp * (pp - a) * (pp - b) * (pp - c)) ** 0.5
    return (area, perimeter)

def geometry_calculator(shape, *args):
    if shape == "circle":
        if len(args) != 1:
            return "Invalid input for circle"
        
        return circle_calculator(*args)
    elif shape == "rectangle":
        if len(args) != 2:
            return "Invalid input for rectangle"
        
        return rectangle_calculator(*args)
    elif shape == "triangle":
        if len(args) != 3:
            return "Invalid input for triangle"
        
        return triangle_calculator(*args)
    else:
        return "Invalid shape"
    
print(geometry_calculator("rectangle", 5, 10))
print(geometry_calculator("triangle", 6, 8, 10))
print(geometry_calculator("triangle", 6, 8))
print(geometry_calculator("circle", 7))
print(geometry_calculator("square", 5))