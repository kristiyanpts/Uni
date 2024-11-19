class MPS:
    def __init__(self, brand, cubature):
        self.brand = brand
        self.cubature = cubature

    def printDetails(self):
        print(f"{self.brand} {self.cubature}cc")

class Vehicle(MPS):
    def __init__(self, brand, cubature, model, hp):
        super().__init__(brand, cubature)

        self.model = model
        self.hp = hp

    def printDetails(self):
        print(f"{self.brand} {self.model} {self.cubature}cc {self.hp}hp")
    
vehicle1 = Vehicle("BMW", 2000, "X5", 300)
vehicle2 = Vehicle("Audi", 2500, "A6", 350)

print("The vehicle with more horsepower is:")
vehicle1.printDetails() if vehicle1.hp > vehicle2.hp else vehicle2.printDetails()