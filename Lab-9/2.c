#include<stdio.h>
float CalculateInterest(float Pamount,float rate,float time){ // Task 1
	float interest;
	interest=(Pamount*rate*time)/100;
	return interest;
}
float UpdateBalance(float balance,float interest){
	float updated;
	updated= balance+interest;
	return updated;
}
int main(){
	float balance;
	printf("Enter Your Current Balance: ");
	scanf("%f",&balance);
		float Pamount,rate,time;
		float interest;
 	 interest= CalculateInterest(2500,5,2);
		printf(" Interest = %.2f\n",interest);
	printf("Updated Balance = %.2f",UpdateBalance(balance,interest));

	return 0;
}
