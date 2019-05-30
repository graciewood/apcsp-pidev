#include <stdio.h>
#include <string.h>

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

int main() 
{
  int numStudent;
  char input[256];
  printf("Desired number of students to be entered: \n");
  fgets(input, 256, stdin);
  sscanf(input, "%d", &numStudent);
  struct Student student[numStudent];
  for (int i = 0; i < numStudent; i++)
  {
    printf("You are entering student number: %d\n", i);
    printf("First Name: ");
    fgets(input, 256, stdin);
    sscanf(input, "%s", student[i].firstName);
    printf("Last Name: ");
    fgets(input, 256, stdin);
    sscanf(input, "%s", student[i].lastName);
    printf("Age: ");
    fgets(input, 256, stdin);
    sscanf(input, "%d", &student[i].age);
    printf("Student ID: ");
    fgets(input, 256, stdin);
    sscanf(input, "%d", &student[i].studentID);
  }


for (int i = 0; i<numStudent; i++)
{
  printStudent(&student[i]);
}
}
