#include<stdio.h>
int main(){
    int n,factorial=1;
    printf("Enter A Number: ");
    scanf("%d",&n);
	for(int i =1;i<=n;i++){
		factorial *=i;
	}
    printf("%d",factorial);

	return 0;
}
