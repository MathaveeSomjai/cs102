#include <stdio.h>

int main()
{
    int a, b, c, x, y, z, sum1=0, sum2=0;
    scanf("%d %d %d", &a, &b, &c);
    scanf("%d %d %d", &x, &y, &z);

    if (a>x)
    {
        sum1 = sum1 + 1;
    }
    else
    {
        sum2 = sum2 + 1;
    }
    if (b > y)
    {
        sum1 = sum1 + 1;
    }
    else
    {
        sum2 = sum2 + 1;
    }
    if (c > z)
    {
        sum1 = sum1 + 1;
    }
    else
    {
        sum2 = sum2 + 1;
    }

    printf ("%d %d",sum1,sum2);

    return 0;
}