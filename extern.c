#include<stdio.h>
extern int i = 36;
int fun1()
{ 
    int i;
    i++;
    printf("%d\n",i);
    return 0;
}
int fun2()
{
    int i;
    i--;
    printf("%d\n",i);
    return 0;   
}
int main()
{
    int i = 35;
    fun2();
    fun1();
}