#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000000] = {
        0,
    };
    int munza[26] = {
        0,
    },
        max = -1, rest = 0, final = 0;
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 97)
        {
            str[i] -= 97;
        }
        else
        {
            str[i] -= 65;
        }
        munza[str[i]]++;
    }
    for (int j = 0; j < 26; j++)
    {
        if (munza[j] > max)
        {
            max = munza[j];
            final = j;
            rest = 0;
        }
        else if (munza[j] == max)
        {
            max = munza[j];
            rest = 1;
        }
    }
    if (rest == 1)
        printf("?");
    else
        printf("%c", final += 65);
}