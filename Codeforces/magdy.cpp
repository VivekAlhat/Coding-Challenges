#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 1)
    {
        cout << "Don't be lazy, it takes only few minutes, you can do it." << endl;
    }
    else if (n == 1)
    {
        cout << "Good Job\n";
    }
    else
    {
        cout << "You Rocks Man" << endl;
    }
    return 0;
}