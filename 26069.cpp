#include <iostream>
#include <set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int f;
    int cnt;
    set<string> s;
    string in1, in2;
    cin >> f;
    for (int i = 0; i < f; i++)
    {
        cin >> in1 >> in2;
        if (in1 == "ChongChong" || in2 == "ChongChong")
        {
            s.insert(in1);
            s.insert(in2);
            continue;
        }
        if (s.find(in1) == s.end() && s.find(in2) == s.end())
        {
        }
        else
        {
            s.insert(in1);
            s.insert(in2);
        }
    }
    cout << s.size();
}