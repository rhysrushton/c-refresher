#include <stdio.h>

int main(){

  //Statements vs Expressions
  // An expression consists of operators and operands
  // Statements are combinations of expressions
  // a statment is a complete instruction to the computer.
  /* Arithmetic Operators in C
     + adds two operands
     - subtracts 
     * multiply
     / divide
     % mod
     ++ increment by one 
     -- decrement by one
  */
  

  /* Logical Operators 
     && if both are true returns true
     || if one is true returns true
     ! not
  */

  /* assignment 
     = sets some var equal to some val
     += adds some val to some var
     -= subtracts some val from some var
     *= multiplies some var by some val
     /= divides some var by some var
     %= mod some var by some val and assign the val to the var
     */

  /* Bitwise opps
     Bitwise operators operate on bits in integer values
     Bitwise operators allow us to set inidividual bits to a certain value
     and to test them. 
     a byte is 8 bits.
     a int is typically 4 bytes in c - 32 bits
     We could use one integer to store 32 pieces of information 
     if int dave = 0
     we have 32 spaces to store information about dave
     say bit 1 is his gender, 0 for female 1 for male
     or does he like indian food 0/1 for true false
     and so on. 
     
     bitwise operators take two bits at a time (one from each operand)
     and perform operations on them. 
      
     just imagine you are comparing binarys digit by digit. 
     
     & if both bits are true returns 1
     | if one bit is true returns 1
     ^ if both bits are opposite returns 1
     ~ flips the bits of one operand
     << shift bits to the left. The left operand value is moved left by the
     number of bits specified by the righ operand. 
     >> binary right shift operator. The left operands value is moved right by
     the number of bits specified by the right operand. 
     
     Cast Operator
     -when mixing dtypes allows you to specify the dtype of the result. 
     -type cast operator has higher precedance than all arithmetic operators
     except the unary minus and the unary plus
     - (int) 12.51 + (init) 26.99
     - is evaluated in C as 21+26
     - dtype in parantheses
     

     sizeof operator 
     -tells you how many bytes are taken up in memory by the argument. 
     -is an operator not a function 
     -evaluated at compile time and not at runtime, unless ariable length array 
     is used in its argument. 
     
     * operator 
     -for pointers. 
     -*a 

     Operator Precedence
     -Precedance dictates order of operation when two operators share an operand
     -whatever is in brackets gets done first, like in math, so use this
     instead of relying on remembering precedance for each operator. 
     - 
     
     

   */ 

  unsigned int a = 60; // 0011 1100
  unsigned int b = 13; // 0000 1101
  int result = 0;
  c = a & b; // 0000 1100

  


  

  return 0; 
}
