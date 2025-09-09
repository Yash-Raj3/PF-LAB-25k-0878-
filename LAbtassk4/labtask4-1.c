#include<stdio.h>
int main(){
int BillAmount;
printf("Enter the bill amount :");
scanf("%d",&BillAmount);
if(BillAmount>5000){
    printf("Your final bill is :%d\n", BillAmount-(10*BillAmount)/100);
}
else{
    printf("Your bill is :%d\n",BillAmount);
}
return 0;
}