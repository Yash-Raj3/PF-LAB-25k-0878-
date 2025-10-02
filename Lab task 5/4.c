#include<stdio.h>
int main(){
	int Continent,Country;
     printf("Select A Continent (1.Asia  2.Europe):");
     scanf("%d",&Continent);
     switch(Continent){
     	case 1:printf("Select A Country  (1.India  2.Pakistan):");scanf("%d",&Country);
     	switch(Country){
     		case 1 : printf("India");break;
     		case 2: printf("Pakistan");break;}
     		break;
     	case 2: printf("Select A Country (1.France 2.Germany):");scanf("%d",&Country);
		 switch(Country){
		 	case 1: printf("France");break;
		 	case 2: printf("Germany");break;}
		 	break;
		default : printf("Wrong Choice"); 	
		 }
		 return 0;
	
	}