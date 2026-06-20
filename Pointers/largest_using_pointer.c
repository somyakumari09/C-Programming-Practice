#include<stdio.h>

int main(){
    int a=3;
    int b=5;
    int* ptr1=&a;
    int* ptr2=&b;

    if(*ptr1>*ptr2){
        printf("Largest=%d",*ptr1);
    }
    else{
        printf("Largest=%d",*ptr2); 
    }
    return 0;
}