#include<stdio.h>

int main(){
    //WAP to check that given number is prime or not using loops
    int n=3;
    int prime=0;
    if(n==0 ||n==1){
        prime=1;
    }
    else{
        for(int i=2;i<n;i++){
             if(n%i==0 && n!=2){
                 prime=1;
                break;
            }
        }
    }
    if(prime){
        printf("%d is not prime",n);
    }
    else{
        printf("%d is prime",n);
    }
    return 0;
}
    
    