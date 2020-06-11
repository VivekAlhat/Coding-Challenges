#include <iostream>
#include <iomanip>
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
    int pos = 0, neg = 0, zero = 0;
    for (auto elem : arr)
    {
        if (elem < 0)
        {
            neg++;
        }
        else if (elem == 0)
        {
            zero++;
        }
        else
        {
            pos++;
        }
    }

    double posans = (double)pos / n;
    double negans = (double)neg / n;
    double zeroans = (double)zero / n;

    cout << fixed << setprecision(6) << posans << endl;
    cout << fixed << setprecision(6) << negans << endl;
    cout << fixed << setprecision(6) << zeroans << endl;
    return 0;
}