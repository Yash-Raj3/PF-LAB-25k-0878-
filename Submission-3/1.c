#include<stdio.h>
#include<string.h>
int vowel(char c){
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
	return 0;
	}
	return 1;
}
void reverse(char str[]){
	int left =0;
	int right = strlen(str);
	while(left < right){
		while(left < right && vowel(str[left])){
		left++;  
}
	while(left < right && vowel(str[right])){
		right--;  
}
if(left<right){
	char temp =  str[left];
	str[left] = str[right];
	str[right]=temp;
}
right--;
left++;
}
}
int main(){
	char str[100];
	printf("Enter a String: ");
	scanf("%[^\n]",str);
	reverse(str);
	printf("%s",str);
	return 0;
}

