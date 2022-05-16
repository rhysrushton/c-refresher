// in programming languages
// indirection is the ability to reference something using a name, reference or container instead
// of the value itself

// A pointer provides and indirect means of accessing the value of a particular data item
// a pointer is a variable whose value is a meomory address
// its value is the address of another location in memory that can contain a value.

// it is not enough to say that a variable is a pointer
// you also have to specify the kind of variable to which the pointer points.
// different variable types take up different amounts of storage.
// some pointer operations require knowledge of that storage size 
// use a space between astriks and variable when declaring
// omit space when derefrencing.

// you can initialize a pointer so that it does not point to anything using NULL

#include <stdio.h>
#include <stddef.h> 
int main() {

  int number = 99;
  int * pnumber = &number;

  printf("This is the falue of 'number': %d \n", number);
  printf("This is the value of 'pnumber': %d \n", *pnumber); 
  *pnumber = 30; 
  printf("This is the new value of 'pnumber': %d \n",*pnumber); 
   
  
  
  
  return 0; 

}


