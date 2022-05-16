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
 
  // sort the strings of an array using strcmp and strcpy functions.
  // use bubble sort to sort the strings.
  // ask people how many strings they want to read in.
  // then read strings in. 

  char str_to_reverse[300];
  printf("Please input the string you would like to reverse\n");
  scanf("%s",str_to_reverse);
  //printf("The string you are reversing is \"%s\" \n", str_to_reverse);

  reverse(str_to_reverse); 

  
  int num_words; 
  printf("How many words would you like to sort?\n");
  scanf("%d", &num_words);
  printf("Please enter the words you would like to sort\n"); 
  char arr[num_words][MAX_WORD_LENGTH];
  int i;
  for(i =0; i < num_words; i++) {
    scanf("%s", arr[i]); 

  }

  printf("Here are your words\n");
  int j;
  for(j=0; j<num_words; j++) {

    printf("%s\n", arr[j]);    
  }


  char temp[MAX_WORD_LENGTH]; 
  
  for(i=1; i<=num_words; i++)
    for(j=0;j<=num_words-i;j++)
      if(strcmp(arr[j],arr[j+1])>0)
	{
	  strcpy(temp,arr[j]);
	  strcpy(arr[j], arr[j+1]);
	  strcpy(arr[j+1], temp); 
	}
  printf("Here are your words sorted\n");
  
  for(j=0; j<num_words; j++) {

    printf("%s\n", arr[j]);    
  }  
  
  return 0; 
}
