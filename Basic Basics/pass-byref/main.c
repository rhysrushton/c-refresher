#include <stdio.h>
#include <stdlib.h> 
void square (int * num ) {

  *num *= *num; 

  
}



void  main (void) {
  
  int * num = malloc(sizeof(int));
  *num = 20; 
  square(num); 
  printf("%d\n", *num); 
 
}


// passing by value is where in order to edit the value of a variable outide of the scope in which
// it is declared you would have to define it as a global variable.
// passing by reference means you would use the memory address of a variable and so you can edit
// the value of the variable directly outside its scope of decleration. 
