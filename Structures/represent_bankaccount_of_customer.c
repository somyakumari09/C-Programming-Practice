#include<stdio.h>
#include<string.h>
struct bankacc{
    int accno;
    char name[34];
    char ifsc[12];
    float balance;
};
int main(){
    struct bankacc acc;
    acc.accno=12345457;
    strcpy(acc.name,"Somya Kumari");
    strcpy(acc.ifsc,"SBIN000123");
    acc.balance=2700.00;
    printf("Account Number: %d\n", acc.accno);
    printf("Account Holder: %s\n", acc.name);
    printf("IFSC Code: %s\n", acc.ifsc);
    printf("Balance: %.2f\n", acc.balance);

    return 0;
}