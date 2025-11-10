#include<stdio.h>
#include<string.h>
void reverse(int *arr1D,int row){
   for(int i = row-1;i>=0;i--){
    printf("%d ",*(arr1D+i));
   }
   printf("\n");
}
void Display(int (*arr2D)[3],int row){
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d ",*(*(arr2D+i)+j));
    }
    printf("\n");
  }
}
void sum(int *arr1D,int row){
    int sum =0;
 for(int i=0;i<row;i++){
    sum += *(arr1D+i);
 }
 printf("\nThe Sum is %d",sum);
}
void max(int (*(arr2D))[3],int row){
    int highest = *(*(arr2D +0)+0);
for(int i =0;i<3;i++){
    for(int j=0;j<3;j++){
      if(*(*(arr2D+i)+j)>highest){
        highest = *(*(arr2D+i)+j);
      }
    }
}
printf("\nHighest Value is %d",highest);
}
int main(){
int arr1D[5];
int arr2D[3][3];
for(int i=0;i<5;i++){
    printf("Enter Element %d of First 1D Array:",i+1);
    scanf("%d",(arr1D+i));
}
for(int i=0;i<3;i++){
    for(int j=0; j<3;j++){
        printf("Enter Element of Row %d And Column %d of Array 2D:",i+1,j+1);
        scanf("%d",*(arr2D+i)+j);
    }
}
reverse(arr1D,5);
Display(arr2D,3);
sum(arr1D,5);
max(arr2D,3);
}