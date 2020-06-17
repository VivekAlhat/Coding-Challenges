#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int size = s.size();
        if (size <= 2)
        {
            cout << s << endl;
        }
        else
        {
            cout << s[0];
            for (int i = 1; s[i] != '\0'; ++i)
            {
                if (i % 2 == 0)
                {
                    cout << s[i];
                }
            }
            cout << s[size - 1];
            cout << "\n";
        }
    }
    return 0;
}