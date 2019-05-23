#include <stdio.h>

int main()
{
     int i;
     int div;
     div=2;
     for(i=1; i<=100; i ++)
{
     if (i % div == 0)
{
     printf("%d\n",i);
}
}
}
