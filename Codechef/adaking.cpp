#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        for (int i = 0; i < 64; ++i)
        {
            if (!(i & 7) && i != 0)
            {
                cout << "\n";
            }

            if (i == 0)
            {
                cout << "O";
            }
            else if (i < k)
            {
                cout << ".";
            }
            else
            {
                cout << "X";
            }
        }
        cout << "\n";
    }
    return 0;
}