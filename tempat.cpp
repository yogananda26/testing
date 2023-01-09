#include<iostream> 
#define ll long long
using namespace std; 

void merge(ll arr[],int left, int mid, int right){ 
    int i, j , k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int arr1[n1]; 
    int arr2[n2]; 

    for(i =0; i<n1; i++){ 
        arr1[i] = arr[left + i]; 
    }
    for(j =0; j<n2; j++){ 
        arr2[j] = arr[mid + j + 1]; 
    }
    i = 0;
    j = 0; 
    k = left; 

    while(i < n1 && j < n2){ 
        if(arr1[i] <= arr2[j]){ 
            arr[k] = arr1[i]; 
            i++;
        }else{
            arr[k] = arr2[j];
            j++; 
        }
        k++; 
    }
    while(i < n1){ 
        arr[k] = arr1[i]; 
        i++;
        k++;
    }
    while(j < n2){ 
        arr[k] = arr2[j];
        j++;
        k++;
    }
}
void merge_sort(ll* arr,int first, int second){ 
    if(first >= second)return; 
    int mid = first + (second - first)/2;

    merge_sort(arr,first,mid); 
    merge_sort(arr,mid + 1,second); 
    merge(arr,first,mid,second); 
}


int main(){ 
    ll arr[10] = {3,4,2,5,3,4,6,4,5,6}; 
    int lenght = 10;
    merge_sort(arr,0,lenght); 

    for(int i = 0; i<lenght; i++){ 
        cout << " " << arr[i];
    }

    return 0;
}