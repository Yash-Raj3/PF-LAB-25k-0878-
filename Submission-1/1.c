#include<stdio.h>
int main(){
int arr1D[10];
int sum[10]={0};
for(int i=0;i<10;i++){
    printf("Enter Element %d :",i+1);
    scanf("%d",&arr1D[i]);
}
sum[0]=arr1D[0];
for(int i =1;i<10;i++){
    for(int j=0;j<=i;j++){
        sum[i]+=arr1D[j];
    }
           
    }
for(int i=0;i<10;i++){
    printf("%d\t",sum[i]);
}
}