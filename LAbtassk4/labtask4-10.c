#include<stdio.h>
int main(){
    int Balance;
    int Withdrawal;

    printf("Enter your Balance:");
    scanf("%d",&Balance);
    printf("Enter Withdrawal Amount: ");
    scanf("%d",&Withdrawal);
    if (Balance>Withdrawal){
        if(Withdrawal % 500 == 0){
            printf("Withdrawal successful");
        }else{
            printf("Incorrect Amount");
        }
    }else{
        printf("Insufficient Balance");

    }
    return 0;
}