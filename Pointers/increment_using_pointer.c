#include<stdio.h>

int main(){
    int num=5;
    int* ptr=&num;
    ++(*ptr);
    printf("value after incrementing:%d",num);
    return 0;
}