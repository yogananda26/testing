package package2;

import java.util.Scanner;

class MergeSort {

    void merge(double arr[], int  l, int  m, int  r)
    {

        int n1 = m - l + 1;
        int n2 = r - m;
 
        double L[] = new double[n1];
        double R[] = new double[n2];
 
        for (int i = 0; i < n1; ++i)
            L[i] = arr[l + i];
        for (int j = 0; j < n2; ++j)
            R[j] = arr[m + 1 + j];
 
        int i = 0, j = 0;

        int k = l;
        while (i < n1 && j < n2) {
            if (L[i] >= R[j]) {
                arr[k] = L[i];
                i++;
            }
            else {
                arr[k] = R[j];
                j++;
            }
            k++;
        }
 
        while (i < n1) {
            arr[k] = L[i];
            i++;
            k++;
        }
 
        while (j < n2) {
            arr[k] = R[j];
            j++;
            k++;
        }
    }
 
    void sort(double arr[], int l, int r)
    {
        if (l < r) {
            // Find the middle point
            int m = l + (r - l) / 2;
 
            // Sort first and second halves
            sort(arr, l, m);
            sort(arr, m + 1, r);
 
            // Merge the sorted halves
            merge(arr, l, m, r);
        }
    }

    static void printArray(double arr[])
    {
        int n = arr.length;
        int j = 1;
        int mark = 0;
        for (int i = 0; i <= n-1; ++i){
            if(i>= 1){ 
                if(arr[i-1] != arr[i]){ 
                    j += 1; 
                    mark = 1;
                } 
                else{ 
                    j = i; 
                    mark = 0;
                }
            }   
            if(mark == 1){ 
                System.out.print(i + 1 + " ");
                System.out.printf("%.2f\n",arr[i]);
            }
            else if(mark == 0){
                System.out.print(j + " ");
                System.out.printf("%.2f\n",arr[i]);
            }
        }
    }
 
    public static void main(String args[])
    {
        Scanner scanner = new Scanner(System.in); 
        int input;
        input = scanner.nextInt(); 
        double arr[] = new double[input]; 
        for(int i = 0; i<input; i++){ 
            arr[i] = scanner.nextDouble(); 
        }
        MergeSort n = new MergeSort(); 
        n.sort(arr, 0, arr.length - 1);
        n.printArray(arr);

    }
}
