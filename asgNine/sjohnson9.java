import java.util.Scanner;
import java.util.Random;

public class sjohnson9
{
	public static void main(String[] args)
	{
		Scanner keyboard = new Scanner(System.in);
		int guess = 0;
		
		Random rand = new Random();
		int num = rand.nextInt(1,21);

		while (guess != num)
		{
			System.out.print("Guess a number 1-20: ");
			guess = keyboard.nextInt();

			if(guess < 1 || guess > 20)
			{ 
				System.out.print("Outside of 1-20 range. Guess again: ");
				guess = keyboard.nextInt();
				continue;
			}

			else
			{
				if (guess == num)
				{

					for (int i = 0; i < guess; i++)
					{
						System.out.println("Win");
					}
					break;
				}

				else
				{
					if (guess > num)
					{
						System.out.printf("You lost and your guess is greater than my number which was %d.\n", num);
						break;
					}

					else
					{
						System.out.printf("You lost and your guess is lower than my number which was %d.\n", num);
                                                break;
                                        }
				}
			}
		
		}
	}
}
