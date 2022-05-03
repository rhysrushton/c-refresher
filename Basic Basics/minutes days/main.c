#include <stdio.h>

int main () {

  int mins; 
  printf("Please enter the number of minutes\n");
  scanf("%d", &mins);
  printf("%d\n", mins);

  double  hours = mins/60;
  double days = hours/24;
  double years = days/365;

  printf("%lf\n", years); 

  return 0; 




}
