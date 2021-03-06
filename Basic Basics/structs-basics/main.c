#include <stdio.h>
#include <stdlib.h>

int main () {

  struct date {
    int month;
    int day;
    int year; 
  }; 

  // declare a struct variable
  struct date today = {7,2,2015}; 
  
  printf("The month is %d\n", today.month);
  printf("The day is %d\n", today.day);
  printf("The month is %d\n", today.year);
  
  today.month = 4;
  today.day = 2;
  today.year = 1; 

  printf("The month is %d\n", today.month);
  printf("The day is %d\n", today.day);
  printf("The month is %d\n", today.year);

  today = (struct date) {9,25,2025}; 
  printf("The month is %d\n", today.month);
  printf("The day is %d\n", today.day);
  printf("The month is %d\n", today.year);
  
  
  return 0; 
}

// Structs allow you to group variables
/*
  struct {
    int month;
    int day;
    int year; 
  } today;
the above is an alternative way of declaring a struct, where you are only going to use the struct once and you have the variable name at the end. 

*/
