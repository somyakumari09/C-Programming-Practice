#include<stdio.h>

int factorial(int);

int factorial(int n){
    if(n==0){
        return 1;
    }
    return factorial(n-1)*n;
}
int main(){
    int i=1;
    printf("The factorial of %d is %d",i,factorial(i));
    
    return 0;
}