#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string first;
    string input;
    int f;
    int cnt = 0;
    set<string> v;

    cin >> f;
    cin >> first;
    for (int i = 1; i < f; i++)
    {
        cin >> input;
        if (input == "ENTER")
        {
            v.clear();
            continue;
        }
        auto iter = v.find(input);
        if (iter == v.end())
        {
            v.insert(input);
            cnt++;
        }
        else
        {
        }
    }
    cout << cnt << "\n";
}