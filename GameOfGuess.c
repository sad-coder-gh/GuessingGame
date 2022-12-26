#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(0)); // seed the random number generator

  int num1, num2;
  int num_guesses = 0;

  while (num_guesses < 3) {
    // ask the user for their first guess
    printf("Enter your first guess (a number between 0 and 15): ");
    scanf("%d", &num1);

    // ask the user for their second guess
    printf("Enter your second guess (a number between 0 and 15): ");
    scanf("%d", &num2);

    // check if the sum of the guesses is greater than or equal to 3
    if (num1 + num2 >= 3) {
      printf("Trying again\n");
    } else {
      printf("You won!\n");
      break;
    }

    num_guesses++;
  }

  if (num_guesses == 3) {
    printf("Try again later!\n");
  }

  return 0;
}

