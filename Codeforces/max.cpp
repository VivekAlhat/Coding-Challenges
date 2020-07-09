#include <iostream>
using namespace std;
int main()
{
    int a, temp = 0;
    for (int i = 0; i < 3; ++i)
    {
        cin >> a;
        if (a > temp)
            temp = a;
    }
    cout << temp << endl;
    return 0;
}