#include<stdio.h>
int main(){
int Age;
int Salary;
printf("Enter you Age :");
scanf("%d",&Age);
printf("Enter your Salary :");
scanf("%d",&Salary);
if(Age>=25){
    if(Salary>=40000){
        printf("Loan Approved");
    }else{
        printf("Loan Rejected");
    }
}else {
    printf("Loan Rejected");
}
return 0;
}