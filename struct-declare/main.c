#include <stdio.h>
#include <string.h> 
int main () {

  struct employee {

    char  name[30];
    int hire_date;
    float salary; 

  };

  struct employee dave = {"Dave", 2015, 200};
  struct employee julia; 
 
  printf("Please enter the hire date\n");
  scanf("%d", &julia.hire_date); 
  printf("Please enter the salary\n"); 
  scanf("%f", &julia.salary); 
  printf("Please enter the name "); 
  scanf("%s", julia.name);  

  printf("Details for employee\n");
  printf("=====================\n");
  printf("This employees name is %s \n", dave.name);
  printf("This employees hire date is %d\n", dave.hire_date);
  printf("This employees salary is %f\n", dave.salary); 

  
  printf("Details for employee\n");
  printf("=====================\n");
  printf("This employees name is %s \n", julia.name);
  printf("This employees hire date is %d\n", julia.hire_date);
  printf("This employees salary is %f\n", julia.salary); 
  

  
  return 0; 
}
