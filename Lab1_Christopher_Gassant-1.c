// Lab1
// Author: Christopher Gassant
// Class: COP 3223 Professor Juan Parra
// Purpose: This is a simple program that will collect the age, height, and grade, of the user

#include <stdio.h>

//main function
int main()
{

  // Variable initialization
  int age;
  float height;
  char grade;

  
  printf("Enter your age: \n");
  scanf("%d", &age);

  printf("Enter your height: \n");
  scanf("%f", &height);

  printf("Enter your grade: \n");
  scanf(" %c", &grade);

  printf("You entered - Age: %d, Height: %.1f, Grade: %c \n", age, height, grade);

  return 0;
}
