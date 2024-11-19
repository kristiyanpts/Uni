class Student:
    def __init__(self, name, facultynumber, grades):
        self.name = name
        self.facultynumber = facultynumber
        self.grades = grades

    def getAverageGrade(self):
        return sum(self.grades) / len(self.grades)
    
    def printDetails(self):
        print(f"Name: {self.name}, Faculty Number: {self.facultynumber}, Grades: {self.grades}, Average Grade: {self.getAverageGrade()}")
    
student1 = Student("John", 12345, [5, 6, 4, 5, 6, 2])
student2 = Student("Jane", 54321, [5, 6, 4, 5, 6, 3])

student1.printDetails() if student1.getAverageGrade() > student2.getAverageGrade() else student2.printDetails()