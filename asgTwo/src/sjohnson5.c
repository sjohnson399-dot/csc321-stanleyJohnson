// Stanley Johnson
// CSC-321
// Lab #5

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void)
{
	int uno = 1;
	double dos = 2.00;
	float tres = 3.12;
	char cuatro = 'c';

	printf("Uno = %d, address = %p\n" , uno, &uno);
        printf("Dos  = %lf, address = %p\n" , dos, &dos);
        printf("Tres  = %f, address = %p\n" , tres, &tres);
        printf("Cuatro = %c, address = %p\n\n" , cuatro, &cuatro);

	if(uno == 5)
	{
		int throwAway = 5;
	}

//	printf("Var %d can't be used", throwAway);


	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	for (int i = 0; i < 10; i++)
	{
		printf("a[%d] = %d,", i, a[i]);
		printf("a[%d] address = %p\n", i, &a[i]);

	}
	return EXIT_SUCCESS;
}
