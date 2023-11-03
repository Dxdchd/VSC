// 시벌 포기 못하겠음
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cnt, sum = 0, check = 0, x, y, chkx = -1, chky = -1;
    scanf("%d", &cnt);
    int *arrxy[2];
    int *arrchk[2];
    arrxy[0] = (int *)calloc(cnt, sizeof(int));
    arrxy[1] = (int *)calloc(cnt, sizeof(int));
    arrchk[0] = (int *)calloc(cnt, sizeof(int));
    arrchk[1] = (int *)calloc(cnt, sizeof(int));
    for (int i = 0; i < cnt; i++)
    {
        scanf("%d %d", &x, &y);
        arrxy[i][0] = x;
        arrxy[i][1] = y;
        sum += 100;
        for (int j = 0; j < i; j++)
        {
            for (int k = 0; k < j; k++)
            {
                if (arrxy[j][0] == arrchk[k][0] && arrxy[j][1] == arrchk[k][1])
                {
                    check = 1;
                    break;
                }
            }
            if (check == 1)
            {
                check = 0;
                continue;
            }
            if (x >= arrxy[j][0] + 10 || x + 10 <= arrxy[j][0])
            {
                continue;
            }
            else
            {
                if ((x + 10 >= arrxy[j][0]) && (x <= arrxy[j][0]))
                {
                    if ((y + 10 >= arrxy[j][1]) && (y <= arrxy[j][1]))
                    {
                        sum -= ((y + 10 - arrxy[j][1]) * (x + 10 - arrxy[j][0]));
                    }
                    else if ((y >= arrxy[j][1]) && (y <= arrxy[j][1]) + 10)
                    {
                        sum -= ((arrxy[j][1] + 10 - y) * (x + 10 - arrxy[j][0]));
                    }
                    else
                    {
                    }
                    arrchk[j][0] = arrxy[j][0];
                    arrchk[j][1] = arrxy[j][1];
                }
                else if ((x >= arrxy[j][0]) && (x <= arrxy[j][0] + 10))
                {
                    if ((y + 10 >= arrxy[j][1]) && (y <= arrxy[j][1]))
                    {
                        sum -= ((y + 10 - arrxy[j][1]) * (arrxy[j][0] + 10 - x));
                    }
                    else if ((y >= arrxy[j][1]) && (y <= arrxy[j][1]) + 10)
                    {
                        sum -= ((arrxy[j][1] + 10 - y) * (arrxy[j][0] + 10 - x));
                    }
                    else
                    {
                    }
                    arrchk[j][0] = arrxy[j][0];
                    arrchk[j][1] = arrxy[j][1];
                }
            }
        }
    }
    printf("%d", sum);
}