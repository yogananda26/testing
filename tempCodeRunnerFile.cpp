#include<iostream> 
using namespace std;

int main(){ 
    //this is for perkalian matriks 
   int lenght; 
   cin >> lenght; 
   int arr[lenght][lenght]; 
   int arr1[lenght][lenght]; 
   int result[lenght][lenght]; 
   int sum = 0;
   //this is for inpuutting array
   cout << "input your first array :\n"; 
   for(int i = 0; i<lenght; i++){ 
       for(int j = 0; j<lenght; j++){
         cin >> arr[i][j]; 
         //thisis for inputting the array of 2d array
       }
   }
   cout << "input your second array :\n"; 
    for(int i = 0; i<lenght; i++){ 
       for(int j = 0; j<lenght; j++){
         cin >> arr1[i][j]; 
         //thisis for inputting the array of 2d array
       }
   }
   for(int i = 0; i<lenght; i++){ 
        //this is for second something
        for(int j = i; j<lenght; j++){ 
            //this is for somethingS
         
            for(int k = 0; k<lenght; k++){ 
                sum += arr[i][k]*arr1[k][j];
            }
            //this is for storing the result
            result[i][j] = sum;
            sum = 0;
        }
   }

   cout << "this is your result \n"; 
   for(int i = 0; i<lenght; i++){ 
       for(int j = 0; j<lenght; j++){
         cout << result[i][j] << " "; 
         //thisis for inputting the array of 2d array
       }
       cout << endl;
   }
    return 0;
}