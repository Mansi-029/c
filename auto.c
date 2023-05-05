#include <stdio.h>
int main( )
{
  auto int j;
  {
    {
    j = 2;
    printf("\t %d ",j);
    }{
    j = 3;
    printf ( "\t %d ",j);
    }
  }
  printf( "\t %d\n", j);
  }