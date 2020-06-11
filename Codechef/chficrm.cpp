#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, cost, cnt, p;
        cin >> n;
        int people[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> people[i];
        }

        vector<int> chef;
        vector<int>::const_iterator pos;
        for (int i = 0; i < n; ++i)
        {
            if (people[i] == 5)
            {
                chef.push_back(people[i]);
            }
            else
            {
                cost = people[i] - 5;

                if (cost == 5)
                {
                    cnt = count(chef.begin(), chef.end(), 5);
                    if (cnt > 0)
                    {
                        pos = upper_bound(chef.begin(), chef.end(), 5);
                        p = (pos - chef.begin()) - 1;
                        chef.erase(chef.begin() + p);
                        chef.push_back(people[i]);
                    }
                }
                else if (cost == 10)
                {
                    cnt = count(chef.begin(), chef.end(), 10);
                    if (cnt > 0)
                    {
                        pos = upper_bound(chef.begin(), chef.end(), 10);
                        p = (pos - chef.begin()) - 1;
                        chef.erase(chef.begin() + p);
                        chef.push_back(people[i]);
                    }
                    else if (cnt == 0)
                    {
                        cnt = count(chef.begin(), chef.end(), 5);
                        if (cnt > 2)
                        {
                            for (int i = 0; i < 2; ++i)
                            {
                                pos = upper_bound(chef.begin(), chef.end(), 5);
                                p = (pos - chef.begin()) - 1;
                                chef.erase(chef.begin() + p);
                            }
                        }
                        chef.push_back(people[i]);
                    }
                }
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