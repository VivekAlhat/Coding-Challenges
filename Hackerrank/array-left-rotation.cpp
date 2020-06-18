#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d, elem;
    cin >> n >> d;
    vector<int> before;
    for (int i = 0; i < n; ++i)
    {
        cin >> elem;
        before.push_back(elem);
    }

    for (int i = d; i < before.size(); ++i)
    {
        cout << before.at(i) << " ";
    }

    for (int i = 0; i < d; ++i)
    {
        cout << before.at(i) << " ";
    }
    cout << "\n";
    return 0;
}