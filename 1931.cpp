#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.second == b.second)
    {
        return a.first < b.first;
    }
    return a.second < b.second;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<pair<int, int>> time;
    int in, s, e, cnt = 0;
    cin >> in;
    for (int i = 0; i < in; i++)
    {
        cin >> s >> e;
        time.push_back(make_pair(s, e));
    }
    sort(time.begin(), time.end(), compare);

    for (int i = 0; i < in; i++)
    {
        if (i == 0)
        {
            cnt++;
            e = time[i].second;
        }
        else if (time[i].first >= e)
        {
            cnt++;
            e = time[i].second;
        }
        else
        {
        }
    }
    cout << cnt << "\n";
}