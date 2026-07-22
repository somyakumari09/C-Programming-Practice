#include<stdio.h>

typedef struct vector{
    int i,j;
}v;
v sumvector(v v1,v v2){
    v v3={v1.i+v2.i,v1.j+v2.j};
    return v3;
}
int main(){
    v v1={1,2};
    v v2={2,4};
    v v3=sumvector(v1,v2);
    printf("The value of vector v3 is %di+%dj",v3.i,v3.j);
    return 0;
}