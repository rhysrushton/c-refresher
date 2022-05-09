#include <stdio.h>

void add(); 
int main() {
  
  //think abut functions as a black box
  // When designing code don't worry about writing function code
  // just think about what the function is supposed to do 
  /* Example of a Function 
     Return_type Function_name (Paramters - seperated by commas)
     {
      Statements...
     }
  */
  // first line of the function definition tells the compiler:
  // the type of value the function returns
  // the name of the function
  // the arguments it takes
  /* example function 
     void printMessage (void) {
     printf("Programming is fun. \n"); 
     }
     The first line of the printMessage() function definition tells the compiler that the
     function returns no value -> keyword void.
     next is the nameof the function: printMessage
     after that it takes no arguments (second use of the keyword void)
  */
  // You also declare a function prototype which tells the compiler you will be using this particu     lar function.
  // The protype is just the header ending in a semi-colon.
  // voind printMessage (void);
  // function protypes usually go in header files if they are being used in multiple files
  // otherwise they go into the header.If you define function in header then no prototype needed. 
  add();
  
  
  return 0; 
}

void add() {}
