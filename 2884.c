#include <stdio.h>

int main()
{
    int arr[2];
    scanf("%d %d", &arr[0], &arr[1]);
    arr[1] -= 45;
    if (arr[1] < 0)
    {
        arr[0] -= 1;
        arr[1] += 60;
        if (arr[0] < 0)
        {
            arr[0] += 24;
        }
    }
    printf("%d %d", arr[0], arr[1]);
    return 0;
}