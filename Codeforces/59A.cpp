#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int n = str.size();
    char s[n + 1];
    strcpy(s, str.c_str());
    int upCount = 0, loCount = 0;
    for (int i = 0; s[i] != '\0'; ++i)
    {
        char c = s[i];
        if (isupper(c))
        {
            upCount++;
        }
        else
        {
            loCount++;
        }
    }

    if (upCount == loCount)
    {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        cout << str << endl;
    }
    else if (upCount > loCount)
    {
        transform(str.begin(), str.end(), str.begin(), ::toupper);
        cout << str << endl;
    }
    else
    {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        cout << str << endl;
    }
    return 0;
}