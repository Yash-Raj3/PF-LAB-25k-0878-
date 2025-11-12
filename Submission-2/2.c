#include<stdio.h>
#include<string.h>
void Reverse(char *arr1D,int row){
    for(int i=0;i<row/2;i++){
      char temp = arr1D[i];
      arr1D[i]=arr1D[row-i-1];
      arr1D[row-i-1] = temp;

    }
}
int main(){
	char arr1D[20];

    printf("Enter a string: ");
    scanf(" %[^\n]", arr1D);
	Reverse(arr1D,strlen(arr1D));
	printf("%s",arr1D);
}