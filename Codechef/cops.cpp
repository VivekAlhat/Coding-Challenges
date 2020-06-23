#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, x, y, cnt = 0;
        cin >> m >> x >> y;
        int arr[m], house[100];
        int tot = x * y;

        for (int i = 0; i < m; ++i)
        {
            cin >> arr[i];
        }

        for (int i = 1; i <= 100; ++i)
        {
            house[i] = 0;
        }

        for (int i = 0; i < m; ++i)
        {
            int rvalue = arr[i] + tot;
            int lvalue = arr[i] - tot;
            if (lvalue < 1)
            {
                lvalue = 1;
            }

            if (rvalue > 100)
            {
                rvalue = 100;
            }

            for (int i = lvalue; i <= rvalue; ++i)
            {
                house[i] = 1;
            }
            // cout << lvalue << " " << rvalue << endl;
        }

        for (int i = 1; i <= 100; ++i)
        {
            if (house[i] == 0)
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}