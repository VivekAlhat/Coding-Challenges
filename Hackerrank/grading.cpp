#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int studs[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> studs[i];
    }

    for (int i = 0; i < n; ++i)
    {
        if (studs[i] < 38)
        {
            cout << studs[i] << endl;
        }
        else
        {
            int next = studs[i];
            for (int i = next; i < next + 10; ++i)
            {
                if (i % 5 == 0)
                {
                    next = i;
                    break;
                }
            }
            // cout << next << endl;
            if (next - studs[i] < 3)
            {
                cout << next << endl;
            }
            else
            {
                cout << studs[i] << endl;
            }
        }
    }
    return 0;
}