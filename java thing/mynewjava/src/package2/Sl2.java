package package2;
import java.util.Scanner;



public class Sl2 {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in); 
        //this is for scanning
        int input = scan.nextInt(); 
        int temp = input;
        for(int i = 0; i<input; i++,temp--){
            for(int j = 0; j<input; j++){ 
                if(i == 0||i == j || i == input - 1 || j == 0 || j == input-1 ||temp-1 == j) 
                    System.out.print("*");
                else
                    System.out.print(" ");
            }
            System.out.println();
        }
    }
}
