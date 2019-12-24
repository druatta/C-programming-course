#include <stdio.h>

main() {
  int c;
  int i;
  int NumberOfWhiteSpaces;
  int NumberOfOtherCharacters;
  int NumberOfTimesThatEachDigitOccurs[10];

  NumberOfWhiteSpaces = NumberOfOtherCharacters = 0;

  for(i = 0; i < 10; ++i) {
    NumberOfTimesThatEachDigitOccurs[i] = 0;
    }

  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9') {
      ++NumberOfTimesThatEachDigitOccurs[c - '0'];
      }
    else if (c == ' ' || c == '\n' || c == '\t') {
      ++NumberOfWhiteSpaces;
      }
    else {
      ++NumberOfOtherCharacters;
    }
}

  printf("\nOur current array's values are:\t");

  for (i = 0; i < 10; ++i) {
    printf(" %d", NumberOfTimesThatEachDigitOccurs[i]);
    }
  printf("\n\nThe number of white spaces are = %d\n", NumberOfWhiteSpaces);
  printf("\n The number of other characters are = %d\n", NumberOfOtherCharacters);
}