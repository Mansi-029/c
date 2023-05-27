#include<stdio.h>  
#include<stdlib.h>  
  
int main()  
{  
    int s, b, r, n;
    printf("Enter %d numbers.\nEnter 9999 for exit.\n");  
    scanf("%d", &n);  
    s = b = n; 
    while(1)  
    {  
        scanf("%d", &n);  
        if(n > b)  
        {  
            b = n;  
        }  
        if(n < s)  
        {  
            s = n;  
        }  
    }  
    r = b - s;  
    printf("Small Number = %d\nBig Number = %d\n", s, b);  
    printf("Range is %d\n", abs(r));  
    return 0;  
}  