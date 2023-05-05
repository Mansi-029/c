#include<stdio.h>
void func();
extern int l = 0;
int main()
{
    func();
    func();
    func();
    return 0;
}
void func()
{
    auto int i = 0;
    register int j = 0;
    static int k = 0;
    i++; j++; k++; l++;
    printf("%d %d %d %d\n",i,j,k,l);
}