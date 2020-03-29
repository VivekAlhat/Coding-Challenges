#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, flag = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        /* code */
        if (arr[i] == 1)
        {
            /* code */
            flag = 1;
            break;
        }
        else
        {
            /* code */
            flag = 0;
        }
    }

    cout << (flag == 1 ? "HARD" : "EASY") << endl;
    return 0;
}
