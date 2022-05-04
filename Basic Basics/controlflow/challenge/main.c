#include <stdio.h>

int main() {

  int hours, total_pay;
  double tax_amount, net_pay; 
  printf("Please enter the number of hours you've worked this week\n");
  tax_amount = 0; 
  scanf("%d", &hours);
  
  if (hours > 40) {

    total_pay = 40 *12 + (18 *(hours - 40)); 

  } else {

    total_pay = 40*12; 
    
  };


  if (total_pay >= 300) {
    tax_amount += 0.15 *300;
    
    
    if (total_pay > 450) {
      tax_amount += 0.2 * 150;
      tax_amount += 0.25 * (total_pay - 450); 
      
      
    } else {
      tax_amount += 0.2*(total_pay -300);  

    }



  } else {
    tax_amount += 0.15 * total_pay; 


  }

  net_pay = total_pay - tax_amount;

  printf("Your gross pay is %d\n", total_pay); 
  printf("Your total tax paid is %lf\n", tax_amount);
  printf("Your net pay is %lf\n", net_pay); 
  

  

  return 0; 
}
