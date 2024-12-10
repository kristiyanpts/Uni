class Employee:
    def __init__(self, i_num, fname, lname, work_experience, education_level, salary, age):
        self.i_num = i_num
        self.fname = fname
        self.lname = lname
        self.work_experience = work_experience
        self.education_level = education_level
        self.salary = salary
        self.age = age

    def display_info(self):
        print(f"ID: {self.i_num}, Name: {self.fname} {self.lname}, Work Experience: {self.work_experience}, Education Level: {self.education_level}, Salary: {self.salary}, Age: {self.age}")

    def bonus(self):
        totalPercetangeBonus = 0

        if self.education_level == "Masters":
            totalPercetangeBonus += 5
        elif self.education_level == "High School":
            totalPercetangeBonus += 2

        if self.work_experience >= 1:
            totalPercetangeBonus += self.work_experience * 1.2

        return self.salary * (totalPercetangeBonus / 100)


def search_by_name(employee_list, name, lname):
    for employee in employee_list:
        if employee.fname == name and employee.lname == lname:
            employee.display_info()
            return True
        
    print("Not found!!!")
    return False

def print_by_education_experience(employee_list, education, experience):
    found_employee = False

    for employee in employee_list:
        if employee.education_level == education and employee.work_experience == experience:
            employee.display_info()
            found_employee = True

    if not found_employee:
        print("No employees found with the given education and experience!!!")

def remove_employee(employee_list, i_num):
    for employee in employee_list:
        if employee.i_num == i_num:
            employee_list.remove(employee)
            print("Information deleted!!!")
            return True
        
    print("Wrong i_num!!!")
    return False

employee_list = []

while True:
    try:
        n = int(input("Въведете броя на служителите: "))
        break
    except ValueError:
        print("Invalid input!!!")

for i in range(n):
    i_num = input("Въведете служителски номер: ")
    fname = input("Въведете име: ")
    lname = input("Въведете фамилия: ")

    while True:
        try:
            education_level = input("Въведете образование: ")
            if education_level != "Masters" and education_level != "High School" and education_level != "Primary School":
                raise ValueError
            
            break
        except ValueError:
            print("ValueError: Education level must be 'Masters', 'High School' or 'Primary School'")

    while True:
        try:
            work_experience = int(input("Въведете стаж: "))
            salary = float(input("Въведете заплата: "))
            age = int(input("Въведете възраст: "))
            break
        except ValueError:
            print("Invalid input!!!")

    employee_list.append(Employee(i_num, fname, lname, work_experience, education_level, salary, age))

while True:
    print("\n1. Display info by name")
    print("2. Display info by education and experience")
    print("3. Remove employee")
    print("4. Calculate bonus for all employess")
    print("5. Exit")
    choice = input("Enter choice: ")

    if choice == "1":
        name = input("Enter name: ")
        lname = input("Enter last name: ")
        search_by_name(employee_list, name, lname)
    elif choice == "2":
        education = input("Enter education: ")
        experience = int(input("Enter experience: "))
        print_by_education_experience(employee_list, education, experience)
    elif choice == "3":
        i_num = input("Enter i_num: ")
        remove_employee(employee_list, i_num)
    elif choice == "4":
        for employee in employee_list:
            print(f"Bonus for {employee.fname} {employee.lname}: {employee.bonus()}")
    elif choice == "5":
        break
    else:
        print("Wrong choice!!!")