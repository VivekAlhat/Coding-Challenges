#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    unordered_map<int, int> umap;
    for (int i = 0; i < n; ++i)
    {
        umap[arr[i]]++;
    }

    for (auto x : umap)
    {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}