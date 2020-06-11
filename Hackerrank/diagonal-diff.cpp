#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    int lr = 0, rl = 0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i == j)
            {
                lr += arr[i][j];
            }

            if (i == n - j - 1)
            {
                rl += arr[i][j];
            }
        }
    }

    cout << abs(lr - rl) << endl;
    return 0;
}