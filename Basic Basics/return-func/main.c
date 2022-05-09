#include <stdio.h>

int multiplyTwoNumbers (int x, int y)
{
  int result = x * y; 
  return result; 

}


int main(void) {

  // you can assign data returned by a function as follows
  // int x = myFunctionCall();
  int result = 0;
  result = multiplyTwoNumbers(10,20);
  printf("The result is %d \n", result); 
  return 0; 
}
