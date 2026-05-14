/*
 * Stanley Johnson
 * csc 321
 *
 */
#include <stdlib.h>
#include <stdio.h>

int main (void)
{
	int x1 = 12;
	int y2 = 13;

	double x3 = 12.38;
	double y4 = 13.92;

	int intEvalOne = (x1+y2*x1)/(y2-x1);
	int intEvalTwo = (-x1-y2)/(x1*y2+x1);
	int intEvalThree = (x1+y2-x1)/y2;

	double dblEvalOne = (x3+y4*x3)/(y4-x3);
	double dblEvalTwo = (-x3-y4)/(x3*y4+x3);
	double dblEvalThree = (x3+y4-x3)/y4;  

	puts("x = 12, y = 13");
    	printf("(x+y*x)/(y-x) =%d", intEvalOne);
    	printf("\n(-x-y)/(x*y+x) = %d", intEvalTwo);
    	printf("\n(x+y-x)/y = %d\n", intEvalThree);
 
     	puts("\nx = 12.38, y = 13.92");
    	printf("(x+y*x)/(y-x) =%.7f", dblEvalOne);
    	printf("\n(-x-y)/(x*y+x) = %.7f", dblEvalTwo);
    	printf("\n(x+y-x)/y = %.7f\n", dblEvalThree);

	return EXIT_SUCCESS; 
}
