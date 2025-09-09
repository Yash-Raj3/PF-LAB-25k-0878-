#include<stdio.h>
#include<string.h>
int main(){
char Name[20];
int Age;
printf("Enter your Name: \n");
scanf("%s",Name);
printf("Enter your Age:");
scanf("%d",&Age);
printf("__INFO__\n");
printf("Name:\t%s\n",Name);
printf("Age:\t%d",Age);
return 0;


}