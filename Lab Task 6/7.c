#include<stdio.h>
int main(){
    int Number,reversedNumber=0,Original;
    printf("Enter A number :");
    scanf("%d",&Number);
    Original=Number;
    while (Number !=0 ){
    int Remainder = Number%10;
    reversedNumber = reversedNumber*10 + Remainder;
    Number = Number/10;
    }
    if (Original == reversedNumber){
        printf("The Number is Palindrome!!!!!");
    }else{
        printf("The Number is Not Palindrome__");
    }
    return 0;
}
        

    
    
    
