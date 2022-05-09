#include <stdio.h>

int main () {
  //an array allows you to group values together under a single name
  //arrays are made up of elements
  // all elements must have the same datatype.
  int grade[10];
  int count = 10;

  int i;

  for(i = 0; i < count; i++)
    {
      scanf("%d", &grade[i]);
      printf("The  current grade is %d\n", grade[i]);
      
    }

  // initialise an array with values
  int count[5] = {0,1,3,4,5}; 
  //Repating an inital value. Can only do this woith '0'
  int arr[100] = {0}; 

  //arrays can be multidimensional
  // c can have n dimensional arrays
  int matrix [4][5]; // declares a matrix with four rows and five columns; 

  int numbers [3][4] = { //the inner braces are optional
			{10,12,39,30};
			(1,2,3,4};
			{14,6,8,9};
  };  

  
  
  
  return 0; 
}; 
