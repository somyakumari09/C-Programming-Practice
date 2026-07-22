#include<stdio.h>

typedef struct c{
    int real;
    int imaginary;
}Complex;

int main(){
    Complex c={2,3};
    printf("The value of complex number is %d + %di",c.real,c.imaginary);    
    return 0;
}