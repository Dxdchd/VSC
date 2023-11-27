#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    short max = 0;
    short cnt;
    cin >> cnt;
    short arr[cnt];
    double sum = 0;
    for (int i = 0; i < cnt; i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < cnt; i++)
    {
        sum += (float)arr[i] / max * 100;
    }
    cout << sum / cnt;
}