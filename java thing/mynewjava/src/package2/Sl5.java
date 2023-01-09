package package2; 
import java.util.Scanner;

public class Sl5 {
    public static void main(String []Args){ 
        Scanner scanner = new Scanner(System.in); 

        int arr[][] = new int[10][10]; 
        for(int i =0; i<5; i++){ 
            //this is for 5 
            for(int j =0; j<5; j++){
                arr[i][j] = scanner.nextInt();
            }
        }

        //5 for row
        int some = 0;
        int min = arr[0][0];
        int max = arr[0][0];
        int how = scanner.nextInt(); 
        for(int i = 0; i<how; i++){ 

            int sec = scanner.nextInt(); 
            int mark = scanner.nextInt(); 
            int value = scanner.nextInt(); 
            if(sec == 1){ 
                for(int l = 0; l<5; l++){ 
                    arr[l][mark] += value;
                }
            }
            else if(sec == 0){
                for(int j = 0; j<5; j++){ 
                    arr[mark][j] += value;
                }
            }
        }

        for(int k = 0; k<5; k++){ 
            //this is for 5 
            for(int j =0; j<5; j++){
                if(min > arr[k][j])min = arr[k][j]; 
                if(max < arr[k][j])max = arr[k][j]; 
                some += arr[k][j]; 
            }
        }
        System.out.print(some + " ");
        System.out.print(min + " ");
        System.out.println(max);

        scanner.close();

    }
}
