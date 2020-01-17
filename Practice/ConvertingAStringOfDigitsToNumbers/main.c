#include <stdio.h>

int main(void) {
  printf("Hello World\n");
  return 0;
}

int ConvertCharactersToTheirIntegerEquivalents(char InputString[]) {
  int i;
  int n;

  n = 0;
  for (i = 0; InputString[i] >= '0' && InputString[i] <= '9'; ++i) {
    n = 10 * n + (InputString[i] - '0'); // Why do you need to add 10 * n?
  }

  return n;
}