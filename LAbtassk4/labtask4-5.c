#include<stdio.h>
int main(){
    char Userchar;
    int a,b;
    printf("Enter two numbers:");
    scanf("%d,%d",&a,&b);
    printf("Enter the opertion type (+,-,*,/):");
    scanf(" %c",&Userchar);
    switch(Userchar){
        case '+':printf("Sum is %d",a+b);
        break;
        case '-':printf("Subration is %d",a-b);
        break;
        case '*':printf("Multiplication is %d",a*b);
        break;
        case '/':printf("Division is %d ",a/b);
        break;
        default : printf("Wrong operation");
    }
return 0;

    }
