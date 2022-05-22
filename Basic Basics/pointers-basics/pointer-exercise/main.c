#include <stdio.h>
#include <stdlib.h> 
int main() {

  int *pnum = (int *)malloc(sizeof(int)); 
  int num = 200; 
  pnum = &num;

  printf("The address of the pointer is %p \n", &pnum);
  printf("The value of the pointer is %p\n", &num);
  printf("The value of what the pointer is pointing to is %d\n", *pnum); 

  return 0; 
}
