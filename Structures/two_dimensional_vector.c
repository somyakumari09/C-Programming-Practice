#include<stdio.h>

struct vector{
    int i,j;
};
 
int main(){
    struct vector v={6,2};
    printf("The value of vector is %di+%dj",v.i,v.j);  
    return 0;
}