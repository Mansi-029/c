#include <stdio.h>

int main() {
	char ch;
	printf("Enter any character: \n");
	scanf("%c",&ch);
	
	if(ch >= 'A' && ch <= 'Z')
	    printf("Upper case\n");
	else if(ch >= 'a' && ch <= 'z')
	    printf("Lower case\n");
	else
	    printf("Specal character\n");
	return 0;
}