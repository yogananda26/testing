package package2;
import java.util.Scanner;
import java.lang.Math;

public class Sl1{
    public static void main(String[]args){ 
        //this is for checking if this is palindrom
        Scanner scan = new Scanner(System.in); 
        String input; 

        input = scan.nextLine(); 
        char sec_input[] = input.toCharArray();
        int mark = 0;
        
        for(int i = 0; i<input.length(); i++){ 
            if(sec_input[i] == sec_input[input.length() - i - 1]){ 
                mark = 1;
                continue;
            }
            System.out.println("No");
            mark = 0;
            break; 
        }
        if(mark == 1){ 
            System.out.println("Yes");
        }

    }
}