#include <stdio.h>

int main()
{
    int f, fsub, c, n;
    scanf("%d %d", &f, &fsub);
    scanf("%d", &c);
    scanf("%d", &n);
    if (f >= c)
    {
        if (f == c && fsub <= 0)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    else
    {
        double gyo = (double)(fsub) / (c - f);
        if ((double)n >= gyo)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
}