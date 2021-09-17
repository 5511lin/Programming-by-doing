//GUIs A Boring Window 10 points Julian Lin
import javax.swing.*;

public class BoringWindow extends JFrame {

    public static void main(String[] args) {
        //Initialize JFrame object
        JFrame f = new BoringWindow();
        // Set frame to close
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        // Size of window
        f.setSize(300, 200);
        // Shows window
        f.setVisible(true);
    }
}
