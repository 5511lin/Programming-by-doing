import java.util.Scanner;

public class DateCheck {

    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int a1, a2, a3;
        System.out.println("Enter the Year:");
        a1 = keyboard.nextInt();
        while (a1>2021 || a1<1920)
        {
          System.out.println("Enter the Year:");
          a1 = keyboard.nextInt();
        }
          System.out.println("Enter the Month:");
          a2 = keyboard.nextInt();
          while (a2 >12 || a2<1){
            System.out.println("Enter the Month:");
            a2 = keyboard.nextInt();
          }
            System.out.println("Enter the Day:");
            a3 = keyboard.nextInt();
            while (a3>30 || a3<1)
            {
              System.out.println("Enter the Day:");
              a3 = keyboard.nextInt();
            }
              System.out.println("Your Birthday is "+a1+ "/" + a2 + "/" + a3 );
      }
    }
