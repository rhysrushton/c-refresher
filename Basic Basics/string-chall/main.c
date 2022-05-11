#include <stdio.h>



//function to count the number of characters in a string
//canot use strlen func
//function should take a character array as a parameter
//should return an int (i.e. the length)
//concat function. 
//compare
// no pointers or string lib functions allowed.

int counter(char arr[]){

  int i = 0;
  int count = 0; 
    
  for(i; arr[i] !='\0';i++) {

    count += 1; 
  }
  
  return count; 

}

int compare (char arr1[], char arr2[]){

  int length1 = counter(arr1);
  int length2 = counter(arr2);

  if (length1 != length2) {

    return 0; 
  }

  int i =0;

  for(i=0; i<length1; i++){
    
    if(arr1[i] != arr2[i]) {

      return 0; 
    }


  }
  
  return 1; 

}

int main () {

  char arr[] = {"hello"};
   
  char arr2[] = {"hello"};

  int length1 = counter(arr); 
  int length2 = counter(arr2);
  int arrsize = length1+length2;
  char result[arrsize]; 
  printf("The total number is %d\n", length1); 
  printf("The total number is %d\n", length2);

  int i;
  for(i = 0; i < length1; i++){
    
    result[i] = arr[i];
  }
  int j;
  for (j=0; j<length2; j++){
    result[i] = arr2[j];
    i++; 
  }
  result[i] = '\0'; 
  printf("%s \n", result); 

 int  compare_result = compare(arr,arr2);

  if(compare_result != 1){

    printf("The strings are not equal\n"); 
  }else{
    printf("The strings are equal\n"); 
  }
    

  
  return 0; 
}
