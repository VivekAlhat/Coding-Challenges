#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    string binary;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    while (q--)
    {
        int pos, l, r, choice;
        cin >> choice;
        if (choice == 0)
        {
            cin >> l >> r;
            if (arr[r - 1] == 0)
            {
                cout << "EVEN" << endl;
            }
            else if (arr[r - 1] == 1)
            {
                cout << "ODD" << endl;
            }
        }
        else if (choice == 1)
        {
            cin >> pos;
            if (arr[pos - 1] == 0)
            {
                arr[pos - 1] = 1;
            }
            else if (arr[pos - 1] == 1)
            {
                arr[pos - 1] = 0;
            }
        }
    }
    return 0;
}