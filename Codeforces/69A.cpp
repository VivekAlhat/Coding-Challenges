#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    int xx = 0, yy = 0, zz = 0;
    cin >> n;
    while (n--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        xx += (x);
        yy += (y);
        zz += (z);
    }
    if (xx == 0 && yy == 0 && zz == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}