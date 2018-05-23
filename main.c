#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "board.h"


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

    }
    return 0;
}
