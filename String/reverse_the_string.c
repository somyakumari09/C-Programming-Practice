#include<stdio.h>

void strrev(char st[]){
    char temp;
    int n=strlen(st);
    for(int i=0;i<n/2;i++){
       temp = st[i];
       st[i] = st[n - 1 - i];
       st[n - 1 - i] = temp;
    }
}
int main(){
    char str[]="somya";
    strrev(str);
    printf("%s",str);
    return 0;
}