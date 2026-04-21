// stanley johnson
//

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double hypCalc(double base, double height);


int main(void)
{
	double base, height;

	printf("Enter base: ");
	scanf("%lf", &base);

	printf("enter height: "); 
	scanf("%lf", &height);

	printf("value of the hypotenuse is %.2f\n", hypCalc(base, height));

	return EXIT_SUCCESS;
}

double hypCalc(double base, double height)
{
        return sqrt(pow(base, 2) + pow(height, 2));

}
