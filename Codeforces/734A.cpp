/*
    Author: Vivek Alhat
    Program: 734 A Anton and Danik
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, anton = 0, danik = 0;
    cin >> n;
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == 'A')
        {
            anton++;
        }
        else if (s[i] == 'D')
        {
            danik++;
        }
    }

    if (anton > danik)
    {
        cout << "Anton" << endl;
    }
    else if (anton < danik)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }

    return 0;
}