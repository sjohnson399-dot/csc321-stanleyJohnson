//stanley johnson
import java.util.Scanner;

public class sjohnson10
{
	public static double calcCylVol(double radius, double height)
	{
		return Math.PI * (Math.pow(radius, 2)) * height;
	}

	public static void main(String[] args)
	{
		Scanner keyboard = new Scanner(System.in);
		double radius, height, volume;

		System.out.print("Enter radius: ");
		radius = keyboard.nextDouble();

		System.out.print("Enter height: ");
		height = keyboard.nextDouble();
		
		volume = calcCylVol(radius, height);
		System.out.println("The volume is " + volume);
	}
}
