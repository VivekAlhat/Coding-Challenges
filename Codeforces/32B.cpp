#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    vector<int> s1;
    cin >> s;
    for (int i = 0; s[i] != '\0'; ++i)
    {
        if (s[i] == '-' && s[i] == s[i + 1])
        {
            s1.push_back(2);
            ++i;
        }
        else if (s[i] == '-' && s[i + 1] == '.')
        {
            s1.push_back(1);
            ++i;
        }
        else
        {
            s1.push_back(0);
        }
    }
    for (auto el : s1)
    {
        cout << el;
    }
    cout << "\n";
    return 0;
}