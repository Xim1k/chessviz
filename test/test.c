#include <stdio.h>
#include <stdlib.h>
#define CTEST_MAIN
#include "ctest.h"
#include "../src/board.h"

CTEST(board, check_reg_no_equal)
{
  //Given
  char one = 'P';
  char two = 'r';
  //When
  const int result = check_reg(one,two);
  //Then
  const int expected = 1;
  ASSERT_EQUAL(expected, result);
}

CTEST(board, check_reg_equal_upper)
{
  //Given
  char one = 'P';
  char two = 'K';
  //When
  const int result = check_reg(one,two);
  //Then
  const int expected = 0;
  ASSERT_EQUAL(expected, result);
}

CTEST(board, check_reg_equal_lower)
{
  //Given
  char one = 'n';
  char two = 'p';
  //When
  const int result = check_reg(one,two);
  //Then
  const int expected = 0;
  ASSERT_EQUAL(expected, result);
}

CTEST(board, checkmove_for_p){
  //Given
  int stolb1 = 1;
  int string1 = 2;
  int string2 = 3;
  int stolb2 = 1;
  char fig = 'p';
  //When
  const int result = checkmove(fig, stolb1, string1, stolb2, string2);
  //Then
  const int expected = 1;
  ASSERT_EQUAL(expected, result);
}

CTEST(board, checkmove_for_p_false){
  //Given
  int stolb1 = 1;
  int string1 = 2;
  int string2 = 4;
  int stolb2 = 1;
  char fig = 'p';
  //When
  const int result = checkmove(fig, stolb1, string1, stolb2, string2);
  //Then
  const int expected = 0;
  ASSERT_EQUAL(expected, result);
}

CTEST(board, checkmove_for_r_true){
  //Given
  int stolb1 = 1;
  int string1 = 2;
  int string2 = 8;
  int stolb2 = 1;
  char fig = 'r';
  //When
  const int result = checkmove(fig, stolb1, string1, stolb2, string2);
  //Then
  const int expected = 1;
  ASSERT_EQUAL(expected, result);
}

CTEST(board, checkmove_for_r_false){
  //Given
  int stolb1 = 1;
  int string1 = 2;
  int string2 = 8;
  int stolb2 = 2;
  char fig = 'r';
  //When
  const int result = checkmove(fig, stolb1, string1, stolb2, string2);
  //Then
  const int expected = 0;
  ASSERT_EQUAL(expected, result);
}

int main (int argc, const char** argv){
  printf("\n\n");
  return ctest_main(argc, argv);
}
