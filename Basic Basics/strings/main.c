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
  char words [] {"Hello stranger"};
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
  // strcpy -> copy a string
  // strcat() combining two strings
  // determine whether two character strings are equal strcmp()
  // all of the above are included in string.h file 

}
