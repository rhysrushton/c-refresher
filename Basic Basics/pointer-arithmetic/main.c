#include <stdio.h>





int main () {



  return 0;

}


/* 
int values[5] = {0,1,2,3,4}
*valuesPtr = arr;
the pointer variable has the memory address of the first element in the array
to reference values[3] through the valuesPtr variable you can add 3 to valuesPtr and then apply
the indirection operator which would look like: 
*(valuesPtr + 3) 
The expression *(valuesPtr + i) can be used to access the value contained in values[i] 
If you wanted to set arr[4] to 27 you would use: 
*(valuesPtr + 4) = 27
 
*/

/* Example of pointer aritmetic 

int arraySum (int array[], const int n)
{
int sum = 0, *ptr; 
int * const arrayEnd = array + n; 

for (ptr = array; ptr< arrayEnd; ++ptr)
  sum += *ptr; 
  return sum; 
}
void main (void) {
 int arraySum(int array[], const int n); 
 int values[10] = {3,7,-9,3,6,-1,7,9,1,-5}; 
 printf("The sum is %i\n", arraySum (values, 10)); 
}

