#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, del = 1;
        cin >> n;
        int matrix[n][n];
        for (int i = 0; i < n; ++i)
        {
            if (i & 1)
            {
                for (int j = n - 1; j >= 0; --j)
                {
                    matrix[i][j] = del;
                    del++;
                }
            }
            else
            {
                for (int j = 0; j < n; ++j)
                {
                    matrix[i][j] = del;
                    del++;
                }
            }
        }
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cout << matrix[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}