#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k, input, dap = 0, imsi;

    cin >> n >> k;

    vector<int> coin;

    for (int i = 0; i < n; i++)
    {
        cin >> input;
        coin.push_back(input);
    }
    for (int i = coin.size() - 1; i >= 0; i--)
    {
        imsi = k / coin[i];
        k -= imsi * coin[i];
        dap += imsi;
    }
    cout << dap << "\n";
}