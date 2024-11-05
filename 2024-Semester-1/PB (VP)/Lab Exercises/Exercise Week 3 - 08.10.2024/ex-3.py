workHours = int(input("Enter the number of hours worked: "))
hourlyRate = float(input("Enter the hourly rate: "))

payment = workHours * hourlyRate

print(f"Payment for {workHours} hours of work at an hourly rate of ${hourlyRate} is: ${payment:.2f}")