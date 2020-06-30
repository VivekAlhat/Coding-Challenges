#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string time = s.substr(0, 2);

    int hour = stoi(time);
    string period = s.substr(s.size() - 2);
    if (period != "AM")
    {
        if (hour != 12)
        {
            cout << hour + 12 << s.substr(2, 6) << endl;
        }
        else
        {
            cout << hour << s.substr(2, 6) << endl;
        }
    }
    else
    {
        if (hour != 12)
        {
            if (hour > 9)
            {
                cout << hour << s.substr(2, 6) << endl;
            }
            else
            {
                cout << "0" << hour << s.substr(2, 6) << endl;
            }
        }
        else
        {
            cout << "00" << s.substr(2, 6) << endl;
        }
    }
    return 0;
}
