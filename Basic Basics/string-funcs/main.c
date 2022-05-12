#include <stdio.h>
#include <string.h>
#define MAX_WORD_LENGTH 300

void reverse(char * str_to_reverse) {

  int len = strlen(str_to_reverse); 
  printf("%s\n", str_to_reverse); 
  char arr[len];
  int i;
  int j = 0; 
  for(i =len -1; i > -1; i--){
    
    arr[j] = str_to_reverse[i];
    j ++; 
  }
  arr[j+1] = '\0';
  
  printf("%s \n", arr); 
}


int main() {
  // reverse a string
  // needs to read import from the keyboard.
  // sort the strings of an array using strcmp and strcpy functions.
  // use bubble sort to sort the strings.
  // ask people how many strings they want to read in.
  // then read strings in. 

  char str_to_reverse[300];
  printf("Please input the string you would like to reverse\n");
  scanf("%s",str_to_reverse);
  //printf("The string you are reversing is \"%s\" \n", str_to_reverse);

  reverse(str_to_reverse); 
  
  
  return 0; 
}
