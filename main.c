#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check_sim(char A) {
  switch (A){
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
}


void print_board(char board[8][8]) {
    int i, j;
    printf("  A  B  C  D  E  F  G  H \n  _______________________________\n");
    for(i = 0; i < 8; i++){

      for(j = 0; j < 8; j++){
        printf(" | %c", board[i][j]);
      }
      printf(" |\n");
      printf("%d|___|___|___|___|___|___|___|___|\n", i);
    //  printf("| | | | | | | | |\n")
    }

}

void move(char board[8][8], int c){
  char first[6];
  char tim;
  int i , j;
  printf("Input position of figure:");
  scanf("%s", first);
  j = check_sim(first[0]);
  i = first[1] - '0' + 1;
  tim = board[i][j];
  board[i][j] = ' ';
  i = check_sim(first[3]);
  j = first[4] - '0' + 1;
  board[i][j] = tim;

}


int main() {
    int i, j;
    int k = 0;
    char board[][8] = {
      "rnbqkbnr",
      "pppppppp",
      "        ",
      "        ",
      "        ",
      "        ",
      "PPPPPPPP",
      "RNBQKBNR"
    };
    print_board(board);
    while(1) {
      move(board, k);
      print_board(board);
      if(k = 0){
        k = 1;
      } else {
        k = 0;
      }
    }
    return 0;
}
