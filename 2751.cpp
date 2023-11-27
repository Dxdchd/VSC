#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> v;
    int cnt, num;
    cin >> cnt;
    for (int i = 0; i < cnt; i++)
    {
        cin >> num;
        v.insert(v.begin() + i, num);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < cnt; i++)
    {
        cout << v[i] << "\n";
    }
}