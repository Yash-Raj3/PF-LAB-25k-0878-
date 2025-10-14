#include<stdio.h>
int  main(){
int n[10],i,a=1,d=1;
for (i=0;i<10;i++){
    printf("Enter Number %d:",i+1);
    scanf("%d",&n[i]);
}
for (i=0;i<9;i++){
    if(n[i+1]<n[i]){
        a=0;
    } if(n[i+1]>n[i]){
        d=0;
    }
}
if(a==1){
    printf("Array is sorted in Ascending Order");

}else if(d==1){
    printf("Array is sorted in Descending Order");
}else{
    printf("Array is not sorted");
}
return 0;

}