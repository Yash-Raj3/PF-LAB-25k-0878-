#include<stdio.h>
# include<string.h>
int main(){
    char Email[50];
    char Pass[30];
    printf("Enter your Email:");
    scanf("%s",Email);
    if(strcmp(Email,"admin@gmail.com")==0){
        printf("Enter you PAss:");
        scanf("%s",&Pass);
        if(strcmp(Pass,"admin123")==0){
            printf("Login successful");

        }else{
            printf("Access Denied");
        }
    }else{
        printf("Access denied");
    }
    return 0;

}