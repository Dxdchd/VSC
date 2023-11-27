#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string num;
    cin >> num;
    char ans[num.size() + 1] = {0};
    ans[0] = num[0];
    for (int i = 1; i < num.size(); i++)
    {
        if (ans[i - 1] < num[i])
        {
            int j = i - 1;
            while (j >= 0)
            {
                if (ans[j] > num[i])
                    break;
                j--;
            }
            if (j == -1)
            {
                int k = i;
                while (k > 0)
                {
                    ans[k] = ans[k - 1];
                    k--;
                }
                ans[0] = num[i];
            }
            else
            {
                int k = i;
                while (k > j + 1)
                {
                    ans[k] = ans[k - 1];
                    k--;
                }
                ans[k] = num[i];
            }
        }
        else
        {
            ans[i] = num[i];
        }
    }
    string n(ans);
    cout << n;
}