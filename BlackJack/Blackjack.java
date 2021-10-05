//Project Blackjack 150 points Julian Lin
import java.util.Random;
import java.util.Scanner;
public class Blackjack
{
  public static void main(String[] args)
    {

      Scanner keyboard = new Scanner(System.in);
      Random r = new Random();
      int n1 = 2+ r.nextInt(9);
      int n2 = 2+ r.nextInt(9);
      int total = n1+n2;
      int dealer1 = 2+ r.nextInt(9);
      int hiddencard= 2+ r.nextInt(9);
      int total1 = dealer1 + hiddencard;

      System.out.println("Welcome to Julian's blackjack program!");
      System.out.println("You get a " + n1 + " and a " + n2 + ".");
      System.out.println("Your total is " + total + ".");
      System.out.println("");

      System.out.println("The dealer has a " + dealer1 + " showing, and a hidden card.");
      System.out.println("His total is hidden, too.");
      System.out.println("");

      do{
      System.out.print("Would you like to \"hit\" or \"stay\"?");
      String decision1 = keyboard.next();
      if (decision1.equalsIgnoreCase("hit"))
      {
        n1 = 2+r.nextInt(9);
        System.out.println("You drew a " + n1 + ".");
        total = total + n1;
        System.out.println("Your total is " + total + ".");
        if (total>21)
        {
          System.out.println("YOU LOSE!");
          System.exit(0);
        }
        }
        else
      {
        break;
      }
    } while (total <= 21);
      System.out.println("");

      System.out.println("Okay, dealer's turn.");
      System.out.println("His hidden card was a " + hiddencard + ".");
      System.out.println("His total was " + total1 + ".");

      while (total1<=15)
      {
        System.out.println("Dealer chooses to hit.");
        dealer1 = 2+r.nextInt(9);
        System.out.println("He draws a " + dealer1 + ".");
        total1 = total1 + dealer1;
        System.out.println("His total is " + total1 + ".");
        if (total1>21){
          System.out.println("You WIN!");
          System.exit(0);
        }
      }

      if (total1 > 16)
      {
        System.out.println("Dealer stays.");
      }

      System.out.println("");

      System.out.println("Dealer total is " + total1 + ".");
      System.out.println("Your total is " + total + ".");
      System.out.println("");

      if (total>total1 && total<=21) //if your number is smaller or equal to than 21 and bigger than dealer
      {
        System.out.println("YOU WIN!");
      }
      if (total1>total && total1<=21) //if your number is smaller than dealer and dealer's number is less than or equal to 21.
      {
        System.out.println("YOU LOSE!");
      }

      if (total1>21 && total<=21) // if dealer's number is greater than 21 and your number is smaller or equal to 21.
      {
        System.out.println("YOU WIN!");

      }

      if (total> 21 && total1<=21) //if your number is greater than 21 and dealer's smaller or equal to 21.
      {
        System.out.println("YOU LOSE!");

      }

      if (total> 21 && total1>21) //if both greater than 21
      {
        System.out.println("It's a draw!");

      }

      if (total==total1) //if both same number
      {
        System.out.println("It's a draw!");

      }
    }
}
