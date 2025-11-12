#include<stdio.h>
void moveZeros(int *arr1D,int row){
  int   j=0;
for(int i=0;i<row;i++){
    if(arr1D[i]!=0){
        arr1D[j++]=arr1D[i];
    }
   
}
while (j<row){
    arr1D[j++]=0;
}
}
int main(){
int arr1D[20],n;
printf("Number Of elements in Array: ");\
scanf("%d",&n);
for(int i=0; i<n;i++){
    printf("Enter Element %d: ",i+1);
    scanf("%d",&arr1D[i]);
}
moveZeros(arr1D,n);
for(int i=0;i<n;i++){
    printf("%d ",arr1D[i]);
}
}