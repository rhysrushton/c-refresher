#include <stdio.h>

int main () {

  struct date {
    int time;
    int month; 


  };

  struct date today = {1,2};
  
  struct date *datePtr; 

  datePtr = &today;
  datePtr->time = 3; 
  /* -> allows you to dereference the pointer without having to do something like
     (*datePtr).time */ 
  return 0; 
}


// we can point to structures in c
// pointers to structs are eassier to manipulate than structs
// a pointer can also be an element of a struct.
/*
struct intPtrs
{
int *ptr; 
intr *ptr2;

}
*/
  
