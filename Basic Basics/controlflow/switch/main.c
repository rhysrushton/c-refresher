#include <stdio.h>

int main(){
  //swtich statement is good when choosing between multiple alternatives as if/else is laborious.
  //switch syntax:
  /*
    switch (expression) {

    case value1: 
       program statement 
       break; 
   
    case  value2: 
       program statement; 
       break;
    
       default is same as the else 
    default: 
      program statement
      break; 
    }
expression is compared to values

goto statement -> can use this in control flow but not great for
maintaibaility not too precise


   */
  enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
  enum Weekday today = Monday;

  switch(today) {

  case Sunday:
    printf("Today is sunday\n");
    break;

  case Monday:
    printf("Today is monday\n");
    break;

  case Tuesday:
    printf("Today is Tuesday\n");
    break;

  default:
    printf("whoa\n");
    break; 




  }
  
  


  return 0;


}
