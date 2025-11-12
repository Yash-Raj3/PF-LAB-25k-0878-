#include<stdio.h>
int main(){
int n;
int arr1d[100];
printf("How many Numbers are in Array :");
scanf("%d",&n);
for(int i=0;i<n;i++){
    printf("Enter Number %d: ",i+1);
    scanf("%d",&arr1d[i]);
}
for(int i=0;i<n;i++){
    if(arr1d[i]%2==0){
        arr1d[i]=0;
    }else{
        arr1d[i]=1;
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
        if(arr1d[j]>arr1d[j+1]){
            int temp = arr1d[j];
            arr1d[j]=arr1d[j+1];
            arr1d[j+1]=temp;
        }
    }
}
for(int i=0;i<n;i++){
   printf("%d\t",arr1d[i]);
}

}