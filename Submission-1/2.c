#include<stdio.h>
int main(){
    int arr1D[100];
    int num1;
    int result[100];
    printf("How Many Elements Are in Array: ");
    scanf("%d",&num1);
    int num2=num1*2;
    for(int i=0;i<num2;i++){
        printf("Enter Element %d: ",i+1);
        scanf("%d",&arr1D[i]);
    }
    
    for(int i =0;i<num1;i++){
        result[2*i]= arr1D[i];
        result[2*i+1]=arr1D[i+num1];
    }
    for(int i =0;i<num2;i++){
       printf("%d ",result[i]);
    }
    
}