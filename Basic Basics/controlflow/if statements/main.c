#include <stdio.h>

int main(){

  //if doesn't require {} if the body is a single statement
  // else if helps you evaluate another condition in the control flow
  // the conditional operator allows you to evaluate three operators condition ?  expresson 1 (True result): expression 2 (else result)
  // x = y > 7 ? 25 : 50;
  // Results in x being set to 25 if y is greate than 7, or to 50 if not. 
  int score = 97;
  int number = 2; 

    if (score > number)
      printf("Hey \n");
  if (score> number) {
    printf("Hey there \n");
    printf("Hey again\n");
    
  };

  if(score <
     number)
    printf("yeah\n");
  else
    printf("nah\n"); 

  return 0; 
}


 
