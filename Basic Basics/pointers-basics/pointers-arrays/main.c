#include <stdio.h>
 #include <stdlib.h>

int main() {

  int *valuesPtr;
  int values[100];
  valuesPtr = values;
  // points to the first address/element in the array.
  // note that the address operator is not used
  // the c compiler treas the appearenc of an array name without a subscript as a pointer to the
  // array.
  // specifiying values without a subscript has the effect of producing a pointer to the first
  // element of values. 


  return 0; 
}
