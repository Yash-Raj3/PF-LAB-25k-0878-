#include<stdio.h>
int main(){
char input[50];
int digits[50],digit=0,i,sum=0;
printf("Enter Input:");
scanf("%[^\n]",input);
for(i=0;input[i] != '\0';i++){
  if (input[i] >= '0' && input[i]<='9'){
    digits[digit] = input[i] - '0';
   
    sum += digits[digit];
     digit++;
  }
}
if(digit>0){
    printf("---Digits Are---\n");
for(i=0;i<digit;i++){
printf("%d\t",digits[i]);
}
}else{
    printf("There are no digits in your text!");
}
if(sum>0){
    printf("\nSum of digits is %d",sum);
}
return 0;
}