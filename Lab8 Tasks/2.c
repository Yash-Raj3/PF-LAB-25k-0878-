#include<stdio.h>
int main(){
int a[50],b[50],new[50];
int i,n1,n2,j,neew=0;
printf("How many elements do want in 1st and 2nd Set? ");
scanf("%d %d",&n1,&n2);
for(i=0;i<n1;i++){
    printf("Enter number %d Of 1st Set:",i+1);
    scanf(" %d",&a[i]);
}
for(i=0;i<n2;i++){
    printf("Enter number %d Of 2nd Set:",i+1);
    scanf(" %d",&b[i]);
}

for(i=0;i<n1;i++){
   for(j=0;j<n2;j++){
    if(a[i]==b[j]){
        new[neew]=a[i];
        neew++;
        break;
    }
   }
}

printf("--Intersection--\n");
for(i=0;i<neew;i++){
printf(" %d\t",new[i]);
}
return 0;

}

