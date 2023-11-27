#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int cnt;
    int inst;
    int num;
    stack<int> myst;

    cin >> cnt;

    for (int i = 0; i < cnt; i++)
    {
        scanf("%d", &inst);
        switch (inst)
        {
        case 1:
            scanf("%d", &num);
            myst.push(num);
            break;
        case 2:
            if (myst.empty())
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n", myst.top());
                myst.pop();
            }
            break;

        case 3:
            printf("%d\n", myst.size());
            break;

        case 4:
            if (myst.empty())
            {
                printf("1\n");
            }
            else
            {
                printf("0\n");
            }
            break;

        case 5:
            if (myst.empty())
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n", myst.top());
            }
            break;
        }
    }
}