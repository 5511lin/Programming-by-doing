// If Statements P2 Gender Game 50 points Julian Lin
import java.util.Scanner ;
public class GenderGame {
    public static void main(String args []) {
    String gender, last, first, status;
    int age;
    Scanner response = new Scanner(System.in);

    System.out.print("What is your gender (M or F): ");
    gender = response.nextLine();
    System.out.print("First name: ");
    first = response.nextLine();
    System.out.print("Last name: ");
    last = response.nextLine();
    System.out.print("Age: ");
    age = response.nextInt();


    if (gender.equals('M')) {
        if (age >= 20)
        {System.out.printf("Then I shall call you Mr. %s.", last);}
        else {System.out.printf("Then I shall call you %s %s.", first, last);}
    }
    else {
        if (age >= 20){
            System.out.printf("Are you married, %s (y or n)?", first);
            status = response.nextLine();
            if (status.equals('y')){
            System.out.printf("Then I shall call you Mrs. %s.", last);
            }
            else {System.out.printf("Then I shall call you Ms. %s.", last);}
        }
        else {System.out.printf("Then I shall call you %s %s", first, last);
        }



    }
    }
}
