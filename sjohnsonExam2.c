#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//stanley johnson
//
void printName(int num);

int main(void)
{
	int num; 
	printf("enter a number: ");
	scanf("%d", &num); 

	printName(num);

	return EXIT_SUCCESS;

}

void printName(int num)
{
	char name[] = "Stanley";
	int stringLen = strlen(name); // 7
	
	for (int i = 0; i < stringLen; i++)
	{
		printf("%s%d\n", name, num);
	}	
}
	
