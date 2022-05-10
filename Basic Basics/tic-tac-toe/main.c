#include <stdio.h>

void draw_board(char arr[9][11]) {

  int i,j;
    for(i=0; i<9; i++){
      for(j =0; j< 11; j++) {
	
	printf("%c", arr[i][j]); 
      }
      
      printf("\n"); 
    }
}

int check_for_win(char arr[9][11]) {
  

  if ((arr[1][1] == 'X') && (arr[1][5] == 'X') && (arr[1][9] == 'X')) {
    return 1;   
  } else if ((arr[1][1] == 'O') && (arr[1][5] == 'O') && (arr[1][9] == 'O')){
    return 1; 
  }else if ((arr[1][1] == 'X') && (arr[4][1] == 'X') && (arr[7][1] == 'X')){

      return 1; 
  } else if ((arr[1][1] == 'O') && (arr[4][1] == 'O') && (arr[7][1] == 'O')) {

    return 1; 
  } else if  ((arr[1][9] == 'X') && (arr[4][9] == 'X') && (arr[7][9] == 'X')) {

    return 1; 
  } else if  ((arr[1][9] == 'O') && (arr[4][9] == 'O') && (arr[7][9] == 'O')) {

    return 1; 
  } else if  ((arr[1][1] == 'X') && (arr[4][5] == 'X') && (arr[7][9] == 'X')) {

    return 1; 
  } else if  ((arr[1][1] == 'O') && (arr[4][5] == 'O') && (arr[7][9] == 'O')) {

    return 1; 
  } else if  ((arr[1][5] == 'X') && (arr[4][5] == 'X') && (arr[7][5] == 'X')) {
    return 1; 
  } else if  ((arr[1][5] == 'O') && (arr[4][5] == 'O') && (arr[7][5] == 'O')) {
    return 1; 
  } else if  ((arr[1][9] == 'X') && (arr[4][5] == 'X') && (arr[7][1] == 'X')) {
    return 1; 
  } else if  ((arr[1][9] == 'O') && (arr[4][5] == 'O') && (arr[7][1] == 'O')) {
    return 1; 
  }    
  
  return 0; 
}



int main () {
  // check for win
  // drawboad
  // mark board
  /*
     |   |   
   1 | 2 | 3
  ___|___|___
     |   |
   4 | 5 | 6
  ___|___|___
     |   |
   7 | 8 | 9
     |   |
     9,11
1 = 1,1
2 = 1,5
3 = 1,9
4 = 4,1
5 = 4,5
6 = 4,9
7 = 7, 1
8 = 7, 5
9 = 7, 9

  */
     
  char arr[9][11] = {

		     {' ', ' ', ' ', '|', ' ', ' ',' ', '|', ' ', ' ', ' '},
		     {' ', '1', ' ', '|', ' ', '2',' ', '|', ' ', '3', ' '},
		     {'_', '_', '_', '|', '_', '_','_', '|', '_', '_', '_'},
		     {' ', ' ', ' ', '|', ' ', ' ',' ', '|', ' ', ' ', ' '},
		     {' ', '4', ' ', '|', ' ', '5',' ', '|', ' ', '6', ' '},
		     {'_', '_', '_', '|', '_', '_','_', '|', '_', '_', '_'},
		     {' ', ' ', ' ', '|', ' ', ' ',' ', '|', ' ', ' ', ' '},
		     {' ', '7', ' ', '|', ' ', '8',' ', '|', ' ', '9', ' '},
		     {' ', ' ', ' ', '|', ' ', ' ',' ', '|', ' ', ' ', ' '},
  };



  
  draw_board(arr);

  // ask player to enter number
  // Player one is X
  // Player 2 is O
  // check if position is taken
  // if yes then add an X or O
  // if position is taken or they've entered wrong number then ask for another input.
  // check for win  


  
  return 0; 
}
