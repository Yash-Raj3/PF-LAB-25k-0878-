#include<stdio.h>
#include<string.h>
int main(){
char Gird[2][10]={
    {'Y','E','L','L','O','W','B','L','U','E'},
    {'G','R','E','E','N','W','O','O','D','S'}
};
char target_word[10];
printf("Enter The Target Word:");
scanf("%[^\n]",target_word);

if(strstr(target_word,Gird[0])!='\0'){
printf("%s is Found in Gird 1\n",target_word);
}
char target_letter;
int count=0;
printf("Enter The letter :");
scanf(" %c",&target_letter);
for(int i=0;i<2;i++){
    for(int j=0;j<10;j++){
        if(target_letter == Gird[i][j]){
            count++;
        }
    }
}
printf("The Letter is Repeated %d times in Gird !\n",count);
char col[2];
int j=0;
for(int i=0;i<2;i++){
    col[j++] = Gird[i][0];
}
for(int i =0 ;i<2;i++){
    printf("Element %d of Column is %c\n",i+1,col[i]);
}
}