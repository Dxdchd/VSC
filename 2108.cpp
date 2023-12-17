#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
// 일단 보류 시발
using namespace std;

bool cmp(pair<int, int> &a,
         pair<int, int> &b)
{
    return a.second < b.second;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    multiset<int> set1;
    map<int, int> m;
    double hap = 0;
    int f;
    int in;
    int min;
    cin >> f;
    for (int i = 0; i < f; i++)
    {
        cin >> in;
        hap += in;
        set1.insert(in);
        m[in] += 1;
    }
    int i = 0, j = 0;
    vector<pair<int, int>> vec(m.begin(), m.end());
    sort(vec.begin(), vec.end(), cmp);
    set<int> sss;

    cout << (int)(hap / f) << "\n";
    for (set<int>::iterator iter = set1.begin(); iter != set1.end(); iter++)
    {
        if (j + 1 == f / 2 + 1)
        {
            cout << *iter << "\n";
            break;
        }
    }
    if (vec[0].second == vec[1].second)
    {
        while (vec[i].second == vec[i + 1].second)
        {
            sss.insert(vec[i].first);
            i++;
        }
        sss.insert(vec[i].first);
        int k = 0;
        for (set<int>::iterator iter = sss.begin(); iter != sss.end(); iter++)
        {
            if (k == 1)
            {
                cout << *iter << "\n";
                break;
            }
            k++;
        }
    }
    else
    {
        cout << vec[0].first << "else\n";
    }
    cout << *set1.rbegin() - *set1.begin() << "\n";
}