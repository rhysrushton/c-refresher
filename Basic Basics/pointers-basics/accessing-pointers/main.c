#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {

  //pointers are variables that contain memory addresses
  // but remember that these memory addresses will also point to some value
  // you can use the indirection operator '*' to access the value of the variable pointed to
  // by a pointer.
  // this is what is known as dereferencing a pointer
  // %p is format specifier for pointer.
  
  int number = 3;
  int * pnumber;
  *pnumber = number;

  printf("The address of number is %p\n", &number);
  printf("The address of pnumber is %p\n", (void*)&pnumber);
  printf("The value of number is %d\n", number);
  printf("The value of pnumber is %d \n", *pnumber); 
  // the %p specification expects the value to be some kind of pointer type but the type of
  // &pnumber is pointer to pointer to int. 

  // The sizeof operator can be used to determine the number of bytes a pointer occupies.
 
  int num = 36;
  int *pnum = (int *)malloc(sizeof(int)); 
  pnum = &num;
  free(pnum); 
  

   // printf("The address of the pointer is %p \n", &pnum);
   //printf("The value of the pointer is %p\n\n", &num);
   //printf("The value of what the pointer is pointing to is %d\n", *pnum); 
  
  return 0; 
}
