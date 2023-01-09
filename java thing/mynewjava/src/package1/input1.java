package package1;
import java.util.Scanner;

public class input1 {
   
    public static void main(String[] args) {
        System.out.println("this is new line");
        Scanner input = new Scanner(System.in); 

        int temp = something(4);
        for (int i = 0; i < 4; i++) {
            System.out.println(temp);
        } 
        //this is new class
        human[] addhuman = new human[3]; 
        human human1 = new human("yoga",23); 
        human human2 = new human("thing",12); 
        //this is for input to array of object; 
        
        addhuman[0] = human1;
        addhuman[1] = human2;

        for (int i = 0; i < 2; i++) {
            addhuman[i].print();
        }
 
        input.close();
    }
    //this is for recall the function
    static int something(int input){ 
        return input++; 
    }
}
