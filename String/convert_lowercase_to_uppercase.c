#include<stdio.h>

void converttoupper(char st[]){
    for (int i = 0; st[i]!='\0'; i++)
    {
        if(st[i]>='a' && st[i]<='z'){
            st[i]=st[i]-32;
        }
    }
    
}
int main(){
    char str[]="harry";
    //printf("%s",strupr(str));
    converttoupper(str);
    printf("upper case string:%s",str);
    return 0;
}