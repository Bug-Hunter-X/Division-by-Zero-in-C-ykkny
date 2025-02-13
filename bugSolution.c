#include <stdio.h>

int main() {
  int x = 10;
  int y = 0;
  int z;

  if (y == 0) {
    fprintf(stderr, "Error: Division by zero\n");
    return 1; // Indicate an error
  } else {
    z = x / y;
    printf("Result: %d\n", z);
  }

  return 0;
} 