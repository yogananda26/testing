#include<iostream> 
#include<vector>
#include<algorithm>
#include<string.h>
//something
using namespace std;

class input{ 
    public : 
    //this is the function for searching
    void searching(int ind,vector<int>&arr,vector<int>&ds, vector<vector<int>>&stor, int target){ 
        if(target == 0){
            stor.push_back(ds);
            return;
        }
        //this is for something
        for(int i = ind; i<arr.size(); i++){ 
            if(arr[i] > target)break;
            if(i > ind && arr[i] == arr[i-1])continue;

            ds.push_back(arr[i]); 
            searching(ind + 1,arr,ds,stor,target - arr[i]); 
            ds.pop_back(); 
        }
    }//this is for calling the function
    public :
    vector<vector<int>> temp(vector<int>&ds,int target){ 
        sort(ds.begin(),ds.end()); 
        vector<int>temp;
        vector<vector<int>>ans; 
        searching(0,ds,temp,ans,target);
        return ans;
    }
    
};
//this is for substring
class for_testing{ 
    private : 
        char* name;
        int size; 
    public : 
    for_testing(const char* something);
    void change(const char* newthing);
    void print(){ 
        cout << name << endl;
    }
    for_testing(for_testing& thing);
    ~for_testing(){delete[] name;}; 
};

//this is for accessing the thing
for_testing::for_testing(const char* something){ 
    size = strlen(something); 
    name = new char[size + 1];
    strcpy(name,something); 
}
void for_testing::change(const char* newthing){ 
    delete [] name;
    size = strlen(newthing);
    name = new char[size + 1];
    strcpy(name,newthing);
}
// this is for something
for_testing::for_testing(for_testing& thing){ 
    size = thing.size; 
    name = new char[size + 1];
    strcpy(name,thing.name); 
}


int main(){ 


    for_testing test1("yoga"); 
    for_testing test2 = test1; 
    test1.print(); 
    test2.print(); 
    test1.change("mama"); 
    test1.print(); 
    test2.print(); 
    // input sec; 
    // vector<int>temp; 
    // temp = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,7,8,9,10}; 
    // vector<vector<int>>ans;
    // ans = sec.temp(temp,14); 

    // for(int i = 0; i<ans.size(); i++){ 
    //     for(int j = 0; j<ans[i].size(); j++){ 
    //         cout <<" "<<ans[i][j];
    //     }
    //     cout << endl;
    // }
    
    return 0;
}