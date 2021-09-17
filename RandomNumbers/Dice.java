//Random Numbers Dice 25 points Julian Lin
import java.util.Random;

public class Dice
{
	public static void main ( String[] args )
	{
		Random r = new Random();

		int roll1 = 1 + r.nextInt(6);
    int roll2 = 1 + r.nextInt(6);
    int sum = roll1+roll2;
    System.out.println("HERE COMES THE DICE!");
    System.out.println("");
		System.out.println( "Roll #1: " + roll1 );
    System.out.println( "Roll #2: " + roll2 );
		System.out.println("The total is "+sum+"!");
		int num1 = 1 + r.nextInt(10);
		int num2 = 1 + r.nextInt(10);
	}
}
