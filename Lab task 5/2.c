#include<stdio.h>
int main(){
	int age ;
	char gender;
	printf("Enter Your Age :");
	scanf("%d",&age);
	printf("Enter Your Gender(M/F):");
	scanf(" %c",&gender);
	if(age >= 18 && gender=='M'){
		printf("Adult Male");
		}else if(age >= 18 && gender=='F'){
			printf("Adult female");
		}else{
			printf("Minor");
		}
	
	return 0;
}
