#include <stdio.h>

//anything below the continue statement will not be executed; 
int main(){

  for (int i = 0; i < 5; i++){

    if (i == 2)
      continue; 

	printf("%d\n", i);


  }

  for (int j = 0; j < 10; j++) {

    if (j == 7)
      break;

    printf("%d\n",  j); 

  }

  //will break out of the while loop at 7


  return 0; 
}
