// If Statements P2 Choose your own Adventure! 60 points Julian Lin
import java.util.Scanner ;
public class Adventure1 {
    public static void main(String [] args ) {
    String n1, n2, n3, n4, n5, n6;
    Scanner response = new Scanner(System.in);

    System.out.println("WELCOME TO MITCHELL'S TINY ADVENTURE!");
    System.out.println("");
    System.out.println("You are in a creepy house! Would you like to \"upstairs\" or into the");
    System.out.println("\"kitchen\"?");
    n1 = response.nextLine();
    System.out.println("");
    if (n1.equalsIgnoreCase("kitchen")) {
        System.out.println("There is a long countertop with dirty dishes everywhere. Off to one side");
        System.out.println("there is, as you'd expect, a refrigerator. You may open the \"refrigerator\"");
        System.out.println("or look in a \"cabinet\".");
        n2 = response.nextLine();
        System.out.println("");
        if (n2.equalsIgnoreCase("refrigerator"))
        {System.out.println("Inside the refrigerator you see food and stuff. It looks pretty nasty.");
        System.out.println("Would you like to eat some of the food? (\"yes\" or \"no\")");
        n3 = response.nextLine();
        System.out.println("");
        if (n3.equalsIgnoreCase("no")){
        System.out.println("You die of staration... eventually.");
        }
        else{
        System.out.println("You eat the food and get a stomach ache.");
        }
      }
        else {System.out.println("You opened the cabinet to find nothing inside. Game Over!");}
    }
    else {
        System.out.println("Upstairs you see a hallway. At the end of the hallway is the master");
        System.out.println("\"bedroom\". There is also a \"bathroom\" off the hallway. Where would you like");
        System.out.println("to go?");
        n4 = response.nextLine();
        System.out.println("");
        if (n4.equalsIgnoreCase("bedroom")){
            System.out.println("You are in a lush bedroom, with expensive-looking hardwood furniture. The");
            System.out.println("bed is unmade. In the back of the room, the closet door is ajar. Would you");
            System.out.println("like to open the door? (\"yes\" or \"no\")");
            n5 = response.nextLine();
            System.out.println("");
            if (n5.equalsIgnoreCase("no")){
            System.out.println("Well, then I guess you'll never know what was in there. Thanks for playing,");
            System.out.println("I'm tired of making nested if statements.");
            }
            else {System.out.println("You open the door and see Nothing! Game Over!");}
        }
        else {
                System.out.println("You are inside the bathroom and you see a shower curtain covering a bathtub.");
                System.out.println("Do you want to uncover the shower curtain and check? (\"yes\" or \"no\")");
                System.out.print("> ");
                n6 = response.next();
                System.out.println();
                if (n6.equalsIgnoreCase("yes")) {
                    System.out.println("You uncover the shower curtain and take a shower. You win!");
                } else {
                    System.out.println("You try to head back but it's too late! There was someone inside the bathtub");
                    System.out.println("that snuck up on you and shot you with a gun. Sorry, you lose.");
                }
        }
    }
    }
    }
