#include <iostream>
#include <set>
#include <string>
#include <string.h>

using namespace std;

int main()
{
    int cnt;
    set<string, greater<string>> m;
    string enterOrleave, name;
    cin >> cnt;
    for (int i = 0; i < cnt; i++)
    {
        cin >> name >> enterOrleave;
        if (enterOrleave == "enter")
        {
            m.insert(name);
        }
        else
        {
            m.erase(name);
        }
    }
    for (auto iter = m.begin(); iter != m.end(); iter++)
    {
        cout << *iter << "\n";
    }
}
