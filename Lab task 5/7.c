#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter any three Numbers : ");//Not all same
    scanf("%d,%d,%d",&a,&b,&c);
 (a<b && a<c)?printf("A is smallest"):(b<c)?printf("B is smallest"):printf("C is samllest");
 return 0;
}