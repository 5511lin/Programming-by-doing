//While Loops Number-Guessing with a Counter 40 points Julian Lin
import java.util.Scanner;

        import java.util.Random;

        public class NumberGuessingWithACounter {

            public static void main( String[] args ) {

                Scanner keyboard = new Scanner(System.in);

                Random r = new Random();

                int guess, number, tries;
                number = 1 + r.nextInt(10);

                System.out.println( "I have chosen a number between 1 and 10. Try to guess it." );
                System.out.print( "Your guess: " );
                guess = keyboard.nextInt();

                tries = 1;

                while ( guess != number ) {
                    System.out.println( "That is incorrect. Guess again." );
                    System.out.print( "Your guess: " );
                    guess = keyboard.nextInt();
                    tries++;
                }

                System.out.println( "That's right! You're a good guesser." );
                System.out.println( "It only took you " + tries + " tries." );

            }
        }
