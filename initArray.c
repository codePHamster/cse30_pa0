/*
 * Filename: initArray.c
 * Author: Kim Pham
 * Userid: cs30xod@ucsd.edu
 * Description: Initialize an array with odd numbers starting from 0
 * Date: Apr 10 2018
 * Sources of Help: none 
 */

// Used for initializing the values in the array
#define ODD_MULTIPLIER 2

/*
 * Function Name: initArray()
 * Function Prototype: void initArray( int array[], int length );
 * Description: Initializes values in an array to be odd integers starting 
 *              from 0
 * Parameters: array - the array to initialize
 *             length - the length of the array
 * Side Effects: Initializes the values of the array
 * Error Conditions: None
 * Return Value: None
 */
void initArray( int array[], int length ) {
  int i = 0;
  while ( i < length) {
    array[i] = ODD_MULTIPLIER * i + 1;
    i++;
  }
}
