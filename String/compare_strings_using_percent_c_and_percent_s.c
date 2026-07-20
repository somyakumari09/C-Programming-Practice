#include<stdio.h>

int main(){
    char st[6];
    scanf("%s",st);
    printf("%s\n",st);

    for(int i=0;i<5;i++){
        scanf(" %c",&st[i]);
        fflush(stdin);//we use it because %c also reads the enter
    }
    st[5]='\0';
    printf("%s",st);
    return 0;
}