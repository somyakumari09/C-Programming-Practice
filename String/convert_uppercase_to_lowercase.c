#include<stdio.h>

void converttolower(char st[]){
    for (int i = 0; st[i]!='\0'; i++)
    {
        if(st[i]>='A' && st[i]<='Z'){
            st[i]=st[i]+32;
        }
    }
    
}
int main(){
    char str[]="HARRY";
    //printf("%s",strlwr(str));
    converttolower(str);
    printf("Lower case string:%s",str);
    return 0;
}