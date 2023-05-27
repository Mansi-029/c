#include<stdio.h>
int main()
{
    int r=41, g=14, b=41;
    float c, m, y, k, w;
    //printf("Enter the value of Red, green, blue(0-255):\n");
    //scanf("%d%d%d",&r,&g,&b);
    w = ((r/255 > g/255) ? ((r/255 > b/255) ? r/255 : b/255) : ((g/255 > b/255) ? g/255 : b/255));
    c = ((w - r/255)/(w));
    m = ((w - g/255)/(w));
    y = ((w - b/255)/(w));
    b = (1 - w);
    printf("Cyan = %f\tMagenta = %f\tYellow = %f\tBlack =%f\n",c,m,y,b);
    return 0;
}