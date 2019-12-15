#include <stdio.h>

int main() {

int CurrentCharacter;
int NumberOfLines;

NumberOfLines = 0;

printf("\nEnter a series of characters and new lines, followed by EOF:\n\n");

while ((CurrentCharacter = getchar()) != EOF) 
  if (CurrentCharacter == '\n') 
    ++NumberOfLines;
  printf("\n The number of lines printed is %d \n", NumberOfLines);

}