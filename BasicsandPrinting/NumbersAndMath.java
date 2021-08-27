//Basics and Printing Numbers and math 7 points Julian Lin
	public class NumbersAndMath
{
    public static void main( String[] args){
        // Print I will now count my chickens:
        System.out.println( "I will now count my chickens:" );
        // Calculate the amount of Hens.
		System.out.println( "Hens " + ( 25.0 + 30.0 / 6.0 ) );
		// Calculate the amount of Roosters.
        System.out.println( "Roosters " + ( 100.0 - 25.0 * 3.0 % 4.0 ) );
        // Print now I will count the eggs:
		System.out.println( "Now I will count the eggs:" );
        // Calculate the amount of eggs.
		System.out.println( 3.0 + 2.0 + 1.0 - 5.0 + 4.0 % 2.0 - 1.0 / 4.0 + 6.0 );
        // Print the question "Is it true that 3 + 2 < 5 - 7?".
		System.out.println( "Is it true that 3 + 2 < 5 - 7?" );
        // Since 3+2 is not less than 5-7, it returns false.
		System.out.println( 3.0 + 2.0 < 5.0 - 7.0 );
        // Print what is 3 + 2 and print the solution of 3+2.
		System.out.println( "What is 3 + 2? " + ( 3.0 + 2.0 ));
		// Print what is 5-7? and print the solution of -2
        System.out.println( "What is 5 - 7? " + ( 5.0 - 7.0 ));
        // Print Oh, that's why it's false.
		System.out.println( "Oh, that's why it's false." );
        // Print How about some more.
		System.out.println( "How about some more." );
        // Print Is it greater? and returns true as 5 is > than -2.
		System.out.println( "Is it greater? " + ( 5.0 > -2.0));
		// Print Is it greater or equal? and returns true as  5 is > than -2.
        System.out.println( "Is it greater or equal? " + ( 5.0 >= -2.0 ));
        // Print Is it less or equal? and returns false as 5 is not either < or = to -2.
		System.out.println( "Is it less or equal? " + ( 5.0 <= -2.0 ));
    }
}
