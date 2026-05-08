//stanley johnson

#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

void stanPush(void);

int main(){
    srand(time(NULL));
    stanPush();
    return EXIT_SUCCESS;
}

void stanPush(void){
	puts(" S J \n");

	char *stanRooms[5] = {"forest", "cave", "river", "castle", "Milo's Room" };

	int stanVisits[5] = {0}, stanChoice, stanRandy;

	  do {

        printf("\n=== stanley's room ===\n");

        for(int i = 0; i < 5; i++) {
            printf("%d. Enter %s\n", i + 1, stanRooms[i]);
        }

        printf("6. quit\n");

        printf("choose a room: ");
        scanf("%d", &stanChoice);

        if(stanChoice >= 1 && stanChoice <= 5) {

            stanVisits[stanChoice - 1]++;

            printf("\nYou entered the %s.\n",
                   stanRooms[stanChoice - 1]);

            stanRandy = rand() % 3;

            if(stanRandy == 0) {
                printf("You found treasure!\n");
            }
            else if(stanRandy == 1) {
                printf("A monster appeared!\n");
            }
            else {
                printf("Nothing happened.\n");
            }

        }
        else if(stanChoice == 6) {

            printf("\n=== rooms visits ===\n");

            for(int i = 0; i < 5; i++) {

                printf("%s visited %d time(s)\n",
                       stanRooms[i],
                       stanVisits[i]);
            }

            printf("Goodbye!\n");
        }
        else {

            printf("Invalid choice.\n");
        }

    } while(stanChoice != 6);

}
