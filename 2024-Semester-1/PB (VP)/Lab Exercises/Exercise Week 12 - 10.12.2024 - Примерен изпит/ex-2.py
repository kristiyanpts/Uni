class Worker:
    def __init__(self, worker_num, fname, lname, work_experience_company, total_years_experience, salary, age):
        self.worker_num = worker_num
        self.fname = fname
        self.lname = lname
        self.work_experience_company = work_experience_company
        self.total_years_experience = total_years_experience
        self.salary = salary
        self.age = age

    def worker_information(self):
        return f"Worker number: {self.worker_num}\nFirst name: {self.fname}\nLast name: {self.lname}\nWork experience company: {self.work_experience_company}\nTotal years experience: {self.total_years_experience}\nSalary: {self.salary}\nAge: {self.age}"
    
    def salary_bonus(self):
        total_perc = 0

        if self.work_experience_company >= 5 and self.work_experience_company <= 10:
            total_perc += 1.5
        elif self.work_experience_company > 10:
            total_perc += 2
        elif self.total_years_experience < 5:
            total_perc += 0.5

        return self.salary * (total_perc / 100)
    
def search_by_num(list, wnum):
    found = False

    for worker in list:
        if worker.worker_num == wnum:
            found = True
            break

    return found

def search_by_name_experience(list, name, comp_exp):
    found = False

    for worker in list:
        if worker.fname == name and worker.work_experience_company == comp_exp:
            found = True
            worker_info = worker.worker_information()
            print(worker_info)

    if not found:
        print("No workers found with the specified name and work experience company.")

def add_worker(list, worker):
    list.append(worker)

def remove_worker(list, wnum):
    delete = False

    for worker in list:
        if worker.worker_num == wnum:
            list.remove(worker)
            delete = True
            break

    if delete:
        print(f"Information deleted !!!")
    else:
        print(f"Wrong  worker_num !!!")

n = 0
worker_list = []

while True:
    try:
        n = int(input("Enter amount of workers: "))
        if n <= 0:
            raise ValueError
        break
    except ValueError:
        print("Invalid input. Please enter a positive integer.")

for i in range(n):
    worker_num = input("Enter worker number: ")
    fname = input("Enter first name: ")
    lname = input("Enter last name: ")
    work_experience_company = int(input("Enter work experience company: "))
    total_years_experience = int(input("Enter total years experience: "))
    salary = float(input("Enter salary: "))
    age = int(input("Enter age: "))
    worker = Worker(worker_num, fname, lname, work_experience_company, total_years_experience, salary, age)
    add_worker(worker_list, worker)

print(f"Worker list: {worker_list}")

print(f"Worker with worker number 1?: {search_by_num(worker_list, '1')}")

print("Workers with first name 'Ivan' and work experience company 5:")
search_by_name_experience(worker_list, "Ivan", 5)

remove_worker(worker_list, "1")
print(f"Worker list after removing worker with worker number 1: {worker_list}")