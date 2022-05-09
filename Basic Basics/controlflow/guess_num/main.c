#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
int main(){

  //create random number
  time_t t;
  srand((unsigned)time(&t));
  int randomNumber = rand() %21;
  
  printf("%d\n", randomNumber);
  int guess_count, guess;
  guess_count = 0; 

  printf("Please enter your guess \n");
  scanf("%d", &guess);

  while ((guess != randomNumber) &&( guess_count < 4)) {
    while ((guess< 0) || (guess > 20)) {
      printf("Enter a number within correct range\n");
      guess_count ++; 
      scanf("%d", &guess); 
    }
    if (guess > randomNumber) {
      printf("Too high!\n");
      
    }
    else if (guess < randomNumber) {
      printf("Too low!\n"); 
      
    }
    

    guess_count ++;
    printf("please enter your guess \n");
    scanf("%d", &guess); 
  }

  if( guess == randomNumber){
    printf("You got it\n");} 
  else{
    printf("Out of goes\n"); 
  }
  return 0; 
}
