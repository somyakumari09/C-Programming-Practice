#include<stdio.h>

int main(){
    //WAP tp print multiplication table of a given number n
    int n;
    printf("enter value of n:");
    scanf("%d",&n);
    for (int i = 1; i <=10; i++)
    {
       printf("%d*%d=%d\n",n,i,n*i);
    }
    
    return 0;
}