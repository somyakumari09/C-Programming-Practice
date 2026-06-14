#include<stdio.h>

int main(){
    int i=1,n=4;
    int product=1;
    while (i<=n)
    {
        product *=i;
        i++;
    }
    printf("factorial=%d",product);
    
    return 0;
}