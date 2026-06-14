#include<stdio.h>

int main(){
    int i,n=1;
    int sum=0,add=0;
    for ( i = 1; i <=10; i++)
    {
        sum=sum+i;
    }
    printf("using for loop sum is %d\n",sum);
    do
    {
        add=add+n;
        n++;
    } while (n<=10);
    printf("using do while loop sum is %d",add);
    
    
    return 0;
}