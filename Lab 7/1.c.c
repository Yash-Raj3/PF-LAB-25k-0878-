#include<stdio.h>
int main(){
float marks[10];
int i;
printf("Enter 10 students marks:");
for(i=0;i<10;i++){
	scanf("%f",&marks[i]);
}
float sum =0;
for(i=0;i<10;i++){
	sum += marks[i];
}
printf("Average of 10 students is %f",sum/10);
return 0;
}
