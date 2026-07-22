#include<stdio.h>

struct employee{
    int salary;
    float score;
};

int main(){
    struct employee e;
    struct employee* ptr=&e;
    ptr->salary=5035;//(*ptr).salary=5035;
    ptr->score=45.3;
    printf("The value of salary is %d and the value of score is %f\n",ptr->salary,ptr->score);    
    return 0;
}