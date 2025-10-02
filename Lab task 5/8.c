#include<stdio.h>
int main(){
    int N;
    printf("Enter a Number:");
    scanf("%d",&N);
    N = N^(1<<2);
    printf("%d",N);
    return 0;
}