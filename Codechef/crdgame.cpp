#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll digitsum(ll num)
{
    return num == 0 ? 0 : num % 10 + digitsum(num / 10);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, pointC = 0, pointM = 0;
        cin >> n;
        ll a, b;
        while (n--)
        {
            cin >> a >> b;
            a = digitsum(a);
            b = digitsum(b);

            if (a > b)
            {
                pointC++;
            }
            else if (b > a)
            {
                pointM++;
            }
            else if (a == b)
            {
                pointC++;
                pointM++;
            }
        }

        if (pointC > pointM)
        {
            cout << 0 << " " << pointC << endl;
        }
        else if (pointM > pointC)
        {
            cout << 1 << " " << pointM << endl;
        }
        else if (pointC == pointM)
        {
            cout << 2 << " " << pointC << endl;
        }
    }
    return 0;
}