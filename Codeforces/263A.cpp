#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6][6], cnt = 0;
    for (int i = 1; i <= 5; ++i)
    {
        for (int j = 1; j <= 5; ++j)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                cnt = abs(3 - i) + abs(3 - j);
                break;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}