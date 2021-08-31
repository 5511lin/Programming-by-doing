//Keyboard Inputs Name, Age, and Salary 15 points Julian Lin
import java.util.Scanner;

    public class NameAgeAndSalary {

        public static void main( String[] args ) {

            Scanner keyboard = new Scanner(System.in);
            int age;
            double n2;
            String name1;
            System.out.println("Hello.   What is your name?");
            name1 = keyboard.next();
            System.out.println("");
            System.out.println("Hi, " + name1 + "!   How old are you?");
            age = keyboard.nextInt();
            System.out.println("");
            System.out.println("So you're " + age + ", eh?   That's not old at all!");
            System.out.println("How much do you make, " + name1 + "?");
            n2 = keyboard.nextDouble();
            System.out.println("");
            System.out.println("" + n2 + "!   I hope that's per hour and not per year! LOL!");
          }
      }
