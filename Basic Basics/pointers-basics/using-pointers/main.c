#include <stdio.h>
#include <stdlib.h>

int main () {
  
  //don't dereference an unitialized pointer
  // int * pt; // an uninitialized pointer
  // *pt = 5; // this is incorrect. we haven't specified memory yet and so this will cause undef
  // ined behaviour.
  int num = 25;
  int *pnum = (int *)malloc(sizeof(int));
  pnum = &num;
  printf("Pnum is %d \n",*pnum);
  *pnum = 300;
  printf("Pnum is now %d \n", *pnum);
  printf("Num is %d \n",num ); 
  


  
  return 0; 
}
