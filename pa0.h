/*
 * Filename: pa0.h
 * Description: Header file that contains function prototypes and constants.
 *
 * XXX Only add constants to this file.
 * DO NOT EDIT FUNCTION PROTOTYPES.
 */

#ifndef PA0_H
#define PA0_H

/* 
 * Constant values to be used in PA0
 */
#define SIZE 15  // The size of the array

/*
 * Function prototypes for the C and assembly routines used in PA0
 */
void initArray( int array[], int length );
void printReversed( int array[], int length );
void printInOrder( int array[], int length );
int sum3( int a, int b, int c );

#endif /* PA0_H */

