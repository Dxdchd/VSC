#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;

    cin >> n >> k;

    short arr[k + 1];
    int value[n];

    arr[0] = 0;

    for (int i = 1; i < k + 1; i++)
    {
        arr[i] = 32765;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> value[i];
    }
    for (int i = 1; i < k + 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (value[j] <= i && arr[i - value[j]] + 1 < arr[i])
            {
                arr[i] = arr[i - value[j]] + 1;
            }
        }
    }
    // for (int i = 0; i < k + 1; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    cout << arr[k];
}