#include <stdio.h>
#include <stdlib.h>
#include <string.h>



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


int main() {
    int i, j;
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
    return 0;
}
