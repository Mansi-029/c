#include<stdio.h>
int main()
{
    int n, count = 1, rem, sum;
    while (count <= 500)
    {
        n = count;
        sum = 0;
        while (n)
        {
            rem = n % 10;
            sum = sum + (rem * rem * rem);
            n = n / 10;
        }
        if (count == sum)
            printf("%d is a armstrong number\n",count);
        count++;
    }
    return 0;
}