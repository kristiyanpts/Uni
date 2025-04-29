#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EMPLOYEES 30
#define REGULAR_HOURS 40
#define OVERTIME_RATE 1.5
#define TAX_RATE 0.0365

typedef struct {
    int id;
    double hourlyRate;
    int hoursWorked;
    double weeklyWage;
} Employee;

void createFile(const char* filename);
void addEmployee(const char* filename);
void displayWeeklySalaries(const char* filename);
void calculateSalary(Employee* emp);
int getEmployeeCount(const char* filename);

int main() {
    const char* filename = "employees.dat";
    int choice;

    while (1) {
        printf("\n-> Employee Management System <-\n");
        printf("1. Create new employee file\n");
        printf("2. Add employee record\n");
        printf("3. Display weekly salaries\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 0:
                printf("Exiting program. Goodbye!\n");
                return 0;
            case 1:
                createFile(filename);
                break;
            case 2:
                addEmployee(filename);
                break;
            case 3:
                displayWeeklySalaries(filename);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }

    return 0;
}

void createFile(const char* filename) {
    FILE* file = fopen(filename, "wb");
    if (file == NULL) {
        printf("Error creating file.\n");
        return;
    }

    printf("File created successfully.\n");
    fclose(file);
}

void addEmployee(const char* filename) {
    int count = getEmployeeCount(filename);
    if (count >= MAX_EMPLOYEES) {
        printf("Cannot add more employees. Maximum limit (%d) reached.\n", MAX_EMPLOYEES);
        return;
    }

    FILE* file = fopen(filename, "ab");  // Open in append binary mode
    if (file == NULL) {
        printf("Error opening file. Create the file first.\n");
        return;
    }

    Employee emp;

    printf("\nEnter employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter hourly rate: ");
    scanf("%lf", &emp.hourlyRate);

    printf("Enter hours worked this week: ");
    scanf("%d", &emp.hoursWorked);

    calculateSalary(&emp);

    fwrite(&emp, sizeof(Employee), 1, file);
    printf("Employee added successfully.\n");

    fclose(file);
}

void calculateSalary(Employee* emp) {
    double grossWage = 0.0;

    if (emp->hoursWorked <= REGULAR_HOURS) {
        grossWage = emp->hoursWorked * emp->hourlyRate;
    } else {
        grossWage = REGULAR_HOURS * emp->hourlyRate +
                   (emp->hoursWorked - REGULAR_HOURS) * emp->hourlyRate * OVERTIME_RATE;
    }

    emp->weeklyWage = grossWage * (1.0 - TAX_RATE);
}

void displayWeeklySalaries(const char* filename) {
    FILE* file = fopen(filename, "rb");
    if (file == NULL) {
        printf("Error opening file. Create the file first.\n");
        return;
    }

    Employee emp;
    int count = 0;

    printf("\n -> Weekly Salary Report <-\n");

    while (fread(&emp, sizeof(Employee), 1, file) == 1) {
        double grossWage;

        if (emp.hoursWorked <= REGULAR_HOURS) {
            grossWage = emp.hoursWorked * emp.hourlyRate;
        } else {
            grossWage = REGULAR_HOURS * emp.hourlyRate +
                       (emp.hoursWorked - REGULAR_HOURS) * emp.hourlyRate * OVERTIME_RATE;
        }

        double taxes = grossWage * TAX_RATE;

        printf("Employee (ID: %d)\n", emp.id);
        printf("  -> Hourly Rate: %.2f\n", emp.hourlyRate);
        printf("  -> Hours Worked: %d\n", emp.hoursWorked);
        printf("  -> Gross Wage: %.2f\n", grossWage);
        printf("  -> Taxes: %.2f\n", taxes);
        printf("  -> Weekly Wage: %.2f\n", emp.weeklyWage);

        count++;
    }

    if (count == 0) {
        printf("No employees in the file.\n");
    }

    fclose(file);
}

int getEmployeeCount(const char* filename) {
    FILE* file = fopen(filename, "rb");
    if (file == NULL) {
        return 0;
    }

    fseek(file, 0, SEEK_END);
    long fileSize = ftell(file);
    int count = fileSize / sizeof(Employee);

    fclose(file);
    return count;
}