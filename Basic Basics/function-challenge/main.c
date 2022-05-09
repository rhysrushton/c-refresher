#include <stdio.h>
#include <math.h>

float gcd (float a, float b) {
  
  
  float  r = fmodf(a,b); 
  printf("%lf \n", r); 
  if (r ==  0) {
    return r; 
   }

  while (r!= 0) { 
    a= b;
    b = r;
    r = fmodf(a,b);
    printf("%lf \n", b); 
  }
  return b;     
}

int ab_val (int a) {

  if( a < 0) {
    
    return a * -1; 
  }

  return a; 


}

double square (int a) {

  

  return sqrt(a); 
}

int main () {
  float  greatest_c_d = gcd(39,20);
  int ab_valule = ab_val(-7);
  double squaree = square(4); 
  printf("The gcd is %0.2lf \n", greatest_c_d);
  printf("The square root is %lf \n", squaree);
  printf("The ab_val is %d \n",ab_valule); 
  return 0; 

}
