#include<stdio.h>

int main(){
    //WAP to determine to check whether a character entered by the user is lowercase or not
    char ch='a';
    printf("the character is %c\n",ch);
    printf("the character is %d\n",ch);//97 to 122(lowercase values (ASCII))
    if(ch>=97 && ch<=122){
        printf("the char is in lowercase\n");
    }
    else{
        printf("the char is in uppercase\n");
    }
    return 0;
}