#include<stdio.h>
#include<string.h>
int main(){
char Greetings[50]="Hello ";
char first_name[50];
char last_name[50];
char nick_name[50];
char nick_lastName[50];
printf("Enter Your First Name :");
scanf(" %[^\n]",first_name);
printf("Enter Your Last Name :");
scanf(" %[^\n]",last_name);
strcat(Greetings,first_name);
strcat(Greetings," ");
strcat(Greetings,last_name);
strcat(Greetings,"!");
if(strcmpi(last_name,"Ali")==0){
    strcat(Greetings,"(VIP)");
}
printf("%s\n",Greetings);
strncpy(nick_name,first_name,2);
nick_name[2]='\0';
int last_len = strlen(last_name);
if(last_len >= 3){
    strncat(nick_name,last_name+(last_len-3),3);
}else{
    strcat(nick_name,last_name);
}
printf("Nick Name is %s",nick_name);

}