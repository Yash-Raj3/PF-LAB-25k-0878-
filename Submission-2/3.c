#include<stdio.h>
int RemoveSorted(int *arr1D,int row){
   int j=1;
for(int i=1;i<row;i++){
    if(arr1D[i]!=arr1D[i-1]){
        arr1D[j++]=arr1D[i];
    }
}
return j;
}
int main(){
int arr1D[20];
int n;
printf("Enter Number of elements in array: ");
scanf("%d",&n);
for(int i=0;i<n;i++){
    printf("Enter element %d: ",i+1);
    scanf("%d",&arr1D[i]);
}
int Unique = RemoveSorted(arr1D,n);
for(int i=0;i<Unique;i++){
    printf("%d ",arr1D[i]);
}
printf("\nThere are %d Unique Numbers!",Unique);
}