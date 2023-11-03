#include <stdio.h>

int main()
{
    int arr[2];
    int a, b, c;
    scanf("%d %d", &arr[0], &arr[1]);
    scanf("%d", &a);
    b = a / 60;
    c = a % 60;
    arr[1] += c;
    if (arr[1] >= 60)
    {
        arr[0] += 1;
        arr[1] -= 60;
    }
    arr[0] += b;
    if (arr[0] >= 24)
    {
        arr[0] -= 24;
    }
    printf("%d %d", arr[0], arr[1]);
}