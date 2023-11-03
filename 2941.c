#include <stdio.h>

int main()
{
    char arr[101] = {
        0};
    int cnt = 0;
    scanf("%s", arr);
    for (int i = 0; i < 101; i++)
    {
        switch (arr[i])
        {
        case 'c':
            if (arr[i + 1] == '=' || arr[i + 1] == '-')
            {
                cnt++;
                i++;
            }
            else
            {
                cnt++;
            }
            break;
        case 'd':
            if (arr[i + 1] == 'z')
            {
                if (arr[i + 2] == '=')
                {
                    cnt++;
                    i += 2;
                }
                else
                {
                    cnt++;
                }
            }
            else if (arr[i + 1] == '-')
            {
                cnt++;
                i++;
            }
            else
            {
                cnt++;
            }
            break;
        case 'l':
            if (arr[i + 1] == 'j')
            {
                cnt++;
                i++;
            }
            else
            {
                cnt++;
            }
            break;
        case 'n':
            if (arr[i + 1] == 'j')
            {
                cnt++;
                i++;
            }
            else
            {
                cnt++;
            }
            break;
        case 's':
            if (arr[i + 1] == '=')
            {
                cnt++;
                i++;
            }
            else
            {
                cnt++;
            }
            break;
        case 'z':
            if (arr[i + 1] == '=')
            {
                cnt++;
                i++;
            }
            else
            {
                cnt++;
            }
            break;
        default:
            cnt++;
            break;
        }
        if (arr[i + 1] == '\0')
        {
            break;
        }
    }
    printf("%d", cnt);
}