#include<stdio.h>
int main(){
    int Pass;
    printf("Enter your Pass(4 digits ) :");
    scanf("%d",&Pass);
    if (Pass==1234){
        printf("Access Granted");

    }else{
        printf("Access Denied");

    }
return 0;


}