import java.util.Scanner; 
import javax.swing.JOptionPane;
import java.lang.Exception;


public class App {

    public static int calculate(int a, int b)throws Exception{ 
        if(a < 0 || b < 0){ 
            throw new IllegalArgumentException("n must be positive"); 
        }
        return a + b; 
    }
    public static void main(String[] args) throws Exception {
        // Scanner scanner = new Scanner(System.in);
        // // //this is for scanner 
        // // System.out.println("plese input your name please : "); 
        // // String name = scanner.nextLine(); 

        // // System.out.println("this is your name : ");
        // // System.out.println(name);
        // double first = 12;
        // double second = 14;

        // System.out.println("this is the biggest : " + Math.sqrt(first));

        // // this is for something
        // String thing = JOptionPane.showInputDialog("input your name");
        // JOptionPane.showMessageDialog(null, "this is your name : " + thing); 
        // // this is for integer
        // int age = Integer.parseInt(JOptionPane.showInputDialog(null, "input your age : ")); 
        // JOptionPane.showMessageDialog(null, "this is your age : " + age);
        
        for(int i =0; i <52; i++){ 
            System.out.print("0");
        }
    }
}
