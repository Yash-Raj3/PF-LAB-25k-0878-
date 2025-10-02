#include<stdio.h>
int main(){
    int n,T1=0,T2=1,nextTerm;//In fibonacci series starts with 0.
    printf("Enter Number Of terms You want:  ");
    scanf("%d",&n);
    printf("---Fabonacci Series Upto %d Terms---\n",n);
    for(int i = 0;i <= n;i++){
        if (i<=1){
            nextTerm = i;
        }else{
            nextTerm = T1 +T2;
            T1 = T2;
            T2 = nextTerm;
        }
        printf("%d \n",nextTerm);
        
    }
}