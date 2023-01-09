#include<iostream>
using namespace std;

int j = 0;

//this is for swapping 
void swapping(int *first, int *second){ 
    int temp = *first;
    *first = *second;
    *second = temp; 
}
void reverse(int arr[],int lenght,int first){ 
    if(lenght > first)return;
    // this is for second
    swapping(&arr[first],&arr[lenght -1]);
    return reverse(arr,lenght - 1,first + 1); 
    //this is for swapping
}


int main(){
    int arr[5] = {1,2,3,4,5}; 
    reverse(arr,5,0); 
    int lenght = 5;
    // for(int i = 0; i<lenght; i++, lenght--){ 
    //     swapping(&arr[i],&arr[lenght-1]);
    // }
    for(int i = 0; i<5; i++){ 
        cout << " " << arr[i]; 
    }

}