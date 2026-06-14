#include<stdio.h>

int main(){
    //WAP to find greatest of four numbers entered by the user
    int a=6,b=5,c=4,d=1;
    if(a>b && a>c && a>d){
        printf("a is greatest");
    }
    else if(b>a && b>c && b>d){
        printf("b is greatest");
    }
    else if(c>a && c>b && c>d){
        printf("c is greatest");
    }
    else{
        printf("d is greatest");
    }
    return 0;
}