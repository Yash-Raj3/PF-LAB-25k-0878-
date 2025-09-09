#include<stdio.h>
int main(){
int a=12,b=9;
printf("Before swapping a=%d and b=%d \n",a,b);
int x=a;
a=b;
b=x;
printf("After swapping A=%d and B=%d",a,b);
return 0;
}