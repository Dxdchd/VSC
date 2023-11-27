#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num;
    string name;
    string examinput;
    vector<string> v;
    unordered_map<string, int> m;
    int dogam, exam;
    cin >> dogam >> exam;
    for (int i = 0; i < dogam; i++)
    {
        cin >> name;
        v.insert(v.begin() + i, name);
        m.insert({name, i});
    }
    for (int i = 0; i < exam; i++)
    {
        cin >> examinput;
        if (examinput[0] <= 57 && examinput[0] >= 48)
        {
            num = stoi(examinput);
            cout << v.at(num - 1) << "\n";
        }
        else
        {
            auto itm = m.find(examinput);
            cout << (itm->second) + 1 << "\n";
        }
    }
}