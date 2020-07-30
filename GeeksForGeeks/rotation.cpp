#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    cout << "Before Rotation\n";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int rotation[n];
    for (int i = 0; i < n; ++i)
    {
        rotation[((i + k + 1) % n)] = arr[i];
    }

    cout << "After Rotation\n";
    for (int i = 0; i < n; ++i)
    {
        cout << rotation[i] << " ";
    }
    cout << endl;
    return 0;
}