#include <stdio.h>

int main(){

  // width, heigh , perimeter and area
  double width, height; 
  printf("Please enter the width\n");
  scanf("%lf", &width);
  printf("Please enter the height\n");
  scanf("%lf", &height); 

  double perimeter = 2*(width + height);
  double area = width * height;

  printf("The perimeter is %lf \n", perimeter);
  printf("The area is %lf \n", area); 

  
  return 0; 
  
  


}
