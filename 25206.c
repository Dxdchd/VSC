#include <stdio.h>
#include <string.h>

int main()
{
    char name[51];
    double sc[20], sum;
    char hak[20][3] = {0};
    int cnt = 0, sumsc = 0;
    for (int i = 0; i < 20; i++)
    {
        scanf("%s %lf %s", name, &sc[i], hak[i]);

        if (strcmp(hak[i], "P") == 0)
        {
            continue;
        }
        if (strcmp(hak[i], "A+") == 0)
        {
            sum += (sc[i] * 4.5);
        }
        else if (strcmp(hak[i], "A0") == 0)
        {
            sum += (sc[i] * 4.0);
        }
        else if (strcmp(hak[i], "B+") == 0)
        {
            sum += (sc[i] * 3.5);
        }
        else if (strcmp(hak[i], "B0") == 0)
        {
            sum += (sc[i] * 3.0);
        }
        else if (strcmp(hak[i], "C+") == 0)
        {
            sum += (sc[i] * 2.5);
        }
        else if (strcmp(hak[i], "C0") == 0)
        {
            sum += (sc[i] * 2.0);
        }
        else if (strcmp(hak[i], "D+") == 0)
        {
            sum += (sc[i] * 1.5);
        }
        else if (strcmp(hak[i], "D0") == 0)
        {
            sum += sc[i];
        }
        else
        {
        }
        sumsc += sc[i];
    }
    printf("%lf", sum / sumsc);
}