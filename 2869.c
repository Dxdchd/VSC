#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, v, cnt = 0;
    scanf("%d %d %d", &a, &b, &v);
    if (a >= v)
    {
        printf("%d", ++cnt);
    }
    else
    {
        double k = (double)(v - a) / (a - b);
        double t = ceil(k);
        printf("%d", (int)t + 1);
    }
}