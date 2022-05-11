#include <stdio.h>
#include <string.h>

int main () {

  // '' single quote is characters
  // "" double quote is string
  // \0 terminator is for the end of the string. String is always terminated in this way
  // strings in c are stored in an array of type char
  // characters in a string a re stored in adjacent memory cells, once character per cell.
  // to declare a string in c use char type and brackets to indicate size
  // char myString[20];
  // remember that in this case 19 characters can be stored because the null terminator
  // will take up one space too.
  char word[] = {'H', 'e', 'l','l','o'};
  // 'H', 'e', 'l', 'l', 'o' '\o'
  char words []= {"Hello stranger"};
  //best practice is to let compiler figure out size for you.
  // when you are performing an assignment operation you cannot assign one array of characters
  // to another array of characters
  // you can use something like strncpy() to assign a value to a char array after that array has
  // been declared or initialized.
  // %s and name of array to print. %s is for outputting a null-terminated string
  /*
    the string constant "x" is not the same as the character constant 'x'
    'x' is a basic type (char) 
    "x" is a derived type, an array of char
    "x" realy consists of two characters, 'x' and '\0', the null character
  */
  // can use strings as constants (values that don't change)
  // # define THISISCONSTAT 0.20
  // can also use the const keyword
  // const int MONTHS = 12;
  // can also create constants with enums
  // string functions:
  // strlen -> get the length of a string
  // strncpy -> copy a string
  // strncat() combining two strings
  // determine whether two character strings are equal strcmp()
  // strcmp returns 0 if its two arguments are the same and nonzero otherwise
  // if return value < 0 then it indicates str1 is less than str2
  // if return value > 0 then it indicates str2 is less than str1  
  // all of the above are included in string.h file 
  
  char myString[] = "my string";
  printf("The length of this string is: %ld\n", strlen(myString));

  // You cannt assign arrays in c therefore you cannot assign strings either
  // char s[100]; //declare
  // s = "hello" // initialize - This doesn't work.
  // We can use strcpy() instead.
  // char src[50], dest[50];
  // strcpy(src, "This is source");
  // strcpy(dest, "This is destination");
  /* Searching for a string
     strchr(), strstr()
  */
  /* Tokenizing a string
     a token is a sequence of characters within a string that is bounded by a delimiter
     i.e. a space, comma, period. 
     breaking a sentnce into words is called tokenizing
     strtotk()
     
   */
  /* Analyzing strings
    islower(), isupper(), isupper(), isalpha(), isdigit()
  */
  
  
}
