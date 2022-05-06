#include <stdio.h>
int main() {
  
  //this program finds total rainfall for each year
  // average yearly rainfall
  // average rainfall for each month

  float rainfall[5][12] = {
			   
			   {0,1,2,3,4,51,1,2,23,12,12,12},
			   {2,4,5,6,1,2,1,6,3,4,4,8},
			   {1,3,4,5,2,1,2,3,4,2,6,3},
			   {1,5,6,4,3,2,3,4,5,7,8,9},
			   {11,22,33,44,55,66,77,11,2,3,4,5},
  };

  int i;
  int year = 2014;
  float yearly_ave = 0; 

  for(i = 0; i<5; i++) {
    int j;
    float average = 0;
    for(j=0; j< 12; j++){
      average += rainfall[i][j];
      
    }
    average /= 12;
    yearly_ave += average; 
    printf("The average rainfall for %d is %lf \n", year+i, average); 
  }
  yearly_ave /= 5;
  printf("The yearly average is %lf\n", yearly_ave);
  printf("Monthly Averages: \n");
  printf("Jan Feb Mar Apr May Jun Jul Aug Sept Oct Nov Dec \n");
  int k;
  int month = 0;
  while (month < 12) {
    float month_av = 0; 
  for(k = 0; k < 5; ++k) { 
    month_av += rainfall[k][month];
  }
  month_av/= 12;
  printf("%.1lf ", month_av); 
  month ++; 
  }
      printf("\n"); 
  
  return 0; 
}
