#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isupper(s[i]))
            cnt++;
    }
    cout << cnt + 1 << endl;
    return 0;
}