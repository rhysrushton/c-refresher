#include <stdio.h>
 #include <string.h>

int main() {

  // strchr() function searches a given string for a specfied character
  // first argument to the function is the string to be seached (which will be the address of a
  // char array. Second argument is the character that you are looking for.
  // the function will search the string starting at the beginning and return a pointer to the
  // first position in the string where the character is found.
  // the return value is of type char* -> pointer to char.
  // to store the value that is returned you need to create a variable that can store the
  // address of a character.
  char str[] = "The quick brown fox\n"; // The string to be searched
  char ch ='q'; // The character we are looking for
  char *pGot_char = NULL; // Pointer initialized to NULL
  pGot_char = strchr(str,ch);  // Stores address where ch is found
  *pGot_char = 'l'; //change value
  printf("%s", str); 

  // strstr() searches string for a substring. Works the same as strchr


  // a token is a sequence of characters within a string that is bound by a delmiter
  // a delimiter can be anything but, should be unique to the string
  // spaces, commas and periods.
  // breaking a sentence into words is called tokenizing
  // the strtok() function is used for tokenizing a string
  // it requires two arguments.
  // the string to be tokenized
  // a string containing all the possible delimiter characters
  char arr[80] = "Hello, how are you-my name is-jason";
  const char s[2] = "-";
  char *token;

  /*get the first token */
  token = strtok(arr,s);

  /* walk through other tokens */
  while (token != NULL) {
    printf(" %s\n", token);

    token =  strtok(NULL, s); 
    // the reason why you pass null is that strtok has an internal pointer of where it left off
    // and by specifying null you are telling the function to pick up where it left off.
    

  }

  return 0; 
}







