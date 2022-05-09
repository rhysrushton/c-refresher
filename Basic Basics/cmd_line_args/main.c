#include <stdio.h>

int main(int argc, char *argv[])
{

  int numberOfArguments = argc;
  char *argument1 = argv[0];
  char *argument2 = argv[1];

  printf("Number of arguments: %d\n", numberOfArguments);
  printf("%s\n", argument1);
  printf("%s\n", argument2); 
  
  
  return 0; 
} 
