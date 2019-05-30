#include <stdio.c>
#include <string.c"
#include "student.h"

struct Student 
{
  char firstName[256];
  char lastName[256];
  int age;
  int studentID;
};

void printStudent(struct Student* student)
{
  printf("Name: %s %s\n", student -> firstName, student -> lastName);
  printf("  Age: %d\n", student -> age);
  printf("  Student ID: %d\n", student -> studentID);
}
