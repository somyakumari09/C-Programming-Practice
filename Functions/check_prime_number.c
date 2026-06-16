#include<stdio.h>

int Prime(int);

int Prime(int n){
    if(n==0||n==1){
        return 1;
    }
    else{
        for(int i=2;i<n;i++){
             if(n%i==0){
                return 1;
            }
        }
        return 0;
    }
}
int main(){
    int num=12;
    if(Prime(num)){
        printf("the number is not prime\n");
    }
    else{
        printf("the number is prime");
    }

    return 0;
}