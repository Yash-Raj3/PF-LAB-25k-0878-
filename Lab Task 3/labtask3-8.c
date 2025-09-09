#include<stdio.h>
int main(){
int marks1,marks2,marks3;
printf("Enter marks ok three subjects(1-100):");
scanf("%d,%d,%d",&marks1,&marks2,&marks3);
// let's suppose total marks are 300
printf("Percentage is :%d",((marks1+marks2+marks3)*100)/300);
return 0;




}