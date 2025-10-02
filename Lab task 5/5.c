#include<stdio.h>
int main(){
    int Number;
    printf("Enter A Number:");
    scanf("%d",&Number);
    if(Number % 2 == 0){
        if(Number%3==0){
            printf("The Number is Divisble by Both 2 and 3");
        }else{
            printf("The Number is only divisble by 2");
        }
    }else{
        printf("The Number is Not divisble by 2");
    }
    return 0;
}