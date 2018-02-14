#include <stdio.h>

typedef struct {
  char piececolor;
  char piecetype;
} piece;

int main () {
  int i, j;
  char board[8][8] = {
    "rnbqkbnr",
    "PPPPPPPP",
    "        ",
    "        ",
    "        ",
    "        ",
    "PPPPPPPP",
    "RNBQKBNR"
  } ;
  for(i = 0; i < 8; i++) {
    for (j = 0; j < 8; j++) {
      printf("%c ", board[i][j]);
    }
    printf("\n");
  }
  return 0;
}
