#include<stdio.h>
int main(){
int n[10],i,profit=0,loss=0;
for(i=0;i<10;i++){
printf("Enter Profit/loss no %d:",i+1);
scanf("%d",&n[i]);
}
for(i=0;i<10;i++){
    if(n[i]>0){
     profit += n[i];
    }else if(n[i]<0){
    loss += n[i];
    }
}
printf("Your Total Profit is %d\n",profit);
if(loss<0){
    printf("Your Total loss is %d",loss);
}
return 0;

}