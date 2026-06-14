#include<stdio.h>

int main(){
    int i,j;
    for(i=0;i<=5;i++){
        if(i==3){
            break;
        }
        printf("%d\n",i);
    }
    for(j=0;j<=8;j++){
        if(j==6){
            continue;
        }
        printf("%d\n",j);
    }
    return 0;
}