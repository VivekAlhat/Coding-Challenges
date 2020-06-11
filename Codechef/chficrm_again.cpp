/* CHFICRM Trying With Different Solution */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 1;
        cin >> n;
        int people[n];

        for (int i = 0; i < n; ++i)
        {
            cin >> people[i];
        }

        int five = 0, ten = 0, fifteen = 0;

        if (people[0] > 5)
        {
            ans = 0; //set to false
        }

        for (int i = 0; i < n; ++i)
        {
            if (people[i] == 5)
            {
                five++;
            }
            else if (people[i] == 10)
            {
                if (five > 0)
                {
                    five--;
                    ten++;
                }
                else
                {
                    ans = 0;
                }
            }
            else if (people[i] == 15)
            {
                if (ten > 0)
                {
                    ten--;
                    fifteen++;
                }
                else if (ten == 0)
                {
                    if (five >= 2)
                    {
                        five -= 2;
                        fifteen++;
                    }
                    else
                    {
                        ans = 0;
                    }
                }
                else
                {
                    ans = 0;
                }
            }
        }

        if (ans == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}