#include<stdio.h>  
int main()  
{  
    int limit, num, p = 0, n = 0, z = 0;  
    printf("Enter 9999 for exit.\n");   
    while(1)  
    {  
        scanf("%d", &num);
        if(num == 9999)
            break;  
        if(num > 0)  
        {  
            p++;  
        }  
        else if(num < 0)  
        {  
            n++;  
        }  
        else
        {
            z++;
        } 
    }  
    printf("Positive Numbers: %d\n", p);  
    printf("Negative Numbers: %d\n", n);  
    printf("Number of zero: %d\n", z);  
    return 0;  
} 