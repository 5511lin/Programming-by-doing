//Functions Area Calculator 110 points Julian Lin
import java.util.Scanner;
public class AreaCalculator
{
  public static void main(String[] args)
    {

      Scanner keyboard = new Scanner(System.in);
      int n1;
      int base1;
      int height1;
      int length1;
      int width1;
      int sidelength1;
      int radius1;

      System.out.println("Shape Area Calculator version 0.1 (c) 2005 Mitchell Sample Output, Inc.");
      System.out.println("");
do{
      System.out.println("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
      System.out.println("");
      System.out.println("1) Triangle");
      System.out.println("2) Rectangle");
      System.out.println("3) Square");
      System.out.println("4) Circle");
      System.out.println("5) Quit");
      System.out.println("Which shape: ");
      n1 = keyboard.nextInt();
      System.out.println("");
      if (n1 == 1){
      System.out.println("Base: ");
      base1 = keyboard.nextInt();
      System.out.println("Height: ");
      height1 = keyboard.nextInt();
      System.out.println("");
      int area1 = (base1*height1)/2;
      System.out.println("The area is "+ area1 +".");
      System.out.println("");
      }
      else if (n1 == 2){
        System.out.println("Length: ");
        length1 = keyboard.nextInt();
        System.out.println("Width: ");
        width1 = keyboard.nextInt();
        System.out.println("");
        int area1 = length1 * width1;
        area1 = length1 * width1;
        System.out.println("The area is "+ area1 +".");
        System.out.println("");
      }
      else if (n1 == 3){
        System.out.println("Side length: ");
        sidelength1 = keyboard.nextInt();
        System.out.println("");
        int area1=sidelength1*sidelength1;
        System.out.println("The area is "+ area1 +".");
        System.out.println("");
      }
      else if (n1 == 4){
        System.out.println("Radius: ");
        radius1 = keyboard.nextInt();
        System.out.println("");
        double area1=Math.PI*radius1*radius1;
        System.out.println("The area is "+ area1 +".");
        System.out.println("");
      }
      else {
        System.out.println("Goodbye.");
      }
}
while (n1!=5);
    }
}
