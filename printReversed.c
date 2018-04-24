/*
 * Filename: printReversed.c
 * Author: Kim Pham 
 * Userid: cs30xod@ucsd.edu
 * Description: Print out an array in reverse order
 * Date: Apr 10 2018
 * Sources of Help: none 
 */

#include <stdio.h>

/*
 * Function Name: printReversed()
 * Function Prototype: void printReversed( int array[], int length );
 * Description: Prints out an array in reverse order
 * Parameters: array - the array to print
 *             length - the length of the array
 * Side Effects: Prints out the array in reverse order to stdout
 * Error Conditions: None
 * Return Value: None
 */
void printReversed( int array[], int length ) {
  int i;

  for ( i = length - 1; i >= 0; i-- ) {
    printf( "%d\n", array[i] );
  }
}

