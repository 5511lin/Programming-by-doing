// If Statements P2 Gender Game 50 points Julian Lin
import java.util.Scanner ;

public class GenderGame {
   public static void main(String args []) {
   String gender, last, first, status;
   int age;
   Scanner keyboard = new Scanner(System.in);
   System.out.print("What is your gender (M or F): ");
   gender = keyboard.next();
   System.out.print("First name: ");
   first = keyboard.next();
   System.out.print("Last name: ");
   last = keyboard.next();
   System.out.print("Age: ");
   age = keyboard.nextInt();


   if (gender.equalsIgnoreCase("M")) {
       if (age >= 20)
       {
         System.out.printf("Then I shall call you Mr. %s.", last);
       }
       else {
         System.out.printf("Then I shall call you %s %s.", first, last);
            }
   }
   if (gender.equalsIgnoreCase("F"))
       {
           if (age>= 20)
           {
           System.out.printf("Are you married, %s (y or n)?", first);
           status = keyboard.next();

           if (status.equalsIgnoreCase("y")){
           System.out.printf("Then I shall call you Mrs. %s.", last);
           }
           else {
             System.out.printf("Then I shall call you Ms. %s.", last);
               }
           }
           else {System.out.printf("Then I shall call you %s %s", first, last);}

       }

}
}
