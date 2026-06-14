#include<stdio.h>

int main(){
    //WAP to calculate the factorial of a given number using for loop
    int n,product=1;
    for(n=3;n;n--){
        product=product*n;
    }
    printf("the factorial is %d\n",product);
    //second method
    int i,p=4,multi=1;
    for(i=1;i<=p;i++){
        multi=multi*i;
    }
    printf("factorial=%d",multi);
    return 0;
}