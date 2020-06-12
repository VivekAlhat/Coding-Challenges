#include <bits/stdc++.h>
using namespace std;

int minOp(int arrA[], int arrB[])
{
    int count = 0;
    sort(arrA, arrA + 3);
    sort(arrB, arrB + 3);
    for (int i = 0; i < 3; ++i)
    {
        count += abs(arrA[i] - arrB[i]);
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int arrA[3], arrB[3];
        for (int i = 0; i < 3; ++i)
        {
            cin >> arrA[i];
        }

        for (int i = 0; i < 3; ++i)
        {
            cin >> arrB[i];
        }
        cout << minOp(arrA, arrB) << endl;
    }
    return 0;
}