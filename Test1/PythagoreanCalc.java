import java.util.Scanner;

public class pyth
{
  public static void main (String[] args)
  {
    String reply;
    Scanner keyboard = new Scanner(System.in);
    do  { System.out.println("Pythagorean calculator.");


  	System.out.println();
    System.out.print("Solving for (H) or (L)?");
    String solve = keyboard.next();
    if (solve.equalsIgnoreCase("h"))
    {
      System.out.println("Enter side A: ");
    double A = keyboard.nextDouble();
      System.out.println("Enter side B: ");
    double B = keyboard.nextDouble();
      area_H(A,B);
    }
    if (solve.equalsIgnoreCase("l"))
    {
      System.out.println("Enter side A: ");
      double A = keyboard.nextDouble();
      System.out.println("Enter side C: ");
      double C = keyboard.nextDouble();
      area_L(C,A);
    }

    System.out.println("Do you want to play again? (answer yes or no)");
     reply = keyboard.next();

    } while (reply.equalsIgnoreCase("yes"));
  }
  public static double area_H (double A, double)
  {
    double Area;
    Area = Math.sqrt(Math.pow (A,2)  + Math.pow (B,2)  );
    System.out.println(Area);
    return Area;
  }

  public static double area_L (double C, double A)
  {
    double Area;
    Area = Math.sqrt(Math.pow (C,2) - Math.pow (A,2) );
    System.out.println(Area);
    return Area;
  }
}
