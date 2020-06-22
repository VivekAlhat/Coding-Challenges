#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int arrA[size], arrB[size];
    for (int i = 0; i < size; ++i)
    {
        cin >> arrA[i];
    }
    for (int i = 0; i < size; ++i)
    {
        cin >> arrB[i];
    }

    for (int j = 0; j < size; ++j)
    {
        cout << arrA[j] + arrB[j] << " ";
    }
    cout << "\n";
    return 0;
}