#include<stdio.h>
static int y = 4;
int main()
{
    static int z = 7;
    static int x = 6;
    printf(" %d %d\n",z,x);
    z = 2;
    printf("%d %d\n",z,y);
    return 0;
}