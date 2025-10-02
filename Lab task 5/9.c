#include<stdio.h>
int  main (){
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    if ((n & 1)==0){
        printf("It is Even Number!!");
    }else{
        printf("It is a Odd Number!!");
    }
    return 0;
}