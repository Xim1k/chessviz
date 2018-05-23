#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "board.h"

int check_sim(char A[], int k) {
  switch (A[k]){
    case 'a':
      return 0;
    case 'b':
      return 1;
    case 'c':
      return 2;
    case 'd':
      return 3;
    case 'e':
      return 4;
    case 'f':
      return 5;
    case 'g':
      return 6;
    case 'h':
      return 7;
  }
  return -1;
}

int check_reg(char one, char two){
  int i, j;
  if (isupper(one) != 0){
    i = 0;
  } else {
    i = 1;;
  }
  if (isupper(two) != 0){
    j = 0;
  } else {
    j = 1;
  }
  if (j != i){
    return 0;
  } else {
    return 1;
  }
}

void print_board(char board[8][8]) {
    int i, j;
    printf("   A   B   C   D   E   F   G   H \n  _______________________________\n");
    for(i = 0; i < 8; i++){

      for(j = 0; j < 8; j++){
        printf(" | %c", board[i][j]);
      }
      printf(" |\n");
      printf("%d|___|___|___|___|___|___|___|___|\n", i+1);
    //  printf("| | | | | | | | |\n")
    }

}

void move(char board[8][8], int c){
  char first[7];
  char tim;
  char tim1;
  int i , j, k, l;
  printf("Input position of figure:");
  scanf("%s", first);
  j = check_sim(first, 0);
  i = first[1] - '0' - 1;
  tim = board[i][j];
  k = check_sim(first, 3);
  l = first[4] - '0';
  l--;
  tim1 = board[k][l];
  if (board[l][k] == ' '){
    board[i][j] = ' ';
    board[l][k] = tim;
  } else {
    if (check_reg(tim, tim1) == 1){
      board[i][j] = ' ';
      board[l][k] = tim;
    }
  }
}
