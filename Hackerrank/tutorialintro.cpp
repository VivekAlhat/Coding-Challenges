#include <iostream>
using namespace std;
int main()
{
    int v, n;
    cin >> v >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        if (arr[i] == v)
        {
            cout << i << endl;
        }
    }
    return 0;
}