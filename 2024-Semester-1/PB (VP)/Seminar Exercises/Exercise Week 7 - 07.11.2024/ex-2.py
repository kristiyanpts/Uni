students = []
studentsAmount = int(input("Въведете броя на студентите: "))

for i in range(studentsAmount):
    studentName = input("Въведете име на студент: ")
    studentAge = int(input("Въведете възраст на студент: "))
    studentAvgGrade = float(input("Въведете среден успех на студент: "))
    students.append((studentName, studentAge, studentAvgGrade))

gradeToFilter = float(input("Моля въведете оценката: "))

filteredStudents = [student for student in students if student[2] >= gradeToFilter]
youngestStudent = students[0]

for student in students:
    if student[1] < youngestStudent[1]:
        youngestStudent = student

ageSum = 0

for student in students:
    ageSum += student[1]

avgAge = ageSum / studentsAmount

print(f"a) -> {filteredStudents}")
print(f"b) -> {youngestStudent}")
print(f"c) -> {avgAge:.2f}")