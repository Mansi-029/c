#include <stdio.h>
int main() 
{
	int n, o = 0, r = 0, p = 1;  
    printf("Enter a integer number\n");  
    scanf("%d", &n); 
    while(n)  
    {  
        r = n % 8;  
        o = o + r * p;  
        n = n / 8;  
        p = p * 10;  
    }  
    printf("The number is equivalent to octal number %d\n",o);
	return 0;
}