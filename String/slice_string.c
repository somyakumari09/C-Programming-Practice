#include<stdio.h>

int slice(char str[],int m,int n){
    int i=0;
    char* ptr1=&str[m];
    char* ptr2=&str[n];

    str=ptr1;
    str[n]='\0';
    return str;
}

int main(){
    char str[]="Harry bhai";
    printf("%s",slice(str,1,8));
    
    return 0;
}