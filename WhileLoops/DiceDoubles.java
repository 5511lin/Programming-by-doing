//While Loops Dice Doubles 45 points Julian Lin
import java.util.Scanner;

    import java.util.Random;

    public class DiceDoubles {

        public static void main( String[] args ) {

            Scanner keyboard = new Scanner(System.in);

            Random r = new Random();

            int r1, r2, total;

                System.out.println( "HERE COMES THE DICE!" );
                System.out.println();

                r1 = 1 + r.nextInt(6);
                r2 = 2 + r.nextInt(6);
                total = r1 + r2;

                System.out.println( "Roll #1: " + r1 );
                System.out.println( "Roll #2: " + r2 );
                System.out.println( "Your total is " + total + "!" );

                while ( r1 != r2 ) {
                    r1 = 1 + r.nextInt(6);
                    r2 = 2 + r.nextInt(6);
                    total = r1 + r2;

                    System.out.println( "Roll #1: " + r1 );
                    System.out.println( "Roll #2: " + r2 );
                    System.out.println( "Your total is " + total + "!" );
                }
            }
        }
