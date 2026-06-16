#include<stdio.h>

int main(){
    int a=5,b=6;
    int temp;
    printf("Before swapping the value of a is %d and b is %d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf(" After swapping the value of a is %d and b is %d",a,b);
    return 0;
}