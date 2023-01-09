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
    FILE* file; 
    file = fopen("test.in","r"); 
    ll input = 0;
    fscanf(file,"%lld\n",&input); 

    for(ll i =0; i<input; i++){ 
        ll lenght = 0;
        fscanf(file,"%lld\n",&lenght);
        ll arr[lenght] = {}; 

        // this is for something
        for(ll j = 0; j<lenght; j++){ 
            fscanf(file,"%lld",&arr[j]); 
        }
        merge_sort(arr,0,lenght);
        ll first[lenght/2 + 1] = {}; 
        ll second[lenght/2 + 1] = {}; 
        ll c1 = 0, n1 = 0, c2 = 0, n2 = 0; 
        ll l1 = 0;
        ll l2 = 0;

        //this is for checking
    
        for(ll j = lenght-1; j >= 0; j--){ 
            ll temp1 = c1 + arr[j] - c2; 
            ll temp2 = c2 + arr[j] - c1; 

            //this is for input the
            if(temp2 >= temp1){ 
                c1 += arr[j]; 
                first[l1] = arr[j];
                l1++; 
            }else{
                c2 += arr[j]; 
                second[l2] =arr[j]; 
                l2++; 
            }
        }
        printf("Case #%d: ",i + 1); 
        ll temp = c1 - c2; 
        if((temp) < 0){
            cout << -temp << endl;
        }else{
            cout << temp << endl; 
        }  
      
    }
    return 0;
}