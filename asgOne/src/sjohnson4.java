//Stanley Johnson
import java.util.Scanner;

public class sjohnson4
{
        public static void main(String[] args)
        {
                int choice = 0;

                Scanner keyboard = new Scanner(System.in);

                System.out.print("Enter a num choice (1-4): ");
                choice = keyboard.nextInt();

                switch (choice)
                {
                        case 1:
                                System.out.println("Choice 1");
                                break;
                        case 2:
                                System.out.println("Choice 2");
                                break;
                        case 3:
                                System.out.println("Choice 3");
                                break;
                        case 4:
                                System.out.println("Choice 4");
                                break;
                        default:
                                System.out.println("Choice out of range");
                }
        }
}
