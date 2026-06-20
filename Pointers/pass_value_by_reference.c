#include<stdio.h>

int prod(int* ,int*);

int prod(int* a,int* b){
    *a=6;
    return (*a * *b);
}
int main(){
    int x=1,y=2;
    printf("the product is %d\n",prod(&x,&y));
    printf("the value of x is %d",x);
    return 0;
}