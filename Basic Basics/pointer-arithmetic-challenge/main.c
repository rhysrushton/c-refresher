#include <stdio.h>

int count (const char * string) {

  char * start = string;
  
  while (*string != '\0') {
    
    ++string; 
  }

  int length = string - start;
  printf("The length is %d \n", length); 
  

  return 0; 
}




void main (void) {

  const char * string = {"hello Bro"};

  count(string); 


}

//count length of the string using pointer arithmetic 
