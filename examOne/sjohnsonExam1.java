import java.util.Scanner;
class sjohnsonExam1
{
	public static void main(String[] args)
	{
		Scanner keyboard = new Scanner(System.in);
		int choice;
		int num = 12;

		System.out.print("Choose a number between 10-20: ");				   
		choice = keyboard.nextInt();
		
		boolean wL;
		if (choice >= 10 && choice <= 20) 
		{
			wL = true; 
			System.out.print("Your number is within the range.");
		}
		else
	       	{ 
			wL = false;
			System.out.print("Number is outside teh range of 10-20");
		}

		if (wL && choice == num) System.out.print("\nYou won! Num was 12\n");
		else { System.out.print("\nYou lost! Num was 12\n"); }
	}


}
