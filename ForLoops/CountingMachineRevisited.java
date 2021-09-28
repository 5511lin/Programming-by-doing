//For Loops Counting Machine Revisited 25 points Julian Lin
import java.util.Scanner;

public class CountingMachineRevisited
{
    public static void main( String[] args )
    {
        Scanner keyboard = new Scanner(System.in);

        System.out.print( "Count from: " );
        int number1 = keyboard.nextInt();
        System.out.print( "Count to : " );
        int number2 = keyboard.nextInt();
        System.out.print( "Count by : " );
        int number3 = keyboard.nextInt();

        for ( int n = number1 ; n <= number2 ; n = n+number3 )
        {
            System.out.print( n + " ");
        }

    }
}
