#include<stdio.h>

void change(int);

void change(int a){
    a=a/20;//It does not change the value.
}
int main(){
    int x=40;
    printf("the value of x is %d\n",x);
    change(x);
    printf("the value of x is %d\n",x);
    return 0;
}