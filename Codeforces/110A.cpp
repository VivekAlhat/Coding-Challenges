#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll num, cnt = 0;
    int isLucky = 1;
    cin >> num;
    string s = to_string(num);
    for (int i = 0; s[i] != '\0'; ++i)
    {
        if (s[i] == '4' || s[i] == '7')
        {
            cnt++;
        }
    }

    if (cnt <= 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        while (cnt != 0)
        {
            int temp = cnt % 10;
            if (temp != 4 && temp != 7)
            {
                isLucky = 0;
                break;
            }
            cnt = cnt / 10;
        }

        if (isLucky == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}