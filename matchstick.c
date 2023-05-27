#include<stdio.h>
int main()
{
    int m = 21, u, c;
    while (m >= 1)
    {
        printf("Total match sticks:%d\n",m);
        printf("Pick up the match sticks (1 to 4):\n");
        scanf("%d",&u);
        if(u>4)
        {
            printf("Invalid entry");
            break;
        }
        c = 5 - u;
        printf("Computer picks up the %d match sticks.\n",c);
        m = m - u - c;
        if(m == 1)
        {
            printf("You have been lost the game.");
            break;
        }
    }
    return 0;
}