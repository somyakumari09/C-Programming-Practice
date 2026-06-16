#include<stdio.h>

float convert(float celsius);

float convert(float celsius){
    return (9.0/5.0)*celsius +32;
}

int main(){
    float celsius=45;
    printf("celsius to fahrenheit for %.2f",convert(celsius));
    return 0;
}