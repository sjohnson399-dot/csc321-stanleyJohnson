/*
 * Stanley Johnson
 * csc 321
 *
 */
#include <stdlib.h>
#include <stdio.h>

int main (void)
{
	int x =  12; 
	double y =  3.12;

	int evalOne = (x+y*x)/(y-x);
	double evalTwo = (-x-y)/(x*y+x);
	double evalThree = (x+y-x)/y;

	printf("(x+y*x)/(y-x) = (int) %d", evalOne);
	printf("\n(-x-y)/(x*y+x) = %f", evalTwo);
	printf("\n(x+y-x)/y = %f\n", evalThree);
	
	return EXIT_SUCCESS;
}
