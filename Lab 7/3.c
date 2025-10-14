#include<stdio.h>
int main(){
int Age[8],i,youngest=0;
for(i=0;i<8;i++){
printf("Enter the age of Participant no %d:",i+1);
scanf("%d",&Age[i]);
}
for(i=0;i<8;i++){
  if(Age[i]<Age[youngest]){
    youngest = i;
  }
}
printf("The Youngest Participant is No %d with Age of %d",youngest+1,Age[youngest]);
return 0;
}




