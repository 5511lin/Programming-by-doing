//For Loops Counting For 10 points Julian Lin
import java.util.Scanner;

public class CountingFor
{
    public static void main( String[] args )
    {
        Scanner keyboard = new Scanner(System.in);

        System.out.println( "Type in a message, and I'll display it ten times." );
        System.out.print( "Message: " );
        String message = keyboard.nextLine();

        for ( int n = 2 ; n <= 10 ; n = n+2 )
        {
            System.out.println( n + ". " + message );
        }

    }
}
//1. n = n+1 will add 1 to the value n everytime the code repeats.
//2. n = 1 sets the original value of the variable
