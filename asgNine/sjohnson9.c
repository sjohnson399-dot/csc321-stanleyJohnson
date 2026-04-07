//stanley johnson
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));

    int guess = 0;
    int answer = (rand() % 20) + 1; // 1-20

    while (guess != answer)
    {
        printf("Guess a number between 1-20: ");
        scanf("%d", &guess);
	
        if(guess < 1 || guess > 20)
	{
		printf("Outside of 1-20 range. Guess again: ");
		scanf("%d", &guess);
		continue;
	}

	else
	{
		if (guess == answer)
		{
			for (int i = 0; i < guess; i++)
    			{
        			printf("WIN\n");
    			}
			break;
		}

		else 
		{
			if (guess > answer)
			{
                		printf("You lost and your guess is greater than my number which was %d.\n", answer);
				break;	
			}
            		else
			{
                		printf("You lost and your guess is lower than my number which was %d.\n", answer);
				break;
			}
		}
	}
    }
    return 0;
}
