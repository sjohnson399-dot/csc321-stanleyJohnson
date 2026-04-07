// stanley johnson
//

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double hypCalc(double base, double height)
{
        return hypot(base, height);

}

int main(void)
{
	double base, height;

	printf("Enter base: ");
	scanf("%lf", &base);

	printf("enter height: "); 
	scanf("%lf", &height);

	printf("value of the hypotenuse is %f\n", hypCalc(base, height));

	return EXIT_SUCCESS;
}


