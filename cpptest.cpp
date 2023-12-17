#include <iostream>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<int, int> m;
    m[1] = 1;
    m[1] += 1;
    cout << m.at(1);

    m[3] = m[3] + 1;

    cout << m.at(1) << m.at(3);
}