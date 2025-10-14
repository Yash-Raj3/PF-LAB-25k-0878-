#include<stdio.h>
int main(){
int n[6],i,temp;
for (i=0;i<6;i++){
    printf("Enter the number %d:",i+1);
    scanf("%d",&n[i]);
}
 temp = n[5];
for(i=5;i>=0;i--){
   
    n[i]=n[i-1];
    
}
n[0]=temp;
for(i=0;i<6;i++){
    printf("%d\t",n[i]);
}
return 0;


}