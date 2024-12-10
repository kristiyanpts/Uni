class Vehicle:
    def __init__(self, model, year, fuel):
        if type(model) != str:
            raise ValueError("Model must be a string")
        if type(year) != int:
            raise ValueError("Year must be an integer")
        if type(fuel) != int:
            raise ValueError("Fuel must be an integer")
        
        if year >= 1999 and year <= 2025:
            self.year = year
        else:
            raise ValueError("Year must be between 1999 and 2025")
        
        self.model = model

        if fuel >= 0:
            self.fuel = fuel
        else: 
            self.fuel = 0

    def get_fuel(self):
        return self.fuel
    
    def set_fuel(self, fuel):
        if type(fuel) != int:
            raise ValueError("Fuel must be an integer")
        if fuel >= 0:
            self.fuel = fuel
        else:
            self.fuel = 0

    def displacement(self, fuel_consumption):
        if type(fuel_consumption) != int and type(fuel_consumption) != float:
            raise ValueError("Fuel consumption must be an integer or a float")
        
        if fuel_consumption >= 0:
            distance = (self.fuel / fuel_consumption) * 100

            return float(f"{distance:.2f}")
        else:
            raise ValueError("Fuel consumption must be a positive integer")
        
    def __str__(self):
        return f"Model: {self.model}, Year: {self.year}, Fuel: {self.fuel}"
    
class Destination:
    def __init__(self, x, y, z):
        if type(x) != int and type(x) != float:
            raise ValueError("X must be an integer or a float")
        if type(y) != int and type(y) != float:
            raise ValueError("Y must be an integer or a float")
        if type(z) != int and type(z) != float:
            raise ValueError("Z must be an integer or a float")

        self.x = x
        self.y = y
        self.z = z

    def route(self):
        starting_point = (0, 0, 0)
        destination = (self.x, self.y, self.z)

        distance = ((destination[0] - starting_point[0])**2 + (destination[1] - starting_point[1])**2 + (destination[2] - starting_point[2])**2)**0.5

        return float(f"{distance:.2f}")
    
class Car(Vehicle):
    def __init__(self, model, year, fuel, tyres):
        super().__init__(model, year, fuel)

        if type(tyres) != int:
            raise ValueError("Tyres must be an integer")
        
        if tyres <= 0 or tyres > 4:
            tyres = 4

        self.tyres = tyres

    def checking(self, given_value, fuel_consuption):
        distance = self.displacement(fuel_consuption)
        print(distance, given_value)

        if distance >= given_value:
            return True
        
        return False
    
    def __str__(self):
        return super().__str__() + f", Tyres: {self.tyres}"

def printing_result(car, *points):
    for point in points:
        print(f"Distance to point ({point.x}, {point.y}, {point.z}) {point.route()}km: {car.checking(point.route(), 10)}")

car = Car("BMW", 2020, 100, 4)
point1 = Destination(10, 10, 10)
point2 = Destination(20, 20, 20)
point3 = Destination(30, 30, 30)
point4 = Destination(40, 40, 40)
point5 = Destination(700, 900, 500)

printing_result(car, point1, point2, point3, point4, point5)