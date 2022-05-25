#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main () {

  char *str; 
  /* initial memory allocation */

  str = (char *)malloc(15);
  strcpy(str, "jason");
  printf("String = %s, Address = %p\n", str, str);

  /* Reallocating memory */
  str = (char*)realloc(str,25);
  strcat(str, ".com");
  printf("String = %s, Address = %p\n", str, str);
  free(str); 

  


  
  return 0; 
}

// malloc() allows you to dynamically allocate memory at runtime.
// int *pNumber = (int*)malloc(25*sizeof(int)); -> makes space for 25 ints
// a memory leak occurs when you allocate memory but then it doesn't get freed when it is no
// longer needed. to free a block of memory:
/* 
free(pNumber); 
pNumber = NULL; 
*/
/*
calloc() function offers a couple of advantages over malloc
-allocates memory as a nuber of elements of a given size
-initializes the memory that is allocated so that all bytes are zero 
calloc() requires two argument values: 
-number of data items for which space is required 
-size of each data item 

int *pNumber = (int*)calloc(75, sizeof(int)); 
*/ 
// realloc enables you to resuse or extend memory that you previously allocated using malloc or
// calloc
// expexts two argument values
// a pointer containng an address that was previously returned by a call to malloc/calloc
// the size in bytes of the new memory that you want allocated.



