#include <stdio.h>
#include <string.h>

void makenewarr(char *word)
{
    int i = 0;
    if (word[0] == '[')
    {
        makenewarr(&word[1]);
    }
    else
    {
        while (word[i] != ',')
        {
        }
    }
}
int main()
{
    char input1[10000] = {0}, input2[100] = {0}, dab[10000] = {0};
    scanf("%[^\n]s", input1);
    int len1 = strlen(input1), len2 = strlen(input2);
    int opencnt = 0, inputcnt = 0, opencnt = 0, closecnt = 0, start = 0;
    char location[10][10] = {0};
    printf("%d %d\n", len1, len2);
    scanf("%s", input2);
    if (strcmp(input2, "arr") == 0)
    {
        printf("%s", input1);
    }
    else
    {
        for (int i = 0; i < len2; i++)
        {
            if (input2[i] == '[')
            {
                inputcnt++;
            }
            else if (input2[i] <= '9' && input2[i] >= '0')
            {
                int j = 0;
                while (input2[i + 1] != ']')
                {
                    location[inputcnt - 1][j] = input2[i];
                    j++;
                    i++;
                }
                location[inputcnt - 1][j] = input2[i];
            }
        }
        for (int k = 0; k < inputcnt; k++)
        {
            int lenarr = 0, chk = 1, cur = -1;
            for (int a = strlen(location[k]) - 1; a >= 0; a--)
            {
                lenarr += (chk * (location[k][a] - '0'));
                chk *= 10;
            }
            for (int b = start; b < len1; b++)
            {
                if (input1[b] == '[')
                {
                    opencnt++;
                }
                else if (input1[b] == ']')
                {
                    closecnt++;
                }
                else if (input1[b] == ',')
                {
                    if (opencnt - 1 == closecnt)
                    {
                        cur++;
                    }
                }
            }
        }
    }
}