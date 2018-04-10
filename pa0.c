/*
 * Filename: pa0.c
 * Author: TODO: Enter your name
 * Userid: TODO: Enter your cse30 login id
 * Description: Main driver for PA0, will print out an array three times and
 *              calculate the sum of three numbers
 * Date: TODO: Enter the date you first modified this file
 * Sources of Help: TODO: List all the people, books, websites, etc. that you
 *                  used to help you write the code in this source file.
 */

#include <stdio.h>
#include <stdlib.h>
#include "pa0.h"

#define FIRST_NUM_TO_SUM 5
#define SECOND_NUM_TO_SUM 15
#define THIRD_NUM_TO_SUM 32

/*
 * Function Name: main()
 * Function Prototype: int main( void );
 * Description: Driver for PA0, creates an array then prints it out forwards,
 *              backwards, and forwards again. Then sums three numbers and
 *              prints out the result
 * Parameters: None
 * Side Effects: Prints out an array to stdout three times as well as the sum of
 *               three numbers
 * Error Conditions: None
 * Return Value: Always returns success
 */ 

int main( void ) {

  int i;
  int v1 = FIRST_NUM_TO_SUM;
  int v2 = SECOND_NUM_TO_SUM;
  int v3 = THIRD_NUM_TO_SUM;
  int sum;
  int intArray[SIZE];

  // Initialize intArray with odd values starting with 1
  initArray( intArray, SIZE );

  // Print the values in the array
  for ( i = 0; i < SIZE; i++ ) {
    printf( "%d\n", intArray[i] );
  }
  printf( "\n" );

  // Print the values in intArray in reverse order
  printReversed( intArray, SIZE );
  printf( "\n" );

  // Print the values in intArray in order
  printInOrder( intArray, SIZE );
  printf( "\n" );


  // Calculate the sum of v1, v2, v3 and print out the result
  // Use the sum function to generate the sum
  sum = sum3( v1, v2, v3 );

  // Print out the three original numbers and the resulting sum
  printf( "The sum of %d + %d + %d = %d\n", v1, v1, v1, sum );

  return EXIT_SUCCESS;
}
