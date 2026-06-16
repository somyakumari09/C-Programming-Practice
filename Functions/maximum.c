#include<stdio.h>

int max(int,int,int);

int max(int a,int b,int c){
    if(a>=b && a>=c){
        return a;
    }
    else if(b>=a && b>=c){
        return b;
    }
    else{
        return c;
    }
}
int main(){
    int x=11,y=11,z=7;
    printf("Maximum=%d",max(x,y,z));
    return 0;
}