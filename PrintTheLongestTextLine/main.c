#include <stdio.h>
#define MaximumInputLineSize 1000

int GetTheLengthOfTheNextLine(char line[], int maxline);
void CopyLineOfCharacters(char OutputString[], char InputString[]);

int main() {
  int MainCompleted;
  int CurrentLineLength;
  int MaximumLineLengthSeenSoFar;
  char CurrentInputLine[MaximumInputLineSize];
  char LongestLine[MaximumInputLineSize];

  MainCompleted = 0;
  MaximumLineLengthSeenSoFar = 0;

  printf("\nInput a line of characters, any characters; then press enter, s'il vous plait:\n\n");

  while ((CurrentLineLength = GetTheLengthOfTheNextLine(CurrentInputLine, MaximumInputLineSize)) > 0) { // Holy fucking what
    
    if (CurrentLineLength > MaximumLineLengthSeenSoFar) {
      MaximumLineLengthSeenSoFar = CurrentLineLength;
      CopyLineOfCharacters(LongestLine, CurrentInputLine);
    }
    if (MaximumLineLengthSeenSoFar > 0) {
      printf("\nGood job, thanks for the line. \n");
      printf("\nHere's the longest current line: \t %s", LongestLine);
    }
    printf("\nGimme another line:\n\n");

  }
  return MainCompleted;
}

int GetTheLengthOfTheNextLine(char NextLine[], int LineLengthLimit) {
  int i;
  int NextCharacter;

  for (i = 0; i < (LineLengthLimit - 1) && (NextCharacter = getchar()) != EOF && NextCharacter != '\n'; ++i) {
    NextLine[i] = NextCharacter;
  }

  if (NextCharacter == '\n') {
    NextLine[i] = NextCharacter; // New lines get added to the end of each line
    ++i;
  }

  NextLine[i] = '\0'; // This is used in the CopyLineOfCharacters function, to determine when we've reached the end of the input string
  return i;
}

void CopyLineOfCharacters(char OutputString[], char InputString[]) {
  int i;

  i = 0;

  while ((OutputString[i] = InputString[i]) != '\0') { // What does this mean? What is the output of (OutputString[i] = InputString[i])?
    ++i;
  }

}
