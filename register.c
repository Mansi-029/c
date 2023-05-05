#include <stdio.h> 
int main() 
{
    register int  a = 3;
    //printf("%d",&a);
    {
    register float b = 4.7;
    int c = 2;
    printf("%p ",&c);
    printf("%f ",a+b);}
}
