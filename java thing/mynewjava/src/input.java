import java.util.Scanner;
import javax.swing.plaf.synth.SynthOptionPaneUI;


public class input {
    public static void main(String[] args) {
        Scanner thing = new Scanner(System.in); 
        double input;
        String input2; 

        System.out.print("plese input your number : ");
        input = thing.nextDouble(); 
        thing.nextLine(); 
        System.out.printf("this is your %f number ",input);
        System.out.println("input your string : ");
        input2 = thing.next(); 
        System.out.println("this is for looping the star");
        //this is switch case
        switch (input2) {
            case "daniel":
                System.out.println("selamat pagi bang");
                break;
            case "yoga":
                System.out.println("selamat siang");
                break;
            default:
                break;
        }
        //this is for looping the star
        for(int i = 0; i<input; i++){ 
            for(int j = 0; j<i; j++){
                System.out.print("* ");
            }
            System.out.println();
        }
       
    }
}


