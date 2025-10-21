#include<stdio.h>
int main(){
char a[50],b[50];
int i,countS=0,n1,n2,j;
printf("How many elements do want in 1st and 2nd Set? ");
scanf("%d %d",&n1,&n2);
for(i=0;i<n1;i++){
    printf("Enter number %d Of 1st Set:",i+1);
    scanf(" %c",&a[i]);
}
for(i=0;i<n2;i++){
    printf("Enter number %d Of 2nd Set:",i+1);
    scanf(" %c",&b[i]);
}

for(i=0;i<n1;i++){
   for(j=0;j<n2;j++){
    if(a[i]==b[j]){
        countS++;
        break;
    }
   }
}
printf("The common elements are %d",countS);

return 0;

}

