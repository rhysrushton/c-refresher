#include <stdio.h>
#include <stdlib.h> 

int main () {

  int size;
  printf("Please enter the number of bytes \n");
  scanf("%d", &size);
 
  char * str;
  str = (char *)malloc(size);
  printf("Please enter your string \n");
  scanf("%s", str); 
  printf("%s\n", str); 
  
  
  
  return 0; 
}
