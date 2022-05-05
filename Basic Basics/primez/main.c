#include <stdio.h>

int main (){

  //find the prime numbers from 3 -100
  int primes[100] = {0};
  primes[0] = 2;
  primes[1] = 3;
  int is_prime = 0; 
  //number is prime if it is not evenly divisible by an other previous numbers
  //Don't need to look at even numbers

  int count = 0;
  int i; 
  int current_prime = 5;

  while (current_prime < 100) {

    for (i=0; primes[i] != 0; i++) {
      if (current_prime % primes[i] == 0) {
	is_prime = 0;
	
	break; 
      } else {
	is_prime = 1; 

      }
    }

    if (is_prime == 1){
      primes[i] = current_prime;
    }
      current_prime += 2; 
  }
  
  int j;
  for (j=0; primes[j]!=0; j++) {
    printf(" %d ", primes[j]); 
  }
  printf("\n"); 
  
  return 0; 
}
