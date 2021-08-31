//Keyboard Inputs A Dumb Calculator 20 points Julian Lin
import java.util.Scanner;

    public class DumbCalculator {

        public static void main( String[] args ) {

            Scanner keyboard = new Scanner(System.in);

            Double n1, n2, n3, n4;

            System.out.print( "What is your first number? " );
            n1 = keyboard.nextDouble();

            System.out.print( "What is your second number? " );
            n2 = keyboard.nextDouble();

            System.out.print( "What is your third number? " );
            n3 = keyboard.nextDouble();

            n4 = (n1+n2+n3) / 2;

            System.out.println( "\n( " + n1 + " + " + n2 + " + " + n3 + " ) / 2 is... " + n4 );

        }
    }
