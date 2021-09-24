//While Loops Adding Values in a Loop 30 points Julian Lin
import java.util.Scanner;

    public class AddingValuesInALoop {

        public static void main( String[] args ) {

            Scanner keyboard = new Scanner(System.in);

            int total, entry;
            total = 0;
            entry = 1;

            System.out.println( "I will add up the numbers you give me." );

            while ( entry != 0 ) {
                System.out.print( "Number: " );
                entry = keyboard.nextInt();
                total = total + entry;

                if ( entry != 0 ) {
                System.out.println( "The total so far is " + total );
                }
            }

            System.out.println();
            System.out.println( "The total is " + total + "." );

        }
    }
