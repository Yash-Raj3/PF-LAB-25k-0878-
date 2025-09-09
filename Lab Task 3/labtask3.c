#include<stdio.h>
#include<string.h>
int main(){
    char Nationality[30];
    int Age;
    printf("Enter your Nationality :");
    scanf("%s",Nationality);
    
    if (strcmp(Nationality,"Pakistani")==0){
        printf("Enter your Age:");
    scanf("%d",&Age);
        if(Age>=18){
            printf("YOu are eligible");
        }else{
            printf("You are not eligible");
        }
    }else{
        printf("You are not eligible");
    }
    return 0;
}