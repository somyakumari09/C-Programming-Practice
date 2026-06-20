#include<stdio.h>

int main(){
    int num=5;
    int* ptr=&num;
    --(*ptr);
    printf("value after decrementing:%d",num);
    return 0;
}