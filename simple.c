#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* prototypes */
void init(int a[], int s);
int  max(int a[], int s);


/*
 * init - initializes an array with random values
 * @param   a - array of integers
 * @param   s - size of array
 */
void init(int a[], int s) {
  for (int i=0; i<s; i++)
    a[i] = rand() % 1000; // initialize to random number between 0..999
}



/*
 * max - calculates max value in an array
 * @param   a - array of integers
 * @param   s - size of array
 * @return  max value in array
 */
int max(int a[], int s) {
  int maxval = a[0];

  for (int i=0; i<s; i++) {
    if (a[i] > maxval)
      maxval = a[i];
  }
  return maxval;
}



/*
 * main
 */
int main(void) {
  int iarray[100];

  srand(time(0)); // seed random number generator

  init(iarray, 100);

  printf("max value of iarray: %d\n", max(iarray, 100));

  return 0;
}
