#include<stdio.h>
int main(){
    int n;
    printf("Enter A number :");
    scanf("%d",&n);
    printf("----Table of %d  %d Times----\n",n,n);
	for(int i =1;i<=n;i++){
		int Table = n*i;
		printf("%d\tX\t%d\t%d\n",n,i,Table);
	}
	return 0;
}
