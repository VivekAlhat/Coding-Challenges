#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    ll countA = 0, countC = 0, countG = 0, countT = 0;
    cin >> s;

    if (s.length() == 1)
    {
        cout << 1 << endl;
        exit(0);
    }
    ll arr[4] = {0};
    for (ll i = 0; s[i] != '\0'; ++i)
    {
        if (s[i] == 'A' && s[i + 1] == 'A')
        {
            countA++;
            arr[0] = countA;
        }
        else if (s[i] == 'C' && s[i + 1] == 'C')
        {
            countC++;
            arr[1] = countC;
        }
        else if (s[i] == 'G' && s[i + 1] == 'G')
        {
            countG++;
            arr[2] = countG;
        }
        else if (s[i] == 'T' && s[i + 1] == 'T')
        {
            countT++;
            arr[3] = countT;
        }
        else
        {
            countA = 0;
            countC = 0;
            countG = 0;
            countT = 0;
            continue;
        }
    }

    for (int i = 0; i < 4; ++i)
    {
        arr[i] += 1;
    }
    sort(arr, arr + 4);
    cout << arr[3] << endl;
    return 0;
}