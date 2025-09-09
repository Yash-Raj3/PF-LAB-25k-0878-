#include<stdio.h>
int main(){
    int Age;
    printf("Enter your age :");
    scanf("%d",&Age);
    if(Age<12){
        printf("Price of ticket is 200");
}
    else if(Age>=12 && Age<=18){
              printf("Price of ticket is 300");
        }
    else if(Age>18 && Age<=60){
          printf("Price of ticket is 500");
    }
    else{
          printf("Price of ticket is 250");
    }    
    return 0;
}