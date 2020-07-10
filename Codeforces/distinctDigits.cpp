#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "2020";
    set<int> digits(s.begin(), s.end());
    cout << s.size() << " " << digits.size() << endl;
    return 0;
}
