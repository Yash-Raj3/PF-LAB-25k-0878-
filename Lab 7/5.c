#include<stdio.h>
int main(){
int n[12],i,numRemove,new=0;
for(i=0;i<12;i++){
    printf("Enter Number %d::",i+1);
    scanf("%d",&n[i]);
}
printf("Enter Number to remove:");
scanf("%d",&numRemove);
for(i=0;i<12;i++){
    if(n[i]!=numRemove){
      n[new]=n[i];
      new++;
    }
}
printf("--After Removing That digit--\n");
for(i=0;i<new;i++){
    printf("%d\t",n[i]);
}

return 0;
}