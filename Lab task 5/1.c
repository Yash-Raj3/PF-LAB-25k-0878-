#include<stdio.h>
int main(){
	int Marks;
	printf("Enter Your Marks:");
	scanf("%d",&Marks);
	if(Marks>=50){
		if(Marks>=85){
			printf("Passed with distinction");
	}else{
		printf("Just Passed ");
	}
	}else{
		printf("Failed");
	}
		
	return 0;
	
	
	
}
