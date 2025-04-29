//
// Created by Kristiyan Petsanov on 7.04.25.
//

#include <stdio.h>

typedef struct Student {
  char name[50];
  int age;
  float grade;
} Student;

typedef struct Class {
  Student students[30];
  int student_count;
} Class;

typedef struct Vipusk {
  int year;
  Class classes[10];
  int class_count;
} Vipusk;

float average_class_grade(Class *class) {
  float total = 0;
  for (int i = 0; i < class->student_count; i++) {
    total += class->students[i].grade;
  }
  return total / class->student_count;
}

float average_vipusk_grade(Vipusk *vipusk) {
  float total = 0;
  for (int i = 0; i < vipusk->class_count; i++) {
    total += average_class_grade(&vipusk->classes[i]);
  }
  return total / vipusk->class_count;
}

int main() {
  Vipusk vipusk;
  int i, j;
  printf("Enter the year of the Vipusk: ");
  scanf("%d", &vipusk.year);

  printf("Enter the number of classes: ");
  scanf("%d", &vipusk.class_count);

  for (i = 0; i < vipusk.class_count; i++) {
    printf("Enter the number of students in class %d: ", i + 1);
    scanf("%d", &vipusk.classes[i].student_count);

    for (j = 0; j < vipusk.classes[i].student_count; j++) {
      printf("Enter the name of student %d: ", j + 1);
      scanf(" %[^\n]", vipusk.classes[i].students[j].name);
      printf("Enter the age of student %d: ", j + 1);
      scanf("%d", &vipusk.classes[i].students[j].age);
      printf("Enter the grade of student %d: ", j + 1);
      scanf("%f", &vipusk.classes[i].students[j].grade);
    }
  }

  printf("Average grade of the Vipusk %d: %.2f\n", vipusk.year, average_vipusk_grade(&vipusk));
  for (i = 0; i < vipusk.class_count; i++) {
    printf("Average grade of class %d: %.2f\n", i + 1, average_class_grade(&vipusk.classes[i]));
  }

  return 0;
}