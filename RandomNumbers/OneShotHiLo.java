// Random Numbers One Shot Hi-Lo 35 points Julian Lin
import java.util.Random;
import java.util.Scanner;
public class OneShotHiLo
{
	public static void main ( String[] args )
	{
		Random r = new Random();
    Scanner keyboard = new Scanner(System.in);
    int number1;
    System.out.println("I'm thinking of a number between 1-100. Try to guess it.");
    number1 = keyboard.nextInt();
    System.out.println("");
    int roll1 = 1 + r.nextInt(100);
    if (number1 == roll1){
      System.out.println( "You guessed it! What are the odds?!?" );
    }
    else if(number1 > roll1){
      System.out.println( "Sorry, you are too high. I was thinking of " + roll1 );
    }
    else{
      System.out.println( "Sorry, you are too low. I was thinking of " + roll1 );
    }
	}
}
