#include <stdio.h>

int main () {


  // Define a file pointer.
  FILE *fp;
  int c;
  char str[60];
  
  fp = fopen("file.txt", "r");

  if(fp == NULL) {
    
    perror("Error in opening file");
    return(-1); 

  };
  
  // read a single char
  //while((c = fgetc(fp)) != EOF)
  //printf("%c", c);


  // print entire string. 
  if(fgets(str,60,fp)!=NULL) {
    printf("%s", str); 

  }

  
  fclose(fp);
  fp = NULL;
  
  
  return 0; 
}

// a program references a file via a file pointer.
// you associate a specific external file name with an itnernal file pointer variable through
// process refered to as opening a file via fopen() -> returns the file pointer for a specific
// external file.
