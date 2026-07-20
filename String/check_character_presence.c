#include<stdio.h>
#include<string.h>

int main(){
    char c='e';
    char str[]="shreya";
    int contain=0;
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i]==c){
         contain=1;
         break;
        } 
    }
    if(contain){
        printf("Yes the character is present \n");
    }
    else{
        printf("Does not present\n");
        
    }
    
    return 0;
}