#include<stdio.h>

int checkEvenOdd(int);

int checkEvenOdd(int n){
    if(n%2==0){
        printf("The number is even\n");
    }
    else{
        printf("The number is odd\n");
    }
}

int main(){
    int num=5;
    checkEvenOdd(num);
    return 0;
}