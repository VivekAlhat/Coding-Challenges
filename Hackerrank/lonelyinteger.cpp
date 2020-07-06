#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, mask = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    for (auto el : arr)
    {
        mask = mask ^ el;
    }
    cout << mask << endl;
    return 0;
}