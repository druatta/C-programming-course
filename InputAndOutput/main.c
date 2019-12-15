#include <stdio.h>

void CopyInputToOutput();

int main() {
  printf("Enter a character, and press enter to see it copied and pasted. \n\n");
  CopyInputToOutput();
}

void CopyInputToOutput() {
  int CurrentCharacter;

  while (CurrentCharacter != EOF) {
    printf("Here is your character: ");
    putchar(CurrentCharacter);
    printf("\n");
    CurrentCharacter = getchar();
  }
}
