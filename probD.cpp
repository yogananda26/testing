#include<iostream>
using namespace std;
#define ll long long


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
int searching(ll arr[], int left,int right, int target){ 
    if(left > right)return 0;
    int mid = left + (right - left)/2; 

    if(arr[mid] == target)return 1; 
    else if(arr[mid] < target){ 
        return searching(arr,mid + 1, right,target);
    }
    else return searching(arr,left,mid-1,target); 
}
int main(){ 
    ll test = 0;
    FILE* file; 
    file = fopen("data.in","r"); 
    fscanf(file,"%d\n",&test);
    for(ll i = 0; i<test; i++){ 
        int input = 0;
        int target = 0; 
        // this is for searching thing;
        fscanf(file,"%d %d\n",&input,&target); 
        ll arr[input] = {}; 
        for(ll j = 0; j<input; j++){ 
            fscanf(file,"%lld",&arr[j]); 
        }
        merge_sort(arr,0,input); 
        int count = 0;
        for(ll k =0; k<input; k++){ 
            count += searching(arr,k+1,input -1,target - arr[k]); 
        }
        printf("Case #%.lld: %d\n",i + 1, count); 
    }
    fclose(file); 
    return 0; 
}