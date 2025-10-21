#include<stdio.h>
int main(){
int s1[50],s2[50],sNew[50],i,j,new=0;
int n1,n2,found;
printf("How Many Numbers Do You Want In Each Set(1 and 2):");
scanf("%d %d",&n1,&n2);
for(i=0;i<n1;i++){
    printf("Enter Number %d of Set 1 :",i+1);
    scanf("%d",&s1[i]);
}
for(i=0;i<n2;i++){
    printf("Enter Number %d of Set 2:",i+1);
    scanf("%d",&s2[i]);
}
for(i=0;i<n1;i++){
    sNew[new]=s1[i];
    new++;
}
for(i=0;i<n2;i++){
    found=0;
    for(j=0;j<new;j++){
        if(s2[i]==sNew[j]){
            found=1;
            break;
        }
    }
    if(found==0){
        sNew[new]=s2[i];
        new++;
    }
}
printf("---Union of Two sets---\n");
for(i=0;i<new;i++){
    printf("%d\t",sNew[i]);
}
return 0;
}