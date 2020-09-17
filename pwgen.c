#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randPin(char*);
void passGen(char*);
int charToInt(char*);

int main(int argc, char *argv[]) {
  srand(getpid() * time(NULL) * clock());
  if (argc < 2) {
    printf("Usage: pwgen $length $numericOnly\n");
    return 0;
  }
  if (argv[2])
    randPin(argv[1]);
  else
    passGen(argv[1]);
  printf("\n");
  return 0;
}
void randPin(char *input) {
  int length = charToInt(input);
  for (int i = 0; i < length; i++) {
    printf("%c", (rand() % ( 48 - 57 + 1)) + 48);
  }
}
void passGen(char *input) {
  int length = charToInt(input);
  for (int i = 0; i < length; i++) {
    printf("%c", (rand() % (97 - 125 + 1)) + 97);
  }
}
int charToInt(char *input) {
  char *p;
  int length;
  long conv = strtol(input, &p, 10);
  length = conv;
   return length;
}
