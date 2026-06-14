#include<stdio.h>

int main(){
    //WAP tp print multiplication table of a given number n in reverse order
    int n=10;
    for (int i = 10; i ; i--)
    {
       printf("%d*%d=%d\n",n,i,n*i);
    }
    
    return 0;
}