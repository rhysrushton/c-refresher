#include <stdio.h>

int main(){

  //while this condition is true do this
  int count = 0;

  while (count < 5) {

    printf("We counting. We at %d\n", count);
    count ++; 

  }


  int num = 0;
  scanf("%d", &num);
  while (num != 0) {
    //keeps checking for val of num until execution finsihed. 
    scanf("%d", &num); 
    
  }

  // in while loop the body is executed if condion is true
  // dowhile loop the body gets executed at least once because conditon is at the bottom.
  int numer; 
  do
    scanf("%d", &numer);
  while (numer != 20);

  int number = 4;
  do {
    printf("The number is %d\n", number); 
    number ++; 
  }
  while(number < 4); 

  
  return 0; 
}


