#include <bits/stdc++.h>
using namespace std;

int main()
{
    int year;
    cin >> year;
    while (true)
    {
        year += 1;
        string s = to_string(year);
        set<int> s1(s.begin(), s.end());
        if (s.size() == s1.size())
        {
            break;
        }
    }
    cout << year << endl;
    return 0;
}