#include<stdio.h>
int main(){
    int n;
    printf("Enter A Number :");
    scanf("%d",&n);

    printf("Right Shift of %d is %d\n ",n,n>>2);//Rightshift to 2 bits 
    printf("Left Shift of %d is %d",n,n<<2);//Left shift to 2 Bits.
    
        return 0;
}