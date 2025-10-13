#include<stdio.h>
int main(){
int Idcheck,F=0;
int id[12],i,f=0;
printf("Enter Your Ids:");
for(i=0;i<12;i++){
	scanf("%d",&id[i]);
}
printf("Enter Id to  Find:");
scanf("%d",&Idcheck);
for (i=0;i<12;i++){
	if(id[i] == Idcheck){
		f=1;
		F=i;
	}
}
if(f){
	printf("Your Id is Found At the Number %d",F);
}else {
	printf("Your Id is not in the record!");
}

return  0;
}
