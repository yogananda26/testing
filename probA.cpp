#include<iostream> 
#include<string.h> 

using namespace std;

struct input{ 
    char id[20]; 
    char name[100]; 
    char major[50]; 
    double gpa;
    char position[100]; 

}; 
input newinput[100]; 

int main(){ 
    int input = 0;
    cin >> input;getchar(); 

    for(int i =0; i<input; i++){ 
        scanf("%[^\n]",newinput[i].id);getchar();
        scanf("%[^\n]",newinput[i].name);getchar();
        scanf("%[^\n]",newinput[i].major);getchar();
        scanf("%lf",&newinput[i].gpa);getchar();
        scanf("%[^\n]",newinput[i].position);getchar();
    }
    //this is for searching 
    int sec_input= 0;
    cin >> sec_input;getchar(); 

    for(int i =0; i<sec_input; i++){
        char searching[50] ={}; 
        char major2[50] ={}; 
        double gpas = 0;
        int counting = 0;
    
        scanf("%s %s",searching,major2);getchar();
        scanf("%lf",&gpas);getchar();
        for(int i =0; i<input; i++){ 
            if(strcmp(newinput[i].position, searching) == 0){ 
                if(strcmp(newinput[i].major,major2) == 0){ 
                    if(gpas <= newinput[i].gpa){ 
                        counting++;
                    }
                }
            }
        }
        printf("CASE #%d: ",i + 1);
        printf("%d\n",counting); 
    }
    return 0;
}