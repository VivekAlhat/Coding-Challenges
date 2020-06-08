#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int people[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> people[i];
        }

        if (n == 0)
        {
            cout << "YES" << endl;
            exit(0);
        }

        vector<int> chef;

        for (int i = 0; i < n; ++i)
        {
            if (people[i] == 5)
            {
                chef.push_back(people[i]);
            }
            else
            {
                int cost = people[i] - 5;

                int cnt = count(chef.begin(), chef.end(), cost);

                chef.erase(remove(chef.begin(), chef.end(), cost), chef.end());

                for (int i = 0; i < cnt - 1; ++i)
                {
                    chef.push_back(cost);
                }

                chef.push_back(people[i]);
            }
        }

        if (accumulate(chef.begin(), chef.end(), 0) == n * 5)
        {
            cout << "YES" << endl;
        }
        else if (people[0] > 5)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}