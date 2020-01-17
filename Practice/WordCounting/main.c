#include <stdio.h>

#define IN 1
#define OUT 0

main() {
  int CurrentCharacter;
  int NumberOfLines;
  int NumberOfWords;
  int NumberOfCharacters;
  int State;

  NumberOfLines = NumberOfWords = NumberOfCharacters  = 0;

  while ((CurrentCharacter = getchar()) != EOF) {
    ++NumberOfCharacters;
    if (CurrentCharacter == '\n')
      ++NumberOfLines;
    if (CurrentCharacter == ' ')

  }
}