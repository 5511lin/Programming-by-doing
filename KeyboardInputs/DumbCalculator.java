//Keyboard Inputs A Dumb Calculator 20 points Julian Lin
import java.util.Scanner;

    public class DumbCalculator {

        public static void main( String[] args ) {

            Scanner keyboard = new Scanner(System.in);

            Double firstnumber, secondnumber, thirdnumber, averagenumber;

            System.out.print( "What is your first number? " );
            firstnumber = keyboard.nextDouble();

            System.out.print( "What is your second number? " );
            secondnumber = keyboard.nextDouble();

            System.out.print( "What is your third number? " );
            thirdnumber = keyboard.nextDouble();

            averagenumber = (firstnumber+secondnumber+thirdnumber) / 2;

            System.out.println( "\n( " + firstnumber + " + " + secondnumber + " + " + thirdnumber + " ) / 2 is... " + averagenumber );

        }
    }
