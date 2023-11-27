#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int cap, weight;
    int value, objweight;
    cin >> cap >> weight;
    int **arr = new int *[cap + 1];
    for (int i = 0; i < cap + 1; i++)
    {
        arr[i] = new int[weight + 1];
        arr[i][0] = 0;
    }
    for (int i = 0; i < weight + 1; i++)
    {
        arr[0][i] = 0;
    }
    for (int i = 1; i < cap + 1; i++)
    {
        cin >> objweight >> value;
        for (int j = 1; j < weight + 1; j++)
        {
            if (objweight > j)
            {
                arr[i][j] = arr[i - 1][j];
            }
            else
            {
                arr[i][j] = max(arr[i - 1][j], arr[i - 1][j - objweight] + value);
            }
        }
    }
    cout << arr[cap][weight] << "\n";
    // for (int i = 0; i < cap + 1; i++)
    // {
    //     for (int j = 0; j < weight + 1; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
}