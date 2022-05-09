#include <stdio.h>

void multiplyTwoNumbers(int x, int y)
{
  int result = x*y;
  printf("The product of %d multiplied by %d is %d \n", x,y,result); 

}

int main() {

  // paramater is a variable in a function decleration and function def/implementation
  // when a function is called the arguments arethe data you pass into the functions params
  // params are defined in the header, they are placesholds for the arguments
  // params are a list of parameter names with thir types
  // each param is sperated by a comma
  /*
    When passing an array as an argument to a function
    You must also passs an additional argument specifying the size of the array
    The function has no means of knowing how many elements there are in an array. 
   */
  multiplyTwoNumbers (10, 20); 
  multiplyTwoNumbers(20,30);
  
  
  return 0; 
}



