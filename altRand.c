#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generate_random_int() {
  return rand() % 9 + 1; // Generates a random integer between 1 and 9
}

int main() {
  int num_iterations;
  printf("Enter the number of iterations: ");
  scanf("%d", &num_iterations);

  srand(time(NULL)); // Initializes the random number generator

  for (int i = 0; i < num_iterations; i++) {
    int random_num = generate_random_int();
    printf("%d ", random_num);
  }

  return 0;
}
