#include<stdio.h>
float calculateTotal(int n, float price[50]){
	int i; 
	float sum=0;
	for(i=0;i<n;i++){
		sum += price[i];
		
	}
	return sum;
	}
	float applyDiscount(float totalD){
		if(totalD>5000){
			totalD = totalD-0.10*totalD;
		}
		return totalD;
	}
	void printBill(int n,float Finalbill){
		printf("=====BILL=====\n");
		printf("You Have Purchased %d item\n",n);
		printf("Your total Bill = %.2f",Finalbill);
		
	}
	int main(){
		int n,i;
		float price[50];
		float total;
		printf("How many items, you have purchased?:");
		scanf("%d",&n);
		for(i=0;i<n;i++){
			printf("Enter Price of item %d:",i+1);
			scanf("%f",&price[i]);
		}
		total= calculateTotal(n,price);
		if(total>5000){
			total = applyDiscount(total);
		}
	printBill(n,total);
		
		
		
		
	}
	

