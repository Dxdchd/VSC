#include <stdio.h>
#include <string.h>

int main()
{
    char inarr[101] = {0};
    int len, check, input, cnt = 0;
    char test;
    scanf("%d", &input);
    for (int i = 0; i < input; i++)
    {
        check = 0;
        scanf("%s", inarr);
        len = strlen(inarr);
        int testarr[26] = {0};
        for (int j = 0; j < len; j++)
        {
            test = inarr[j];
            if (test == inarr[j + 1])
            {
                continue;
            }
            if (++testarr[(int)(inarr[j] - 97)] == 2)
            {
                check = 1;
                break;
            };
        }
        if (check == 0)
        {
            cnt++;
        }
    }
    printf("%d", cnt);
}