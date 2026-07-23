#include <stdio.h>

/* Global variables should be set to static */
static int points;
static char mc;
static char *enemies;

int main(void) {
  /* Assign a value to the variables that we declared */
  enemies="dino";
  points=500;

  printf("Kamu mengalahkan ! EXP+ %d", points);

  /* Program successfuly exited */
  return 0;
};

