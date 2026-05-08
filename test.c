#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main(){

	
	char choice[30] = "";
	
	printf("enter choice: "); 
	scanf("%s", choice);

	if (strcasecmp(choice,"what") == 0) puts("runs");

	return 0;

}
