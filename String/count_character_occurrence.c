#include<stdio.h>
#include<string.h>

int main(){
    char c='i';
    char st[]="dihmhiynisbsiiornhh";
    int count=0;
    for (int i = 0; i < strlen(st); i++)
    {
        if(st[i]==c){
            count++;
        }
    }
    printf("%d",count);
    
    return 0;
}