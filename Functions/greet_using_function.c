#include<stdio.h>

//function prototype
void Goodmorning();
void Goodafternoon();
void Goodnight();
//function definition
void Goodmorning(){
    printf("good morning\n");
}
void Goodafternoon(){
    printf("good afternoon\n");
}
void Goodnight(){
    printf("good night\n");
}
int main(){
    Goodmorning();//function call
    Goodafternoon();
    Goodnight();

    return 0;
}