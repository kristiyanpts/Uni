# Exercise 1
class Person:
    def __init__(self, firstname, lastname, age, nationality):
        self.firstname = firstname
        self.lastname = lastname
        self.age = age
        self.nationality = nationality

    def print(self):
        return f"{self.firstname} {self.lastname} is {self.age} years old and is {self.nationality}."
    
# Exercise 2 - Adition to Exercise 1
class Student(Person):
    def __init__(self, firstname, lastname, age, nationality, university, yearofstudy):
        super().__init__(firstname, lastname, age, nationality)

        self.university = university
        self.yearofstudy = yearofstudy

    def print(self):
        return f"{self.firstname} {self.lastname} is {self.age} years old and is {self.nationality}. They are studying at {self.university} and are in year {self.yearofstudy}."

# Exercise 3 - Adition to Exercise 1
class Lecturer(Person):
    def __init__(self, firstname, lastname, age, nationality, university, experience):
        super().__init__(firstname, lastname, age, nationality)

        self.university = university
        self.experience = experience

    def print(self):
        return f"{self.firstname} {self.lastname} is {self.age} years old and is {self.nationality}. They are teaching at {self.university} and have {self.experience} years of experience."
    
person1 = Person("John", "Doe", 25, "British")
print(person1.print())

student1 = Student("Jane", "Doe", 20, "American", "Harvard", 2)
print(student1.print())

lecturer1 = Lecturer("Alice", "Smith", 35, "Australian", "MIT", 10)
print(lecturer1.print())